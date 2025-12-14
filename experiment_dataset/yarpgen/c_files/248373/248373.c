/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((((var_9 ? var_11 : (3737949400 | var_1)))))));
    var_18 = var_8;
    var_19 += -var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (arr_4 [i_0] [i_1 + 1]);
                var_21 = 227;
                var_22 = ((max((((arr_4 [15] [i_1]) ? 32994 : 1294889863)), -246)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_3] [i_2] [i_1] [i_0] [i_0] = var_12;
                                var_23 = ((+((~(((arr_4 [i_1] [i_1]) | 1294889863))))));
                                var_24 = (arr_13 [i_1 + 2] [i_3] [1] [i_3] [9] [i_4] [i_4 - 2]);
                            }
                        }
                    }
                }
                var_25 = var_3;
            }
        }
    }
    #pragma endscop
}
