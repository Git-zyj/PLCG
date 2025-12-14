/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (arr_1 [i_1]);
                    var_13 &= var_0;

                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        arr_8 [i_0] [i_2] [i_2] [i_3] = ((max(var_0, 65532)));
                        var_14 = (arr_2 [i_1 - 2] [i_2] [i_3]);

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_15 = ((((max(-var_3, var_6))) ? 21 : var_2));
                            arr_12 [i_2] [i_1 - 1] [i_2] [i_2] = (((((arr_10 [i_3] [i_3 - 1] [i_3 - 1] [i_2] [i_3] [i_3] [i_3 - 2]) + (arr_10 [i_3] [i_3 - 1] [i_3 + 3] [i_2] [i_3] [10] [i_3 + 2]))) - (6 * var_1)));
                            arr_13 [i_2] [i_2] [i_4] = (250 + 21);
                        }
                    }
                }
            }
        }
    }
    var_16 = ((var_3 % (((var_3 * var_1) ? (((-2147483647 - 1) / var_3)) : var_9))));
    #pragma endscop
}
