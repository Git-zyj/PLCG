/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = (((!var_0) & -26996));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 |= (((min((arr_9 [11] [i_0 - 1] [11] [i_0]), (arr_8 [i_0] [i_0 - 1]))) < ((var_3 - (arr_9 [i_0] [i_0 - 1] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((2311449732166304710 ? -2311449732166304708 : -32747)))));
                                var_19 |= (max((var_1 ^ var_12), (((-8889799745085690854 < (var_7 / var_8))))));
                                var_20 = var_3;
                                var_21 = (max(((max(448, (((4294967295 < (arr_5 [i_1] [i_2]))))))), 57));
                            }
                        }
                    }
                    var_22 = (max(var_22, (((var_9 ? ((((min(4, var_2)) == -2311449732166304711))) : (arr_7 [i_0] [i_1] [i_2]))))));
                }
            }
        }
    }
    var_23 = 3;
    #pragma endscop
}
