/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(((var_13 == ((max(var_13, -1))))))));
    var_16 = (min(((min(-457082102, -var_6))), (max(((max(1372570997, 24285))), var_8))));
    var_17 = (max(((min(11955721441019886258, var_13))), ((max(3372962, var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [0] [i_1] [i_2] [i_0] [i_4] = (((((3340035810 ? var_13 : ((39 ? (arr_12 [i_0] [i_1] [i_2] [i_4 - 1]) : (arr_6 [19] [i_0])))))) ? (((arr_15 [i_0] [19] [i_2] [19] [i_2] [i_0] [i_0]) - 8361322288277985381)) : (~3167)));
                                arr_17 [i_0] [12] [i_0] [i_0] [12] = (((3340035810 ? (arr_5 [i_0] [i_0]) : 954931487)) + ((max((24309 / var_7), 2147483647))));
                            }
                        }
                    }
                }
                arr_18 [i_0] [i_0] [i_0] = ((3340035823 ? (arr_8 [15]) : -1));
            }
        }
    }
    #pragma endscop
}
