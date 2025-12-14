/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_20 |= (arr_0 [1] [i_1]);
            arr_6 [i_0] [i_0] [i_0] = ((var_7 ? (arr_2 [i_0 + 1]) : (arr_0 [i_0 - 1] [i_0 + 1])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0] = (arr_2 [i_0]);

                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            arr_16 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0] |= var_11;
                            var_21 |= 8806043678427896167;
                            var_22 = (arr_10 [i_4] [13] [17] [13] [i_3] [i_0 - 1]);
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_23 |= (arr_4 [i_0] [2]);
                            var_24 = (((1594999278 || (arr_14 [i_0] [i_0] [i_0] [i_3] [i_5]))));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_25 |= (((((1 % (arr_13 [i_1] [0] [i_3] [7])))) ? var_8 : 1352285237));
                            arr_21 [i_0] [i_1] [1] [i_0] [i_1] = (((arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]) ? (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [5] [i_0] [i_0 + 1]) : (arr_9 [i_0 - 1] [i_0 + 1] [i_0 - 1] [4] [i_0 - 1] [i_0 + 1])));
                            var_26 = (((arr_5 [i_0] [i_0 + 1] [5]) ? ((-1594999261 ? 1 : 46861)) : var_0));
                            var_27 = (((arr_18 [i_0] [i_0 + 1]) ? (arr_18 [i_6] [i_0 + 1]) : var_4));
                        }
                    }
                }
            }
            var_28 = (((~323131389) | (1 * 3254190379319727368)));
            var_29 = (-9223372036854775807 - 1);
        }
        var_30 = var_13;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    {
                        var_31 = (arr_4 [i_0] [i_7]);

                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            arr_34 [5] [i_7] [3] [3] [i_9] [i_9] [3] = ((~(((arr_19 [9] [9] [i_8] [i_9] [4]) ? (arr_33 [i_0 - 1] [i_7] [i_8] [i_7] [i_10]) : (arr_33 [i_0] [i_0] [i_0] [i_9] [1])))));
                            var_32 = ((-18 ? var_1 : (arr_7 [i_0] [i_7] [i_9 + 3])));
                            arr_35 [i_9] [i_8] [i_9] = ((var_11 + ((-53 ? -3254190379319727369 : 2147483647))));
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_33 = (~-7111);
                            arr_39 [i_9] [i_7] [i_7] [i_7] [i_7] = ((var_2 ? var_17 : ((var_4 ? var_4 : var_5))));
                            var_34 = 148294739113935902;
                        }
                        for (int i_12 = 2; i_12 < 18;i_12 += 1)
                        {
                            var_35 = ((32684 > (arr_33 [i_12] [14] [14] [i_0] [i_0])));
                            var_36 = (arr_37 [i_0] [i_0] [i_0 + 1] [i_9] [7]);
                            arr_42 [i_8] [i_7] |= 323131389;
                        }
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            var_37 = (((arr_0 [i_0 + 1] [i_0 + 1]) ? (arr_10 [i_9 - 1] [i_9] [i_9] [i_9 + 3] [i_9 - 1] [i_0 - 1]) : (arr_18 [i_0] [2])));
                            var_38 |= 17622;
                            var_39 = (arr_38 [i_9 + 1] [i_9 + 2] [i_9] [i_9] [i_9 + 4] [i_9 + 2]);
                        }
                    }
                }
            }
        }
    }
    for (int i_14 = 1; i_14 < 18;i_14 += 1) /* same iter space */
    {
        arr_47 [i_14] = (min((arr_27 [i_14 + 1] [i_14] [i_14 + 1] [i_14 - 1]), 65));
        var_40 = (max(((var_2 ? ((max(var_0, var_18))) : (max(1, var_15)))), (arr_43 [1] [i_14 - 1] [i_14])));
        var_41 |= (((min((arr_25 [i_14 + 1]), 3030))) ? ((max(var_5, ((-(arr_40 [i_14] [i_14 - 1] [3] [i_14 - 1] [i_14] [i_14 - 1])))))) : (((arr_22 [i_14]) ? ((42876 ? var_15 : (arr_22 [i_14]))) : (arr_1 [i_14 - 1]))));
        var_42 = 8449;
    }
    var_43 = var_18;
    #pragma endscop
}
