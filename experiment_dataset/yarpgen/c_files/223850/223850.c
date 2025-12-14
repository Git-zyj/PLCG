/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_11 = (max((arr_5 [i_4 - 1] [i_0] [i_0] [i_3 + 1]), ((~(arr_5 [i_4] [i_0] [i_0] [i_3 - 1])))));
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_0] |= (((!var_3) ? (((((min((arr_3 [i_3]), (arr_6 [i_4] [i_0] [i_1] [i_0]))))) - var_2)) : var_3));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_12 = var_6;
                    var_13 = var_5;
                    arr_18 [i_0] = (((var_7 + var_0) * ((min(((~(arr_3 [i_0]))), (arr_4 [i_0]))))));
                    var_14 = var_10;
                }
                var_15 = ((~(12435559622542673463 % 12435559622542673463)));
                arr_19 [i_0] = (min(((var_3 ? ((min((arr_15 [i_0]), (arr_10 [i_0] [i_0] [1] [i_0] [i_0] [i_1])))) : (((12435559622542673466 < (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [18] [i_0])))))), (((var_7 == ((-4 & (arr_1 [i_0] [i_0]))))))));
            }
        }
    }
    var_16 = (max(var_16, ((!((((!var_2) % (var_4 & var_5))))))));
    var_17 = ((((max(var_0, 1))) ? var_2 : var_4));
    #pragma endscop
}
