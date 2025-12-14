/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((!var_10) ? (max(var_12, 13907859)) : (var_5 == var_14))) * var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_10 [i_0] = (arr_1 [i_0]);
                    arr_11 [i_0] = (((((var_15 * (var_7 == 17575006175232)))) ? ((((!(5395 + 227))))) : ((((-5408 ? (arr_1 [i_0]) : 5385)) - ((var_12 ? 772176011 : (arr_4 [i_0])))))));
                    arr_12 [i_2] [i_0] [i_0] [i_0] = var_5;

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_19 = (((5395 < var_15) ? var_0 : (((!((max(var_1, var_12))))))));
                        var_20 = (~var_10);
                        var_21 = (!(arr_9 [i_0] [i_1] [i_3]));
                        arr_16 [16] [i_3] [i_3] [i_3] &= (arr_4 [i_3]);
                    }
                    var_22 = (min(var_22, (((arr_4 [i_2]) ? (((!var_5) ? (!5406) : (arr_3 [i_2] [i_1] [15]))) : (arr_2 [i_1])))));
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    var_23 &= arr_4 [2];

                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [i_0] [1] [1] [i_5] [i_0] = (!var_1);
                        var_24 = (((arr_9 [i_0] [19] [i_4 + 1]) <= (((17592186011648 ? var_5 : var_8)))));
                        var_25 = (arr_14 [i_4 - 1] [i_0] [9] [i_5]);
                        var_26 += (arr_7 [i_1] [i_4 - 1] [i_5]);
                        arr_24 [i_0] [i_5] = ((!((((arr_1 [i_0]) - var_17)))));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [6] [i_4] [i_6] = (((arr_15 [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 1] [i_4]) != (arr_3 [i_0] [i_4] [i_6])));
                        var_27 |= 1;
                        var_28 = (max(var_28, (~-56)));
                        arr_29 [i_6] [i_0] [i_6] [i_0] = (arr_19 [i_0] [i_0] [i_0]);
                        var_29 ^= 1;
                    }
                    var_30 &= (arr_4 [0]);
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_31 = (min(var_31, var_17));
                    arr_32 [i_0] [i_1] [i_1] [i_0] = ((~((~(arr_15 [i_7] [11] [i_7] [9] [2])))));
                }
                arr_33 [2] [8] |= (((((arr_18 [i_0] [i_0] [15]) < (arr_9 [8] [6] [i_0]))) || (!var_13)));

                for (int i_8 = 4; i_8 < 22;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 3; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        arr_39 [i_9 - 3] [i_9] [i_0] [i_0] [i_1] [i_0] = (((1 ? var_17 : (arr_2 [i_0]))) % ((-(max(4294967295, var_0)))));
                        arr_40 [i_0] = (((min((!-9830), var_0))) ? (arr_37 [i_0] [i_0] [4] [i_1] [i_8 + 1] [i_9]) : ((((var_9 / var_3) ? (!var_12) : var_13))));
                        var_32 = arr_35 [i_8 - 1] [i_1] [i_0];
                    }
                    for (int i_10 = 3; i_10 < 23;i_10 += 1) /* same iter space */
                    {
                        var_33 ^= (arr_37 [14] [i_8] [i_1] [i_1] [i_0] [i_0]);
                        arr_43 [i_10] [i_0] [i_0] [i_0] = ((((var_13 ? (-127 - 1) : (arr_30 [i_10] [i_8 - 3] [i_1] [i_0]))) + (arr_30 [i_10 - 1] [10] [12] [i_0])));
                        var_34 *= (arr_13 [i_8 - 4] [i_8]);
                        var_35 = (min(var_35, ((max(var_7, (max((max((arr_25 [i_1]), -5408)), (arr_5 [i_0] [i_1] [i_10 - 2]))))))));
                    }
                    for (int i_11 = 3; i_11 < 23;i_11 += 1) /* same iter space */
                    {

                        for (int i_12 = 1; i_12 < 23;i_12 += 1)
                        {
                            arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] = (var_6 & 7168);
                            var_36 = (((arr_1 [i_0]) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((((arr_1 [i_0]) < -1423))))));
                        }
                        arr_49 [i_0] [i_0] [i_11] = ((!(((arr_27 [i_11] [i_11 - 1] [i_11] [i_11] [i_11] [i_11]) != var_13))));
                    }
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        arr_53 [i_13] [i_0] [i_1] [i_0] [i_0] = (((((arr_7 [i_8 + 2] [i_8 - 2] [i_8]) ? (var_16 & var_4) : (arr_51 [i_0]))) % ((-(arr_44 [i_13] [i_8] [i_1] [i_0])))));
                        var_37 ^= (!((((!(arr_26 [i_1] [i_8] [i_1]))))));
                        arr_54 [i_0] [i_8] [i_8] [21] [i_0] = ((+(((((arr_9 [i_13] [i_1] [i_8]) ? var_13 : -5389)) >> (5414 - 5414)))));
                    }
                    arr_55 [1] [i_8] [22] &= (max((((123 & var_8) < (18446744073709551615 / var_3))), ((!(((var_3 - (arr_1 [i_8]))))))));
                    var_38 = ((!(arr_26 [i_0] [i_8 - 2] [1])));
                    var_39 = ((~(((arr_6 [i_0] [i_8]) ? (var_12 - 832406787) : 1))));
                }
                /* vectorizable */
                for (int i_14 = 4; i_14 < 22;i_14 += 1) /* same iter space */
                {
                    var_40 |= ((-(arr_36 [i_14 - 4] [i_14 + 1] [i_14 - 1] [i_14 - 4])));
                    arr_59 [i_0] = (((arr_44 [13] [i_14 - 4] [i_14 - 3] [i_14 + 1]) - (arr_52 [i_14] [i_14 - 4] [i_14 - 4] [i_14])));
                    var_41 = (min(var_41, ((((((arr_4 [i_14]) + 9223372036854775807)) << (((arr_3 [i_14 - 1] [i_14 - 2] [i_14 - 3]) - 2383388781)))))));
                }
                var_42 = (min(var_42, (arr_56 [i_0] [i_1] [i_1])));
            }
        }
    }
    var_43 = var_15;
    #pragma endscop
}
