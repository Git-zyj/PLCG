/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_2] [i_3] [i_3] [i_3] [i_3] = (((0 & -31366) >> ((((var_7 ? var_2 : 9223372036854775807)) + 356999086528932866))));
                                arr_14 [i_0] [i_1] [i_1 - 1] [i_2 - 1] [i_2] [i_4 + 1] = ((!((var_5 > (1 > 84)))));
                                arr_15 [i_2] = ((-((((!var_7) && var_3)))));
                            }
                        }
                    }
                    arr_16 [i_2] [i_0 + 2] [i_2] = 6923828265729026633;
                    arr_17 [i_0] [i_0] [i_2] = ((var_7 ? ((0 ? 13 : 1)) : ((var_15 ? var_15 : 17530825666686552340))));
                    arr_18 [i_2] [i_1 + 2] [i_2] [i_0] = (((var_4 && var_12) ? (1 ^ 1) : (max(-3339926101007631494, 1))));
                }
            }
        }
    }
    var_17 = 15643772966890118088;
    var_18 = (max(var_18, 0));
    #pragma endscop
}
