/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((min(var_8, var_7)))) == var_4));
    var_17 = (max(var_17, (((((var_6 - (1 - 6919682358880375651))) + var_8)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                arr_8 [i_1] [i_1] = (max(645922125, -5331046751074582114));
                var_18 &= (((min((arr_6 [8] [8]), var_11))) ? (((arr_1 [i_0]) ^ (arr_6 [12] [i_1]))) : (arr_6 [4] [i_1]));
                arr_9 [i_1] = (777013288 << (170 - 170));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                var_19 = (11062413720271933623 * 11062413720271933623);
                arr_12 [i_0] [i_0] [i_1] = ((((((arr_7 [i_0] [i_1] [i_3] [1]) ? (arr_7 [13] [i_1] [3] [i_3]) : (arr_5 [i_0] [i_1])))) / (((arr_4 [i_1]) ? var_15 : (arr_3 [i_1])))));
                var_20 = ((((((arr_4 [i_1]) ? (arr_5 [i_0] [i_1]) : (arr_11 [i_3] [i_1] [i_3])))) ? (arr_6 [i_1] [i_1]) : -7045022558246436366));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_21 = (((arr_7 [i_4] [i_1] [i_1] [i_0]) ? (arr_5 [i_3] [i_1]) : (arr_7 [i_0] [i_1] [i_3] [i_4])));
                            arr_18 [i_1] [9] [i_4] [5] = (-96 * 57);
                            arr_19 [i_0] [i_5] [i_0] [2] |= var_5;
                        }
                    }
                }
                arr_20 [i_1] [i_0] [i_3] = (arr_10 [i_0] [i_1] [i_3] [i_0]);
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                arr_24 [i_1] = (i_1 % 2 == 0) ? ((min(((~(arr_10 [i_0] [9] [i_0] [i_0]))), (((max(var_4, (arr_6 [i_1] [i_1]))) >> (((arr_23 [i_0] [i_1] [i_6] [i_1]) - 706400537))))))) : ((min(((~(arr_10 [i_0] [9] [i_0] [i_0]))), (((max(var_4, (arr_6 [i_1] [i_1]))) >> (((((arr_23 [i_0] [i_1] [i_6] [i_1]) - 706400537)) - 546932937)))))));
                var_22 |= (min(((min(var_7, (arr_13 [8] [9] [i_1])))), (((arr_15 [i_0] [i_0] [1] [i_6] [i_6]) ? (arr_4 [i_0]) : (min(var_2, (arr_3 [2])))))));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {
                arr_27 [i_0] [i_1] [i_0] [i_0] = (-3129085 | 4882256285624229757);
                var_23 = (arr_21 [i_1] [i_1] [i_1]);
                var_24 = (((arr_7 [3] [i_1] [i_1] [i_0]) ^ (arr_6 [i_1] [i_7])));
            }
            var_25 = (((((((arr_4 [i_0]) == (arr_4 [i_0]))))) * ((((((arr_26 [i_0] [i_0] [i_1]) | (arr_26 [i_1] [7] [i_1])))) ^ var_1))));
            var_26 = (max(var_26, ((max((arr_21 [2] [4] [10]), var_10)))));
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
        {
            var_27 -= (~var_11);
            arr_30 [i_8] [i_8] = (min(((max((arr_7 [i_0] [i_8] [i_8] [i_8]), (arr_4 [i_0])))), (min((arr_11 [i_0] [i_8] [i_8]), (arr_4 [i_8])))));
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
        {
            var_28 = var_11;

            /* vectorizable */
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                var_29 *= (1492504696 < 29844);
                var_30 = (arr_37 [i_0] [i_9] [i_10] [7]);
            }
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                var_31 = (max((arr_37 [i_11] [i_0] [14] [i_11]), ((min(((max(29820, 2776721591))), (((arr_32 [i_0] [i_9] [i_9]) ? (arr_22 [i_0] [i_9] [i_11]) : (arr_4 [i_9]))))))));
                var_32 += (min((((arr_25 [i_0] [i_0] [14]) ? var_10 : (((arr_22 [i_9] [i_9] [i_9]) ? var_11 : (arr_31 [i_9]))))), (arr_16 [9] [i_9] [i_9] [8])));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    arr_44 [i_9] [i_9] [i_12] = (arr_25 [i_0] [i_9] [i_9]);

                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        var_33 ^= var_3;
                        var_34 = ((~(((arr_11 [2] [i_9] [i_12]) % (arr_11 [i_0] [i_9] [i_9])))));
                        var_35 |= (arr_36 [i_13] [1] [9]);
                    }
                }
                var_36 = (max(var_36, (((!((((arr_29 [i_9] [4]) / var_4))))))));
                var_37 = (((arr_13 [i_0] [i_9] [i_12]) ^ (arr_13 [i_0] [i_9] [i_12])));
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                var_38 = (max(var_38, ((((arr_2 [3]) ? 170 : -29135)))));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        {
                            var_39 ^= ((9223372036854775796 ? -76 : 9223372036854775796));
                            var_40 = (arr_34 [i_9] [i_16] [8]);
                            var_41 = 12;
                            arr_55 [i_16] [i_16] [i_16] |= ((!(arr_43 [i_0] [i_0] [i_16] [i_15] [i_0] [i_17])));
                            var_42 ^= ((~(arr_2 [i_17])));
                        }
                    }
                }
                var_43 &= -29135;

                for (int i_18 = 2; i_18 < 12;i_18 += 1)
                {
                    var_44 = (min(var_44, (((!(((var_10 << (arr_28 [7] [4] [i_15])))))))));
                    arr_58 [i_9] = var_7;
                    var_45 &= (arr_40 [i_0] [i_9] [i_15] [7]);
                }
            }
        }
        var_46 = (arr_32 [i_0] [i_0] [2]);
        var_47 = ((((((arr_23 [2] [i_0] [6] [14]) ^ (arr_33 [10]))) | -23)));
        var_48 = (((((var_7 ? (arr_32 [i_0] [i_0] [0]) : (arr_4 [i_0])))) ? (((min((arr_45 [i_0] [i_0] [4] [i_0] [i_0] [i_0]), (arr_49 [i_0] [i_0] [4]))))) : (arr_3 [0])));
    }
    for (int i_19 = 3; i_19 < 8;i_19 += 1)
    {
        var_49 |= (((((~var_13) * (min(var_9, (arr_1 [2]))))) >= (max((((arr_42 [i_19]) % (arr_11 [10] [6] [8]))), ((max(29132, 288728981)))))));
        var_50 = (((arr_42 [i_19]) ? ((var_14 ^ (((((arr_60 [i_19 + 1]) == var_9)))))) : (min((arr_6 [0] [i_19 + 2]), (arr_6 [14] [i_19 - 2])))));
    }
    var_51 = (~var_6);
    var_52 *= var_1;
    #pragma endscop
}
