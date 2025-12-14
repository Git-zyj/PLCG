/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_5;
    var_18 = (~var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = ((-var_0 != (((~(min(188, (arr_5 [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = (~(min((min((arr_1 [i_0]), 18446744073709551615)), (((var_1 ? var_6 : var_14))))));
                                arr_11 [i_2] [i_1] [i_2] [i_3] [11] = 65;
                                arr_12 [i_0] [i_1] [i_2] [7] [i_4] = (arr_4 [i_1 + 1] [i_1 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_8;
    #pragma endscop
}
