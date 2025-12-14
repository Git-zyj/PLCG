/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((((min(var_6, var_15))) >= var_7))), var_4));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] &= ((((((arr_1 [i_0] [i_0]) + var_2))) ? ((((arr_0 [i_0]) && var_8))) : var_13));
        arr_5 [i_0] = (((max((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))), (arr_2 [16] [i_0]))) + (((arr_1 [i_0] [i_0]) ? (var_6 + var_16) : ((min(var_14, (arr_1 [i_0] [i_0]))))))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_21 -= (~3620355227640202211);
        arr_8 [i_1 - 1] [i_1] &= (!var_12);
        var_22 = (min(var_22, (((!(((-(var_5 || var_9)))))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_13 [i_1 - 1] [i_2] = ((-95 ? (arr_6 [i_1 + 1]) : ((((arr_9 [i_2] [20]) << (var_14 + 134))))));
            arr_14 [i_1] [i_2] = (((arr_10 [i_1]) % ((var_9 ? var_17 : var_7))));

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                arr_19 [0] [i_3] [i_1] = (((var_0 || var_12) ? (arr_7 [i_1 + 1] [i_1]) : var_16));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_23 *= (var_6 * var_1);
                            var_24 = (min(var_24, ((((arr_23 [i_1 + 2] [i_1 + 1] [i_1 + 1]) ? var_8 : (arr_23 [i_1 + 1] [i_1 + 1] [i_1 - 1]))))));
                            var_25 = (((((arr_17 [i_1 + 1] [i_1 + 2] [i_1]) ^ (arr_20 [i_1] [i_2] [11] [i_1] [i_5]))) << (var_17 - 679289450)));
                            var_26 = (max(var_26, (((~(~1))))));
                        }
                    }
                }
                arr_24 [i_3] [i_3] = var_6;
                arr_25 [4] [i_3] [i_3] [i_2] = (arr_23 [i_3] [i_2] [i_1 - 1]);
            }
            var_27 = (min(var_27, (arr_17 [i_2] [i_2] [i_1 + 2])));
        }
    }
    #pragma endscop
}
