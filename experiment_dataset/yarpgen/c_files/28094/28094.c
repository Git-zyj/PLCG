/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_7 != (((var_3 * var_17) * (var_8 * var_7))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 ^= ((((((max((arr_0 [i_0] [i_0]), var_1))) ? (((arr_0 [1] [1]) ? var_10 : var_0)) : (arr_1 [i_0]))) >= (arr_1 [i_0])));
        var_21 = (((((arr_1 [i_0]) && (arr_0 [i_0] [i_0]))) && (!var_1)));
        var_22 = (((-16597 + 2147483647) << (((arr_1 [1]) - 1))));
        arr_2 [i_0] = var_2;
    }
    var_23 -= (max(32, -10423));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_24 = (min(var_24, ((((~1) ? ((var_10 + (arr_11 [0] [i_1] [i_1] [i_1]))) : (arr_9 [i_2]))))));
                        var_25 = (max(var_25, (~-11945)));
                        arr_13 [i_4] = (((arr_12 [i_1] [i_1] [i_1] [i_4] [i_1]) >> ((min((arr_10 [7] [i_2] [i_2] [i_2]), (arr_8 [i_3] [1] [i_1]))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_26 = (((((arr_11 [i_1] [i_2] [i_1] [i_5]) + 2147483647)) >> ((((arr_10 [9] [i_2] [9] [6]) <= var_13)))));
                        var_27 = (((((-(arr_6 [i_1] [1])))) ? (arr_15 [i_5] [i_3] [i_2]) : var_3));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_28 = (((((max(var_10, (arr_5 [9] [i_2] [i_2]))))) * (~var_3)));

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_29 &= ((-((((~(arr_8 [i_1] [i_1] [i_3]))) * var_5))));
                            var_30 = 11933;
                            var_31 ^= -var_1;
                        }
                        var_32 = (arr_5 [i_1] [i_1] [i_1]);
                        var_33 = ((((-(!var_9))) % (arr_14 [8] [i_2] [i_3] [7] [i_1])));
                    }
                    var_34 = (min(var_34, (((+(((!((max((arr_14 [i_3] [11] [i_2] [i_1] [i_1]), var_2)))))))))));
                    var_35 = (~var_0);
                }
            }
        }
    }
    #pragma endscop
}
