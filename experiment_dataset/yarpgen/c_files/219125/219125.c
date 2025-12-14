/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(((var_10 != var_7) * (var_4 - var_4)))));
    var_17 = ((max((min((-9223372036854775807 - 1), var_6)), ((var_3 ? 121 : var_4)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 16676332125386885099;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = ((((min(-var_5, -711483127))) ? var_15 : var_9));
            arr_6 [i_0] = var_11;
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_18 -= (((-(var_15 / -711483122))));
                        var_19 = (max(var_19, (((var_3 > (((arr_0 [i_2 - 1]) ? (arr_4 [i_3 + 2] [i_2 - 1] [i_1]) : (max((arr_1 [i_0] [i_0]), 9223372036854775807)))))))));

                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            arr_15 [i_3 + 1] [i_3] = (--8545339069949443582);
                            arr_16 [i_4 - 1] [i_3] [i_3] [i_0] [i_0] = ((((var_10 - (arr_13 [i_0] [i_0] [i_0] [i_3] [i_4])))));
                        }
                        var_20 = ((+(max((arr_11 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_1] [i_0] [i_2]), (arr_11 [i_2 + 2] [i_1] [i_2] [i_3 + 4] [i_0] [i_3])))));
                    }
                }
            }
        }
        for (int i_5 = 3; i_5 < 17;i_5 += 1)
        {
            var_21 = -711483126;
            var_22 = ((((-(arr_13 [i_5] [i_5] [i_5] [i_5] [i_5 + 1]))) != ((((!((min(var_12, (arr_18 [i_0] [i_0] [i_0]))))))))));
            var_23 = 711483122;
        }
        var_24 = var_9;
    }
    var_25 += ((var_11 >= (((var_11 ? var_0 : var_1)))));
    #pragma endscop
}
