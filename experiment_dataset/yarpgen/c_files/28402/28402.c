/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = (max(var_11, (~var_8)));
        var_12 += (var_4 ? 16869 : 124);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_13 += (var_5 == 16900);
        var_14 = var_0;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_15 = 48623;
                            var_16 += 16900;
                            arr_18 [1] [i_4] [i_4] [i_4] = ((~(arr_17 [9] [i_6] [i_3 - 1] [i_3 + 2])));
                        }
                        for (int i_7 = 3; i_7 < 18;i_7 += 1)
                        {
                            var_17 = (min(var_17, (((~((48667 ? ((max(-1, 63))) : (18446744073709551615 & 9223372036854775796))))))));
                            arr_22 [i_2] [15] [15] [i_7] = ((max(var_5, (arr_19 [i_3] [i_7 - 3] [i_3 - 1]))));
                            var_18 = (min(var_18, (((min((arr_9 [i_7] [i_7 + 1] [i_4] [i_3 + 2]), var_6))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_26 [i_5] [i_5] [i_5] [1] [i_5] [i_5] = (((arr_13 [i_3 - 1] [i_3 - 1] [i_3 - 1]) ? 16869 : var_5));
                            var_19 += (((((var_9 ? 48667 : (arr_19 [i_5] [i_3] [i_2])))) ? var_9 : var_10));
                            arr_27 [i_3] [i_8] [1] [i_3 - 1] [i_5] = (~1232969800503217522);
                        }
                        arr_28 [i_2] [i_2] [i_4] [i_4] [i_5] = var_1;
                    }
                }
            }
        }
        arr_29 [i_2] = ((((((-15 ? 1 : 14165)) > (arr_10 [i_2] [i_2] [6] [i_2]))) ? (((max(var_0, 65480)))) : ((-48667 ? ((48635 ? (arr_17 [i_2] [i_2] [i_2] [18]) : (arr_19 [i_2] [4] [i_2]))) : (var_0 <= var_6)))));
        var_20 = ((((min((arr_24 [0] [i_2]), var_0))) & (min(48655, 358717712))));
        var_21 = (max(var_21, ((max(-var_2, 48666)))));
    }
    var_22 = (max((min(var_2, var_2)), ((max(22, var_10)))));
    var_23 = (max(var_23, (~var_3)));
    var_24 = -58;
    #pragma endscop
}
