/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 &= var_12;

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_18 = ((5609616085598599605 << (((min((arr_7 [i_3] [i_2 - 2] [i_2 + 2] [i_2 - 1]), -32754)) - 3748474080))));
                        var_19 = var_1;
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_20 = var_6;
                        arr_13 [19] [i_2] [i_2] [i_4] = ((-var_9 ? (((((arr_11 [10] [i_1] [i_2 + 2] [i_4]) ? var_2 : (arr_0 [i_0] [i_4]))))) : (((arr_9 [i_0] [i_0] [8] [8] [i_0] [i_0]) ? (max(32754, (arr_4 [i_0] [i_0] [i_0]))) : ((min((arr_7 [8] [i_1] [8] [i_4]), (arr_6 [i_0] [i_1] [i_1]))))))));
                        var_21 = (var_4 ? 4258103429 : (((4258103429 ? var_10 : var_3))));
                    }
                    var_22 ^= ((((var_0 - 71057674) ? (arr_0 [i_0] [i_0]) : (max((arr_2 [i_1]), var_11)))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            var_23 = (min(var_23, ((((((169 ? 1 : 71057658) | (arr_7 [2] [i_6] [13] [2]))))))));
            arr_19 [i_5] = (max((!var_12), 3103707083));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_22 [i_5] [i_7] [1] = (min(((max(36863872, ((min(32754, 75)))))), (arr_2 [i_5])));
            arr_23 [i_5] [i_5] [i_5] = 926989351;

            /* vectorizable */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                var_24 = (arr_16 [i_8] [i_7]);
                var_25 = ((-(arr_8 [i_5] [0] [i_5] [i_8] [i_7])));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_26 -= (((var_1 > (arr_1 [14] [3]))));
                            var_27 = ((12660431069662629499 ? (arr_5 [i_9 - 1]) : ((((!(arr_27 [i_9 - 1] [i_7] [i_8])))))));
                        }
                    }
                }
            }
        }
        var_28 = 6465;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        arr_35 [i_11] = var_5;
        var_29 = (arr_11 [i_11] [i_11] [19] [i_11]);
        var_30 = 5609616085598599605;
    }
    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        var_31 = (max((max(((min(32754, 4223909621))), ((var_12 ? 1 : (arr_12 [i_12]))))), 3103707072));
        arr_38 [3] &= (min((arr_12 [i_12]), (((arr_12 [i_12]) ? (arr_12 [i_12]) : (arr_12 [i_12])))));

        for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
        {
            arr_41 [i_12] [11] &= -2083;
            var_32 = ((!(((1191260213 - (max((arr_10 [i_12] [11] [i_12] [i_13] [i_13]), (arr_4 [i_12] [i_13] [i_13]))))))));
            var_33 = (min(var_33, ((max(((~(max((arr_7 [i_12] [i_12] [i_13] [i_13]), -4197585822173496718)))), 2145386496)))));
            arr_42 [i_12] = (((((+((var_9 ? (arr_40 [i_12] [i_12] [i_12]) : (arr_10 [i_12] [i_12] [3] [i_13] [i_13])))))) ? 4223909621 : 1));
            arr_43 [i_12] [i_12] [i_12] = var_16;
        }
        for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
        {
            arr_47 [i_14] [10] [i_12] = var_13;

            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                var_34 = (max(var_34, ((min((!-var_9), (!2305843009213693952))))));
                var_35 *= (min((((!((!(arr_0 [i_14] [i_15])))))), (min(71057682, -561380193))));
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    {
                        var_36 = (min(var_36, ((min(var_12, (((arr_9 [i_12] [i_14] [i_16] [2] [i_17] [i_16]) ? (arr_9 [i_12] [i_12] [i_14] [i_16] [i_16] [i_17]) : 7)))))));
                        var_37 = (max(var_37, (((((-32745 ? (arr_10 [i_14] [i_14] [i_14] [i_14] [i_14]) : (arr_6 [i_16] [i_16] [i_16])))) && ((((arr_54 [i_12] [i_12] [i_12] [i_17]) ? (arr_54 [i_12] [i_14] [i_16] [i_17]) : var_7)))))));
                    }
                }
            }
            var_38 = (max(((((arr_48 [i_12] [i_14] [i_12] [i_14]) ? ((var_15 ? (arr_0 [i_12] [i_12]) : 1191260189)) : 3416))), ((((max(18446744073709551615, var_2))) ? (((arr_5 [3]) >> (4223909622 - 4223909574))) : (~191)))));
            var_39 = -2606687286;
        }
    }
    var_40 = (!3114349582123490039);
    #pragma endscop
}
