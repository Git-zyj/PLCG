/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (~-var_1)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((!(arr_1 [i_0])));
        var_21 = ((((min(-var_5, (arr_1 [i_0])))) ? (((arr_1 [i_0]) >> ((((~(arr_0 [i_0] [i_0]))) - 2065831787)))) : ((min((arr_1 [13]), (arr_1 [i_0]))))));
        var_22 = (((arr_1 [i_0]) ? (((((~(arr_1 [3])))) ? ((((var_18 && (arr_1 [i_0]))))) : (arr_0 [i_0] [1]))) : (((~(min((arr_0 [1] [i_0]), (arr_0 [i_0] [i_0]))))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_23 = (min(var_23, (arr_0 [i_0] [i_1])));
            var_24 = (min(var_24, ((((((arr_0 [i_0] [i_1]) || (arr_0 [i_0] [i_1]))) && ((min((arr_4 [i_0]), (arr_4 [i_1])))))))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_0] = (min((((((min((arr_6 [i_0] [i_2]), var_4))) ? ((-(arr_7 [i_0]))) : (arr_6 [i_0] [1])))), var_1));
            var_25 = ((4002363474787758182 ? 14370312059300465745 : 0));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_16 [i_2] [i_2] |= (min((((arr_3 [i_4 + 3] [i_4]) ? ((~(arr_10 [20] [i_2] [i_3] [i_2]))) : (~-1))), (((arr_9 [i_0] [i_2] [i_3]) ? (((arr_15 [i_2] [i_2] [i_3] [i_4 - 4]) ? (arr_3 [i_0] [16]) : var_7)) : (((arr_5 [i_4] [15]) ? var_8 : (arr_6 [i_0] [i_3])))))));
                        var_26 = (max(var_26, ((((((arr_1 [i_0]) | (arr_1 [i_0]))) ^ (arr_1 [10]))))));
                    }
                }
            }
            arr_17 [18] = (arr_12 [i_0] [i_0]);
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_27 = (((((!(arr_14 [i_0] [i_0] [i_0] [i_5])))) | (arr_14 [i_5] [i_5] [1] [i_5])));
            var_28 = (arr_1 [i_0]);
            arr_20 [i_0] [i_5] = (arr_10 [i_0] [i_0] [i_5] [i_5]);

            for (int i_6 = 4; i_6 < 18;i_6 += 1)
            {
                var_29 = (((((arr_7 [i_6 - 1]) / ((var_3 ? var_13 : (arr_10 [i_0] [i_5] [i_5] [i_6]))))) + (arr_5 [i_5] [i_5])));
                var_30 = (296408742 == var_17);
                arr_23 [i_0] [i_0] [i_0] [i_0] |= var_12;
                arr_24 [i_0] [i_0] [i_0] = (arr_13 [i_0] [i_0] [i_6] [i_0]);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_31 -= ((!(((var_9 ^ var_12) < ((var_1 ? (arr_3 [21] [i_8]) : (arr_29 [i_0])))))));
                            var_32 &= (arr_6 [i_6] [20]);
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                arr_33 [i_9] [14] = (((((((arr_19 [i_0] [i_5] [i_5]) && (arr_27 [i_0] [i_0] [i_0] [i_0]))) ? ((min((arr_27 [4] [i_5] [17] [i_5]), (arr_1 [i_9])))) : (arr_13 [1] [i_5] [i_9] [i_9])))) ^ (arr_4 [i_9]));
                arr_34 [i_0] [i_5] [i_9] &= (arr_30 [i_0] [i_5] [i_9]);
                arr_35 [i_0] [i_9] [i_0] = (arr_3 [i_0] [i_0]);
                arr_36 [i_9] = var_15;

                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    arr_39 [i_0] [i_9] = (((arr_14 [10] [i_5] [i_5] [i_9]) - (arr_5 [5] [i_9])));
                    arr_40 [2] [i_5] [i_9] [i_9] [i_10] [i_9] = (min(((var_12 ? ((var_12 ? var_18 : var_13)) : (((var_2 ? (arr_29 [i_0]) : var_6))))), (((((((arr_26 [i_0] [i_0] [i_0] [1] [i_0] [4]) && var_8))) < (((arr_26 [i_0] [0] [i_5] [1] [i_9] [i_10]) - (arr_30 [i_0] [i_0] [i_0]))))))));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    var_33 *= arr_22 [i_0] [14] [i_9];
                    var_34 = var_18;
                }
            }
            var_35 = ((var_11 ? (((~((~(arr_0 [i_5] [i_0])))))) : ((((((arr_15 [i_5] [i_5] [i_0] [i_5]) ^ var_0))) ? (arr_13 [i_0] [i_0] [i_5] [10]) : ((var_6 & (arr_4 [i_0])))))));
        }
        for (int i_12 = 1; i_12 < 21;i_12 += 1)
        {
            var_36 |= min((arr_3 [i_12 - 1] [i_12 + 1]), (((((min(var_16, (arr_14 [0] [i_0] [i_0] [0]))))) * (((arr_25 [i_0] [i_12]) * var_5)))));
            var_37 -= (min((arr_44 [i_0]), (arr_6 [i_12] [i_0])));
        }
    }
    for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
    {
        var_38 = arr_1 [i_13];
        arr_49 [0] = (((((!(arr_10 [14] [i_13] [i_13] [14])))) <= (((arr_19 [i_13] [i_13] [i_13]) ? (arr_19 [i_13] [i_13] [i_13]) : (arr_19 [i_13] [i_13] [i_13])))));
    }
    var_39 = ((((((var_8 ? var_16 : var_4)))) ^ (min(var_2, var_19))));
    #pragma endscop
}
