/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= -94792908;
    var_14 = (!94792881);

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_15 = (min(var_15, ((((((~(arr_1 [i_0 - 1])))) ? (((var_6 + var_3) ? (arr_1 [i_0]) : 3549957427626181275)) : (((151 ^ var_1) ? ((var_4 ? var_2 : -3549957427626181292)) : var_12)))))));
        arr_2 [i_0] [11] = (~15493281838936850316);
        var_16 = var_2;

        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            var_17 = -25142;
            var_18 = (var_0 ? (arr_3 [2]) : ((((~(arr_0 [i_0]))))));
            var_19 ^= (((var_4 ? (arr_6 [0] [i_1] [i_1]) : (((arr_4 [i_0] [i_0] [i_0]) ? (arr_5 [i_1]) : (arr_0 [i_1]))))));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
            {
                var_20 = (min(((var_11 ? 110 : 1512968321)), 4));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_16 [i_0] [i_0] [i_4] = ((!(arr_3 [i_0 - 1])));
                    arr_17 [7] [i_4] [i_3] = ((118 & (arr_12 [i_0 - 1] [i_0 + 1] [i_0 + 2])));
                    arr_18 [i_4] = (arr_1 [i_0 + 2]);
                    var_21 ^= (((((var_9 ? (arr_14 [9] [9] [i_3] [i_3] [i_3]) : 2781998960))) ? var_3 : var_6));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_22 ^= (!255);
                            var_23 ^= (((arr_8 [i_0 + 2] [i_0 + 1] [i_0 - 1]) / (((arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 2]) ? (arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 2]) : (arr_8 [i_0 + 2] [i_0 + 1] [i_0 + 1])))));
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = (min(var_3, (max(var_0, var_9))));
                            arr_25 [i_0] [i_2] [i_3] [i_5] [i_6] = (((arr_23 [i_3] [i_5] [i_6 + 4] [i_5] [i_6] [i_6] [i_3]) ? ((((!(arr_23 [i_6] [12] [i_6 - 1] [1] [12] [i_6] [12]))))) : (max((arr_23 [5] [i_2] [i_6 + 1] [i_6] [i_6] [i_6] [i_6]), var_11))));
                        }
                    }
                }
                var_24 ^= (-127 - 1);
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
            {
                arr_28 [i_0] [i_0] [i_0] [i_0] = (((!var_6) ? (var_0 ^ var_4) : (arr_7 [i_2] [i_2] [i_0])));
                arr_29 [i_2] [i_2] [1] = ((var_10 ? var_10 : (~var_0)));
                arr_30 [i_0] = ((var_0 ? (arr_12 [i_0] [i_0] [i_0 + 1]) : var_0));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        {
                            arr_40 [i_10] [i_2] [8] [i_9] [i_10] [i_2] [8] = (arr_34 [i_0 + 2] [i_2] [i_9] [i_10] [i_9]);
                            var_25 = (((arr_3 [i_0 + 1]) ? var_12 : var_1));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        {
                            arr_48 [i_12] [1] [i_8] [i_2] [i_0] = var_7;
                            var_26 = ((~(arr_39 [i_8] [i_8] [i_12 - 1] [i_12 - 1] [i_12])));
                        }
                    }
                }
                var_27 = (max(var_27, (((~(((arr_20 [i_2] [i_2] [i_2] [i_2]) * 0)))))));
            }
            var_28 = (min(var_28, (((((((var_12 | var_2) ^ var_4))) ? ((-1061287240 ? -109 : 180)) : (~var_2))))));
        }
        arr_49 [i_0] [i_0] = (max((max((min(var_8, var_9)), (arr_3 [i_0 + 1]))), var_3));
    }
    #pragma endscop
}
