/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 += ((164 ? (max(((min(var_7, var_13))), (arr_6 [i_2 + 2]))) : (17 * 238)));
                    arr_8 [i_0] [i_0] [i_2] [i_2] = (((~16164676330059690939) > (~1985730895)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1 + 1] [19] [17] [i_3 + 3] [i_4] = (max(((var_3 ? 164 : 3699602084)), (!-8157691826393275230)));
                                arr_15 [i_0] [i_0] [i_0] [i_0] = ((((((arr_12 [0] [15] [i_1 + 1] [i_2] [i_3 - 3] [i_4]) >> (((~1578105419776548978) - 16868638653933002619))))) ? (arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] [18]) : ((((((arr_6 [i_2 - 1]) ? var_15 : 1817181302))) ? (~var_1) : ((min(3699602075, var_8)))))));
                                arr_16 [i_0] [19] [i_2] [i_3] [i_4] = (max((max(var_5, -79)), (((max((arr_0 [i_0]), var_15))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 ^= (1720238881 >= var_7);
    #pragma endscop
}
