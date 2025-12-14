/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_12));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((((min(-1, (arr_1 [i_0]))) | (min(((1 * (arr_0 [i_0]))), (1269342409 / 5898960138330939269))))))));
        arr_2 [i_0] [i_0] = (((max((arr_1 [i_0]), ((155 ? (arr_1 [i_0]) : 1))))) ? (max((arr_1 [i_0]), (arr_0 [i_0]))) : (((93 ? 81 : 101))));
        var_17 = ((((((((var_10 ? var_13 : -47))) ? (arr_1 [i_0]) : (arr_0 [i_0])))) ? (281474976710655 * var_12) : ((max(65535, (((arr_0 [i_0]) / 180)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [i_2] = 155;
                        arr_13 [i_0] [i_2] [i_2 - 1] [i_3] = (min((max(1440942404, var_13)), ((max((82 != -1), (arr_6 [i_2] [i_2]))))));
                        var_18 = (((((((max((arr_1 [i_3]), -8301124688122545175))) ? 284 : ((1 + (arr_10 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0])))))) ? -826229307 : (arr_7 [i_0] [i_0] [i_0] [i_0])));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    arr_22 [i_4] [i_6] [i_6] = ((!((max((max(-2118406395, 0)), (806 - 0))))));
                    arr_23 [i_4] [i_5] [i_4] [i_6] = (arr_9 [i_6] [i_5]);
                    var_19 += (((2190351179 ? (arr_21 [i_4] [i_5] [i_6]) : (arr_21 [i_4] [i_5] [i_6]))));
                    arr_24 [i_4] [i_4] [i_6] = ((188 && (((~(arr_20 [i_4] [i_4]))))));
                }
            }
        }
        var_20 = ((((((arr_6 [i_4] [i_4]) ? 1 : ((93 / (arr_7 [i_4] [i_4] [i_4] [i_4])))))) ? (((!(arr_15 [i_4] [i_4])))) : 0));
        var_21 = (((arr_5 [i_4]) / (((((arr_5 [i_4]) > var_10)) ? ((var_4 / (arr_3 [i_4]))) : ((-(arr_19 [i_4] [i_4] [5])))))));
    }

    for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
    {
        var_22 = 166;
        var_23 = ((6839570589820849281 ? 255 : ((max((arr_26 [16]), (arr_26 [i_7 - 1]))))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 16;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 17;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 17;i_12 += 1)
                        {
                            {
                                var_24 = (((((15590 ? (arr_27 [i_8]) : 293577817956965402))) ? 8833 : (arr_34 [i_8 + 1] [i_9 + 1] [i_10 - 1] [i_12 - 1])));
                                var_25 += (((arr_28 [i_12 - 3]) <= var_6));
                                arr_39 [i_9] [i_9 + 1] [i_10] [i_11] = ((-6839570589820849281 < (arr_36 [i_8] [i_9 + 1] [i_8] [i_12 - 3] [i_12])));
                            }
                        }
                    }
                    arr_40 [i_8] [i_9] [i_8] [i_8] = ((1 ? -561749923 : 188));
                }
            }
        }
        arr_41 [i_8 + 2] = (arr_38 [i_8] [i_8] [i_8] [i_8 - 1] [i_8 + 2] [i_8 - 1]);
    }
    var_26 -= (((~var_12) != var_2));
    var_27 = var_9;
    #pragma endscop
}
