/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_6;
        var_14 = (max(var_14, (((~(arr_2 [i_0] [i_0]))))));
        var_15 = ((((((arr_0 [i_0]) / -32745))) ? (arr_2 [5] [i_0]) : (((-9223372036854775807 - 1) ? var_1 : 24015))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                arr_10 [i_1] [i_1] = (((min(var_13, (min(var_3, (arr_6 [i_1] [i_1]))))) ? (min(6452194836205412350, -var_9)) : -14239));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_16 *= ((-(((arr_11 [i_1] [i_2]) ? -24224 : 1))));
                            var_17 = ((var_5 ? var_2 : ((-(arr_7 [i_4 - 1])))));
                            arr_15 [i_1] [i_1] [i_3] [13] = (min(-228505002264786378, (min(5297239038818892134, 1))));
                        }
                    }
                }
                var_18 = var_4;
                var_19 = (max(var_19, ((max(-22410, 56)))));
            }
        }
    }
    var_20 = var_3;

    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_21 = (min(22484, ((-(min((arr_11 [14] [i_5]), var_9))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_8 = 3; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        var_22 = (min(var_22, (arr_23 [i_5] [0] [2] [13])));
                        arr_28 [i_5] [i_5] [i_5] [8] [9] [i_5] = (((arr_13 [17] [i_6] [4] [i_8 - 2]) ? (arr_11 [i_5] [i_6]) : 1));
                        arr_29 [i_8] [i_8] [1] [i_6] [i_5] [i_5] = (arr_18 [i_5] [i_5] [i_5]);
                    }
                    for (int i_9 = 3; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        var_23 = (!2583611619283976130);
                        var_24 = (((((var_10 ? var_11 : var_5) - (arr_4 [i_9 + 1])))));
                    }
                    arr_33 [i_5] [i_5] [i_5] [1] = (((((0 ? -1 : -59)) ? var_9 : var_5)));
                    arr_34 [i_6] [i_6] = var_6;
                    arr_35 [i_5] [i_5] [i_5] [i_7 - 2] = arr_30 [i_7 - 2] [i_6] [i_6] [i_5];
                    var_25 = (arr_8 [i_5] [1] [i_7 - 1]);
                }
            }
        }
        var_26 -= (arr_26 [i_5] [1] [10] [10] [i_5]);
        var_27 = ((var_4 ? ((((var_9 + (arr_13 [14] [i_5] [i_5] [1]))) / (arr_31 [i_5] [i_5] [1] [i_5] [i_5]))) : var_3));
    }
    var_28 = var_10;
    #pragma endscop
}
