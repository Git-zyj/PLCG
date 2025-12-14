/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((-(arr_6 [i_0 + 1] [i_0 + 3] [i_0 + 2])))));
                    var_15 = (arr_2 [i_0]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_0] = (((arr_10 [i_3] [i_2] [i_0] [i_1] [i_0]) ? (arr_5 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 2]) : (arr_2 [i_3])));
                        var_16 = ((251 ? 1 : (((arr_9 [i_1]) ? var_10 : var_4))));
                        arr_12 [1] [i_0] [i_1] [i_1] [i_0] [i_0] = ((-(arr_1 [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_17 -= (((arr_13 [i_2] [i_0] [i_0]) ? (((arr_14 [i_0] [i_0] [i_2] [i_4]) / (arr_1 [i_2]))) : ((max((arr_9 [i_0 + 3]), var_9)))));
                        var_18 = ((arr_5 [i_0 - 2] [i_0 - 2] [i_2] [i_4]) ? ((~(arr_14 [i_0 - 1] [i_0 - 1] [14] [i_4]))) : (arr_3 [i_0 - 2] [6] [i_2]));
                        var_19 = (((arr_2 [i_0]) - (arr_1 [i_0])));
                        var_20 = (max(var_20, (arr_6 [i_0] [i_0] [i_0 + 3])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_21 = var_8;

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_22 = (((arr_16 [i_5]) ? (8140184192018150835 && 8140184192018150840) : (arr_4 [i_1] [i_2] [1])));
                            var_23 = (((arr_18 [i_0] [i_0] [21] [i_5] [21] [21]) ? var_11 : ((((!(arr_6 [i_1] [i_2] [i_6])))))));
                        }
                        var_24 = var_9;
                        var_25 *= ((-((-(arr_18 [i_0] [i_1] [i_1] [i_1] [i_5] [i_1])))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_0] = (arr_4 [i_0 - 2] [i_0 - 2] [i_7]);
                        var_26 *= (~var_3);
                        var_27 *= (arr_1 [i_1]);
                        arr_26 [i_0 - 1] [i_1] [i_2] [i_0] = var_11;
                        var_28 += (((18422 ? (arr_22 [i_0] [14] [i_2] [3] [i_2] [3]) : var_5)));
                    }
                }
            }
        }
        var_29 = (max(var_29, 8140184192018150818));
        var_30 = ((1 ^ (max(((54043195528445952 ? var_6 : 242)), (arr_13 [i_0] [i_0] [i_0])))));
    }
    for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
    {
        var_31 = (max(var_31, var_2));
        arr_30 [i_8] [i_8] = 2112350347159008458;
    }
    for (int i_9 = 2; i_9 < 20;i_9 += 1) /* same iter space */
    {
        arr_33 [17] [i_9 + 1] = ((-(arr_15 [i_9] [i_9] [i_9] [22] [i_9] [i_9])));
        var_32 -= ((min((arr_18 [i_9] [4] [i_9] [i_9] [4] [i_9]), ((min((arr_24 [8] [i_9] [8] [6] [i_9 + 1] [i_9]), (arr_5 [i_9] [4] [i_9] [i_9])))))));
        arr_34 [0] = ((((max(((10306559881691400779 ? (arr_28 [i_9]) : 8347701972856196003)), (1773648222 - 10306559881691400798)))) ? (((var_5 ? -17 : (((arr_4 [1] [i_9] [i_9 - 2]) ? 1 : (arr_14 [i_9] [i_9 + 3] [i_9 + 3] [i_9])))))) : 10306559881691400761));
        var_33 = ((((((var_9 ? (arr_28 [17]) : (arr_24 [i_9] [12] [i_9] [20] [i_9] [i_9])))) ? (arr_13 [i_9 + 3] [i_9 + 3] [i_9 - 1]) : ((-(arr_32 [1]))))));
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 20;i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    arr_43 [i_11] [i_12] = var_8;
                    var_34 = (max(var_34, 18446744073709551615));
                    arr_44 [i_11] [i_11] [i_11] [i_11] = (arr_17 [i_10]);
                }
            }
        }
        arr_45 [i_10] = ((~(arr_0 [6])));
    }
    var_35 = ((min(var_8, 2765419685107411642)));
    var_36 = (min(var_36, (((((((var_4 ? 247 : var_5)) & 18446744073709551607)))))));
    #pragma endscop
}
