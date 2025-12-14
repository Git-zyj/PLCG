/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = ((arr_10 [i_0] [1] [i_2] [i_0] [i_3] [i_4 + 1]) ? (arr_11 [i_0] [i_0] [i_0] [11]) : ((((((~(arr_5 [i_2] [i_3])))) && var_13))));
                                var_20 ^= ((32767 ? (((!(arr_5 [i_4 + 2] [i_4 + 2])))) : (max((!246), -32767))));
                                var_21 = (-32763 ^ 18446744073709551615);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_2] [i_5] = (var_14 * ((-(arr_9 [i_0] [i_0] [i_0] [i_0]))));
                        var_22 += (arr_8 [20]);
                        arr_15 [i_0] [i_1] [i_2] [i_1] [10] = ((((((1788505724 == 82) ? (var_15 / var_7) : (-32767 / var_14)))) ? (!2506461571) : 2506461571));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_2] [0] [i_2] [6] = (~16645843310347373211);

                        for (int i_7 = 3; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            var_23 = ((max(((min(var_15, var_9)), (((arr_3 [12] [i_0]) ? 1 : -32763))))));
                            var_24 = (max(var_24, (arr_8 [i_0])));
                            arr_22 [i_0] [i_1] [i_2] [i_6] [i_2] = ((!((((~var_15) & ((~(arr_5 [i_2] [8]))))))));
                            arr_23 [i_2] [i_2] [i_2] = -32756;
                        }
                        for (int i_8 = 3; i_8 < 22;i_8 += 1) /* same iter space */
                        {
                            var_25 = max(((var_1 << (14289416195139485138 - 14289416195139485083))), -4197);
                            arr_26 [i_0] [i_2] [i_0] [i_0] [i_0] = 1;
                            var_26 = 14;
                        }
                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 22;i_9 += 1) /* same iter space */
                        {
                            var_27 = ((((-810776057 ? 15 : 7)) > (((2506461592 ? -11206 : var_6)))));
                            var_28 = var_18;
                            var_29 = -var_0;
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 21;i_11 += 1)
                        {
                            {
                                var_30 = ((!(((-(arr_10 [i_11 - 2] [i_11 - 1] [i_11 + 1] [i_11] [i_11] [i_11 - 2]))))));
                                var_31 |= ((((((!5066467012135193419) ^ (arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) + 2147483647)) << (((((((~(-32767 - 1)))) ? (arr_7 [i_2] [i_2] [19]) : var_6)) - 47861)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_32 ^= var_8;
    var_33 = (max(var_33, var_17));
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            {
                var_34 = ((~(var_0 ^ 24086)));
                arr_41 [i_12] [15] [i_13] = ((~((var_10 ? (arr_24 [i_12] [i_12] [i_12] [18] [i_13] [2] [i_13]) : (arr_24 [9] [i_13] [i_12] [i_12] [i_12] [19] [i_12])))));
                var_35 |= (-32765 * -32765);

                for (int i_14 = 3; i_14 < 15;i_14 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 15;i_16 += 1)
                        {
                            {
                                var_36 = -11216;
                                var_37 = (max(var_15, -32744));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 17;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 17;i_18 += 1)
                        {
                            {
                                var_38 = ((~((-(max(208, 4272220930))))));
                                var_39 = 1;
                                arr_56 [i_13] [i_13] [i_13] [6] [i_13] [i_13] = (((3944803783 + 58107) * ((((~0) * (arr_40 [i_13] [i_13]))))));
                            }
                        }
                    }
                    var_40 = (min(var_40, (min(var_6, (max(((min(11740, var_16))), ((32764 ? 32765 : var_13))))))));
                }
                for (int i_19 = 0; i_19 < 17;i_19 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 17;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 17;i_21 += 1)
                        {
                            {
                                arr_63 [i_12] [i_12] [i_13] [12] [4] [i_20] = ((!(((32767 / (arr_58 [i_13] [i_19] [i_20] [i_21]))))));
                                var_41 = ((((!(var_7 == 32767))) ? 32748 : (-12750 % 18446744073709551606)));
                                var_42 += ((~(((var_6 == ((((arr_2 [15]) == var_3))))))));
                                var_43 = (max(var_43, ((((((min(-11752, -32747)))) & (~var_18))))));
                            }
                        }
                    }
                    arr_64 [i_13] = var_1;
                    var_44 = (max(((~(var_9 != 159))), ((var_10 ? 23992 : (arr_40 [7] [i_13])))));
                }
            }
        }
    }
    #pragma endscop
}
