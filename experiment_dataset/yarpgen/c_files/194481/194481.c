/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (!var_11);

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                arr_6 [i_0] [i_0] [i_2] |= ((((min(var_9, (arr_1 [i_0])))) | (arr_3 [i_1] [i_2 - 1])));
                var_14 *= var_5;
                arr_7 [i_0] [i_1] [i_2] [i_2 - 1] &= ((((((arr_4 [i_0] [i_1] [i_2 - 1] [i_0 + 2]) && (arr_4 [i_0] [i_1] [i_2 - 1] [i_0 + 2])))) < (((arr_4 [i_0] [i_1] [i_2 - 1] [i_0 + 2]) + (arr_4 [i_0] [i_1] [i_2 - 1] [i_0 + 2])))));
                var_15 = (min(var_15, (((((!(arr_5 [i_0 - 1] [i_1] [i_1] [i_0 - 1]))))))));

                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    var_16 |= (arr_8 [10]);
                    var_17 *= (((-255288451 ? 1 : 25893)));
                    var_18 = (max(var_18, ((((arr_10 [i_1] [i_1] [i_1] [10]) ? ((((var_8 < (arr_8 [i_0]))) ? (arr_9 [i_0] [i_2] [i_1] [i_0]) : (arr_5 [3] [i_3 - 1] [i_2 - 1] [i_0 - 1]))) : ((max((max(var_7, var_5)), (arr_5 [i_1] [i_2 - 1] [i_3 - 1] [i_3])))))))));
                }
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    var_19 = (min(var_19, (((((min((arr_2 [i_4 + 1] [i_2 - 1] [i_0 + 1]), ((((arr_11 [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_10 [i_0] [i_2] [i_2] [i_1]))))))) ? ((((((!(arr_11 [i_2]))))) * (max((arr_0 [i_4] [i_1]), (arr_0 [i_1] [2]))))) : ((min((arr_5 [i_4 + 1] [i_2 - 1] [i_1] [i_0 - 3]), (~var_12)))))))));
                    var_20 *= (max(53, 53));
                    var_21 = (max(var_21, ((max((((((((arr_2 [i_1] [i_1] [i_1]) != (arr_13 [i_4 + 1] [i_4 + 1] [i_0] [i_1] [i_0])))) - (var_7 >= var_7)))), ((max(var_5, (arr_0 [i_1] [i_2])))))))));
                    var_22 &= ((((max(-var_4, ((((arr_11 [i_0]) == (arr_11 [i_0]))))))) | ((((!(arr_3 [i_4] [1]))) ? (var_9 + var_12) : (arr_1 [i_0 - 3])))));
                }
            }
            var_23 ^= (+((((arr_9 [i_0 - 2] [i_0] [i_0] [i_0 + 1]) && ((max((arr_12 [i_0] [12] [i_0] [i_0]), var_2)))))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_24 ^= ((-((-(arr_17 [i_5] [i_0])))));

            for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_25 = (max(var_25, ((((max(var_7, (arr_15 [i_8]))) ? (min((((arr_1 [i_5]) & (arr_15 [i_8]))), (arr_12 [i_0] [i_0] [i_7] [0]))) : (!var_9))))));
                            var_26 = (min(var_26, var_8));
                            var_27 ^= (((arr_5 [i_8] [5] [i_6] [i_5]) - 5035202449716445842));
                        }
                    }
                }
                arr_26 [7] [i_5] [i_0] &= ((max((arr_24 [i_6] [i_6] [i_6] [i_6] [i_6]), -var_5)));
            }
            for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
            {
                var_28 = (min(var_28, ((min((((((max((arr_22 [i_9]), var_5))) - ((((arr_18 [i_9] [i_5] [i_0] [i_0]) >= (arr_25 [i_0] [i_5] [i_5] [i_5] [i_9]))))))), (((arr_11 [i_0 + 2]) + var_1)))))));

                for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                {
                    var_29 = (min(var_29, (((+((((arr_13 [i_10] [i_5] [i_0 + 2] [i_0 - 1] [i_0 - 1]) >= (arr_32 [i_0 + 2] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 + 2])))))))));
                    var_30 = (min(var_30, (((((((arr_1 [i_0 + 2]) - (arr_1 [i_0 - 1])))) ? (((max(19, 1)))) : (max(var_3, (arr_1 [i_0 - 3]))))))));
                }
                for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                {
                    var_31 *= (max(12, 1546920319));
                    var_32 = (max(var_32, (((max(var_4, (arr_35 [i_9] [i_0] [i_0 + 1] [i_9])))))));
                }
            }
            for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
            {
                var_33 ^= (max(((((arr_22 [i_0 - 2]) >> (((arr_28 [i_0] [i_0] [i_0 - 2] [i_12]) - 44))))), ((21 ? -86419739745786875 : 1))));
                var_34 ^= ((+(((((arr_1 [i_0 - 1]) ? var_3 : var_12))))));
            }
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 11;i_15 += 1)
                {
                    {
                        var_35 |= ((!((((arr_3 [i_0 - 1] [i_0 - 1]) % (((arr_40 [i_0 + 1] [8] [i_0]) ? (arr_33 [i_0] [i_0] [i_13] [i_0] [i_15 - 1] [i_13]) : (arr_20 [i_14] [i_14] [i_14] [i_13] [i_0]))))))));
                        var_36 += ((((~((var_7 >> (arr_32 [i_0] [i_13] [i_0] [i_15] [i_15] [i_15])))))) >= (((arr_34 [i_0]) ? var_10 : (var_0 != var_11))));
                    }
                }
            }

            for (int i_16 = 1; i_16 < 12;i_16 += 1)
            {
                var_37 = (min(var_37, var_5));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        {
                            var_38 = (max(var_38, (((((arr_23 [i_16 + 1] [i_16 + 1] [i_17] [i_16] [i_17] [i_0 - 3] [i_0]) ? (arr_23 [i_16 + 1] [i_0 - 3] [i_17] [i_0] [i_17] [i_0 - 3] [i_0]) : (arr_8 [i_0]))) * ((((!(arr_0 [i_0 - 3] [i_0])))))))));
                            var_39 = (max(var_39, ((max(((((arr_42 [i_0] [i_17] [i_17] [i_18]) < (arr_52 [i_18] [i_17] [i_17] [i_16] [i_13] [i_0 - 1])))), ((((max(729281111, 1))) | (((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_12 [i_17] [i_16] [i_13] [i_0]) : var_0)))))))));
                            var_40 = (min(var_40, (((max(((var_5 ? var_2 : var_0)), (((var_2 || (arr_2 [i_18] [i_13] [i_0])))))) >= (((!var_0) ? (arr_35 [i_17] [12] [i_0 + 2] [i_17]) : (var_0 > var_6)))))));
                        }
                    }
                }
                var_41 *= ((((30 * ((((arr_11 [i_0]) >> (((arr_33 [i_0] [i_0] [12] [i_0] [i_0] [i_0]) - 12398))))))) * ((((!(((var_12 ? (arr_32 [i_0] [i_0] [i_13] [i_13] [i_16] [i_16]) : var_2)))))))));
                var_42 ^= (max(((((((var_11 || (arr_50 [i_16] [i_16])))) % (((arr_29 [i_16]) ? (arr_1 [i_16]) : (arr_52 [i_16 + 2] [i_0] [i_0] [i_0] [4] [i_0])))))), ((min(1, 0)))));
            }
            var_43 = (min(var_43, (((((((arr_19 [i_0] [i_0 + 2] [i_0]) ? (arr_19 [i_0] [i_0 - 2] [i_13]) : (arr_19 [i_0] [i_0 - 3] [i_13])))) ? (((arr_19 [i_0] [i_0 - 3] [i_0]) ? var_9 : (arr_19 [i_0] [i_0 + 2] [i_0 + 2]))) : (((((arr_19 [i_0] [i_0 - 1] [i_13]) >= (arr_19 [i_0 + 1] [i_0 + 2] [i_13]))))))))));
        }
        var_44 ^= (((-2147483647 - 1) < 9057));
    }
    var_45 = (min(var_45, (~var_9)));
    #pragma endscop
}
