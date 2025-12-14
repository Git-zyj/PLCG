/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_15 ? var_5 : (min((((var_13 ? var_5 : var_9))), (var_19 ^ var_18)))));
    var_21 = (max(var_18, ((max(var_17, -var_7)))));
    var_22 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = (var_13 ? ((~(arr_0 [i_0]))) : (arr_3 [i_0]));
        var_23 = (min(var_23, ((((arr_0 [i_0]) % (arr_0 [i_0]))))));
        var_24 = (min(var_24, (arr_3 [0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_9 [i_1] = ((-((+(max((arr_5 [i_1] [i_1]), var_14))))));
        var_25 = (max(var_25, (((var_5 ? (((arr_7 [i_1]) ? (arr_8 [i_1] [5]) : ((min((arr_5 [i_1] [16]), (arr_5 [12] [i_1])))))) : ((((!((!(arr_7 [i_1]))))))))))));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            var_26 = ((arr_10 [i_2 - 1] [i_2]) ? (arr_10 [i_2 - 1] [i_2]) : (arr_10 [i_2 - 1] [i_2 - 2]));
            arr_14 [i_2] [i_2] [3] = (((var_6 >= var_5) <= (~var_8)));
            arr_15 [i_1] [i_2] = ((-((-(-127 - 1)))));
        }
        /* vectorizable */
        for (int i_3 = 4; i_3 < 20;i_3 += 1)
        {
            var_27 = (min(var_27, (((~(arr_17 [i_3 - 2] [i_3 - 2] [i_3 - 2]))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        var_28 *= -var_17;

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_29 = ((-(arr_8 [i_3 - 2] [i_3 - 1])));
                            arr_25 [i_6] [i_5] [i_4] [i_4] [5] [i_1] = (((((117 ? 1 : 0))) ? (!var_11) : var_6));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_28 [i_1] [i_3] [i_4] [i_5] [10] = var_6;
                            arr_29 [6] [i_3] [6] [i_5] [i_7] = (((arr_23 [i_3 - 3] [i_3 + 1]) < var_8));
                            var_30 = (((arr_11 [i_3 - 2] [i_1] [i_1]) ? 0 : (arr_11 [i_1] [1] [i_5])));
                            var_31 = (arr_21 [i_1] [i_3] [i_4] [i_3]);
                            var_32 = var_2;
                        }
                    }
                }
            }
            arr_30 [i_1] = ((-(arr_17 [i_3 + 1] [i_3] [i_3 - 2])));

            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                var_33 *= var_14;
                arr_34 [i_8] [12] [i_1] [i_8] = (((arr_23 [i_3 - 4] [i_1]) ? var_12 : var_5));
                var_34 = ((-(arr_20 [i_3 - 2] [i_3 - 3] [i_3 + 1])));
            }
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            arr_37 [i_1] [1] = ((-(arr_18 [i_1] [i_9] [i_9])));
            var_35 = (arr_24 [i_9]);
            arr_38 [8] [i_1] [i_9] = (min(((var_6 * (arr_27 [i_1] [i_1] [i_1] [i_9] [i_1]))), ((((((var_2 || (arr_5 [3] [i_1])))) % (arr_17 [i_9] [i_9] [i_1]))))));
        }
    }
    #pragma endscop
}
