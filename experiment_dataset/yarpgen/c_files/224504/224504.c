/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (((arr_5 [i_1] [i_0] [i_0]) ? var_6 : (((arr_4 [i_0]) >> (((arr_4 [i_0]) - 974779561))))));

                for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_3] [i_1] [1] [i_1] [i_0] &= (13383283332860747305 % 5063460740848804288);
                        var_16 ^= (arr_4 [i_2 + 3]);
                        arr_13 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = (((arr_4 [i_2 + 2]) == var_9));
                        var_17 = (min(var_17, (((119 ? 5063460740848804295 : var_2)))));
                    }
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        var_18 = max(-20313, 8989607068696576);
                        var_19 = (max(var_19, (((!(((((((arr_10 [i_0]) ? var_0 : var_14))) ? var_4 : var_6))))))));
                        arr_16 [i_2] [4] [i_1] [i_2] = (((((var_1 / (arr_8 [i_4 - 1] [i_2 + 2] [i_2 + 2])))) ? var_13 : ((var_14 ? (~var_6) : var_2))));
                        arr_17 [i_0] [i_1] [i_2] [i_2] [6] [i_4 + 2] = (((var_2 > var_1) ? (((((var_11 ? var_14 : var_3)) >> (var_3 + 113)))) : (arr_14 [i_0] [i_1] [i_1] [i_4 + 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_24 [i_0] [1] [11] [i_2] [i_6] = (((((min(var_7, var_14)))) ? (813927212107266049 >> 16) : (max((arr_14 [i_1] [i_1] [i_1] [i_0]), var_4))));
                                var_20 = (((arr_14 [i_2 + 2] [i_5 + 1] [i_5 - 1] [i_5 - 1]) / (arr_14 [i_2] [i_5 + 2] [i_5 - 1] [i_5])));
                                var_21 = (((~(arr_14 [i_2 + 3] [i_5 + 1] [16] [16]))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_22 ^= (((arr_21 [8] [i_2 + 1] [8] [i_2 + 2] [i_7]) + (arr_27 [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 + 3] [i_2 - 1] [i_2 + 1])));
                            var_23 = (~var_13);
                        }
                        arr_29 [i_1] [i_2] = (arr_10 [i_2 + 2]);

                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            var_24 = (((var_7 ? (arr_8 [i_0] [i_2] [i_9]) : var_10)));
                            var_25 *= var_6;
                            var_26 = (((arr_23 [11] [i_9] [i_9 - 1] [i_9] [i_9]) - (arr_23 [1] [i_9] [i_9 - 1] [15] [1])));
                        }
                        arr_32 [i_0] [i_2] [i_2] [i_0] [i_7] [i_0] = var_12;
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_27 = ((!((((arr_23 [i_2 - 1] [1] [i_2 + 2] [i_2 + 1] [i_2 + 2]) | var_12)))));
                        var_28 = (arr_33 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 2] [15]);
                        var_29 = (arr_8 [i_0] [i_1] [13]);
                    }
                    var_30 = max(((((min((arr_25 [9] [0] [i_1] [15]), (arr_14 [i_0] [i_0] [i_1] [7]))) >= var_0))), (arr_0 [i_2]));

                    for (int i_11 = 1; i_11 < 18;i_11 += 1)
                    {
                        arr_39 [i_11] [i_1] [i_2] [i_1] [i_2] = ((((((arr_26 [i_0] [i_0] [i_0] [i_0]) <= (arr_26 [i_11 + 1] [i_1] [i_1] [1])))) % ((var_1 ? (arr_26 [i_0] [i_1] [i_2 + 3] [i_2 + 3]) : (arr_26 [14] [i_1] [i_2] [i_1])))));
                        var_31 ^= var_12;
                    }
                }
                for (int i_12 = 1; i_12 < 17;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_32 = var_5;
                        arr_45 [i_13] [i_1] [17] [i_13] [i_13] [i_13] = ((((((((813927212107266066 ? 18446744073709551615 : 17632816861602285567)) >= (arr_2 [i_0]))))) | var_10));
                        var_33 = (min(var_33, var_14));
                        var_34 = (max(var_34, ((((arr_34 [i_12 + 3] [i_12 - 1] [i_12] [i_12 - 1] [i_12 - 1]) | var_12)))));
                    }

                    for (int i_14 = 1; i_14 < 18;i_14 += 1)
                    {
                        arr_50 [11] [i_0] [i_0] [9] = ((((max((arr_48 [i_14 + 1]), ((var_8 ? (arr_4 [i_0]) : var_8))))) && var_7));
                        arr_51 [i_0] [i_0] [i_0] [i_14 + 1] = ((((((var_10 ? var_12 : (arr_33 [i_0] [i_0] [i_12] [i_14 - 1] [i_1])))) ^ (arr_40 [12] [12] [i_12 + 2]))));
                    }
                    var_35 = (!var_0);
                    var_36 = (((((!(arr_15 [0] [i_1] [0]))) ? (18446744073709551613 >> 18) : var_3)));
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    var_37 = -20313;
                    var_38 = (max(var_38, (arr_18 [i_0] [i_1] [i_1] [i_0] [i_15] [i_1])));
                    var_39 = (var_8 * var_0);
                    arr_54 [1] [19] [i_15] [i_15] = ((var_4 ? (((var_0 ? (arr_9 [i_0] [i_0] [i_0]) : var_11))) : var_7));
                }
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    var_40 = (min(((((min(var_13, var_5))) == ((17632816861602285566 ? 4539668761734170655 : 70)))), ((((max(var_3, 52))) && (arr_8 [i_0] [i_1] [i_0])))));
                    var_41 ^= ((min(9981349002087481826, 740749443)));
                    var_42 = ((max((arr_43 [i_1] [4]), (arr_43 [i_1] [12]))));
                }
            }
        }
    }
    var_43 = (max((((var_0 << (var_8 - 16756210434879930609)))), var_6));
    var_44 ^= ((var_14 ? var_3 : var_5));
    #pragma endscop
}
