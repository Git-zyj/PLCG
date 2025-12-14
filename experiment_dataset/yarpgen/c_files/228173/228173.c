/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    arr_7 [i_2] = (((var_7 + 2147483647) << (((arr_1 [i_1 + 1]) - 1))));
                    var_19 = (1 | var_11);

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_20 |= var_15;
                        var_21 ^= (!var_0);
                    }
                    arr_10 [i_0] [i_2 - 1] [i_2] = ((arr_0 [i_2 - 1]) ? (arr_1 [i_2 - 1]) : var_7);
                }
                for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    var_22 = (min(var_22, var_0));
                    arr_13 [15] [15] [i_4 + 1] = ((~var_6) <= (((-(arr_3 [i_1 + 1] [i_1 + 1])))));
                    var_23 = (min((54 & 6005038310602902886), ((((arr_5 [i_4] [i_4 - 1] [i_4]) | 15589)))));
                    var_24 = var_14;
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_25 = var_6;
                        arr_21 [i_5] [i_1] [i_1] [i_5] = (arr_9 [i_5] [i_0] [i_5]);
                        var_26 = (min(var_26, var_12));
                    }
                    arr_22 [i_5] [1] = (((((~(arr_3 [i_0] [13])))) ? (arr_14 [i_1 + 1] [i_0] [i_0]) : var_8));
                    arr_23 [i_0] [i_5] [i_1] [1] = (var_15 ? (arr_18 [i_5 - 1] [i_1 + 1]) : (arr_12 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_1 + 1]));
                }

                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_27 = (max(1, 201));
                    arr_26 [i_7] [i_7] [i_1 + 1] [i_0] = ((((min(55, 77))) ? (!-15589) : ((min((arr_6 [i_1 + 1] [15] [15] [15]), (arr_6 [i_1 + 1] [i_1] [i_7] [i_1]))))));
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_28 = (max(var_28, (((0 ? 591214278 : 6)))));
                    arr_29 [i_0] [i_0] [i_0] [i_0] = (max((arr_19 [6] [1] [6] [i_1]), (--229)));
                    var_29 = (((arr_15 [i_0] [i_0] [i_0] [i_0]) ? (((max(var_9, (arr_1 [16]))))) : ((~((0 | (arr_14 [i_8] [i_0] [i_0])))))));
                    var_30 = (min(var_30, ((((arr_1 [i_0]) ? ((~(arr_6 [i_1 + 1] [i_1 + 1] [i_0] [i_1 + 1]))) : ((~((((arr_4 [i_0] [i_0] [i_8]) < var_1))))))))));
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_31 = min(-764759100, -54);
        arr_32 [1] [i_9] |= (min((((arr_6 [i_9] [i_9] [i_9] [i_9]) | (arr_6 [i_9] [i_9] [i_9] [i_9]))), (arr_17 [i_9] [i_9] [i_9] [i_9])));
        var_32 = (max(var_32, ((((((((arr_28 [i_9] [i_9] [1] [i_9]) << (var_7 + 21042))) ^ (arr_2 [i_9]))) <= 6)))));
    }
    for (int i_10 = 3; i_10 < 17;i_10 += 1)
    {
        var_33 = var_17;
        arr_35 [i_10] = 15591;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        var_34 = (((((var_11 > (arr_37 [i_11] [i_11])))) / (((arr_36 [i_11]) ? 221 : var_3))));
        var_35 |= (arr_37 [i_11] [i_11]);
        arr_38 [i_11] = ((1016 + (arr_36 [i_11])));
    }
    var_36 = ((!(~1)));
    #pragma endscop
}
