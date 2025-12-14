/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34192
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) -1);
                        var_13 = (+(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1] [10ULL] [i_1 - 2])) && (((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1] [i_1] [i_1 + 2]))))));
                    }
                    for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        var_14 = ((/* implicit */int) ((max((arr_3 [i_4] [8ULL] [i_1]), (((((/* implicit */unsigned long long int) -1)) - (var_0))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1] [i_1] [i_1]))))))));
                        arr_11 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_4 [i_4] [i_1 - 2] [i_1] [i_0]), (32256))))));
                        var_15 += ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 32256)) * (0ULL)))) ? (((/* implicit */unsigned long long int) 65280)) : (((unsigned long long int) arr_1 [i_1 - 1] [i_1 + 2])));
                        var_16 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -32250)), (arr_0 [i_0] [i_4]))))))), (((arr_8 [i_4] [i_1]) - (((/* implicit */int) ((1944413118) == (6291456))))))));
                    }
                    var_17 = ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned long long int) -32250)), (arr_3 [i_1 - 1] [i_1 + 2] [i_0]))) : (((/* implicit */unsigned long long int) (-(arr_8 [i_2] [i_1 + 1])))));
                    var_18 += ((/* implicit */unsigned long long int) 536870911);
                    var_19 = ((var_8) >> (((((arr_3 [i_2] [i_1 - 1] [i_1 + 1]) | (var_4))) - (18320606994286241379ULL))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned long long int) ((int) (((+(8446838495960672581ULL))) * (((/* implicit */unsigned long long int) 536870911)))));
                    arr_16 [i_5] [3] [i_0] [i_0] = (-(min((var_2), (arr_1 [13ULL] [i_1 - 2]))));
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            arr_23 [i_7] [i_6] [i_5] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 32269))))) : (((((/* implicit */_Bool) 6125048422118660657ULL)) ? (2001786280) : ((~(32274)))))));
                            var_21 = ((/* implicit */int) max((var_21), ((~(((int) (+(arr_1 [i_5] [i_0]))))))));
                            var_22 ^= ((/* implicit */int) 15862478997201566326ULL);
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((unsigned long long int) 18446744073709551615ULL))));
                            var_24 += ((/* implicit */unsigned long long int) ((503316480ULL) < (((/* implicit */unsigned long long int) 32240))));
                        }
                        arr_24 [i_0] = ((/* implicit */int) arr_10 [i_0] [i_1] [i_5] [i_6]);
                    }
                    var_25 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_15 [14] [i_1] [i_1 - 1]) <= (var_6))))))) % (var_5));
                }
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_9 = 3; i_9 < 14; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((0ULL) < (0ULL)));
                        var_27 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_22 [1ULL] [i_9] [i_8] [i_1 - 2] [i_0])), (((((((/* implicit */_Bool) 2147483647)) ? (var_9) : (var_1))) ^ (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0])) ? (504ULL) : (11100430427432438358ULL)))))));
                        var_28 += 10483462724573839143ULL;
                    }
                    for (int i_10 = 3; i_10 < 11; i_10 += 2) 
                    {
                        arr_32 [i_8] &= ((((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) var_6))))) ? (max((var_0), (1502411265952946325ULL))) : (((unsigned long long int) arr_13 [i_0] [i_0] [i_8] [i_0])))) / (var_5));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 4) /* same iter space */
                        {
                            var_29 *= ((/* implicit */unsigned long long int) var_7);
                            var_30 = ((/* implicit */int) (~(min((((unsigned long long int) 504ULL)), (((/* implicit */unsigned long long int) 32256))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 4) /* same iter space */
                        {
                            var_31 += ((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0])) ? ((~(arr_29 [i_0] [i_1 - 2] [i_1 - 2] [i_10] [i_12]))) : (0ULL));
                            var_32 = (+(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_22 [i_12] [i_10] [i_8] [i_1 - 2] [i_0])) : (16986946887924285048ULL))));
                        }
                        arr_39 [5] [i_1 + 2] [i_8] [i_10] = ((/* implicit */unsigned long long int) -6291456);
                        var_33 &= ((var_8) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 131071)) ? (var_7) : (arr_19 [i_8] [i_10 + 4] [i_10 - 1] [i_10])))));
                        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -32240)) & (arr_33 [i_1] [i_1] [i_1] [i_1 - 1] [6ULL] [i_1 + 1] [i_8])))) && (((/* implicit */_Bool) ((arr_33 [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_8]) | (arr_33 [i_0] [i_0] [i_1] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2]))))));
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 13; i_13 += 4) 
                    {
                        var_35 = arr_2 [i_1 - 1];
                        var_36 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (min((8080297501251986422ULL), (((/* implicit */unsigned long long int) -32240)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        var_37 = ((((/* implicit */_Bool) ((unsigned long long int) arr_43 [i_0] [i_0] [4ULL] [i_14] [i_0] [i_14]))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0])))))));
                        var_38 = ((/* implicit */unsigned long long int) min((var_38), (arr_27 [i_0] [i_0] [i_0] [i_0])));
                        arr_46 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(18446744073709551615ULL))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        for (int i_16 = 0; i_16 < 15; i_16 += 4) 
                        {
                            {
                                arr_51 [i_16] [i_16] [i_16] = arr_41 [i_0] [i_1 + 2] [i_15] [i_1 + 2];
                                var_39 -= ((unsigned long long int) arr_29 [i_1] [i_1] [i_1] [i_1 - 2] [i_1 + 1]);
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (int i_17 = 0; i_17 < 15; i_17 += 2) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 2) 
                    {
                        for (unsigned long long int i_19 = 3; i_19 < 11; i_19 += 3) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned long long int) arr_34 [i_19] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_0]);
                                var_41 = ((((/* implicit */_Bool) (-(0)))) ? (((/* implicit */unsigned long long int) ((int) max((var_4), (8512486267997129684ULL))))) : (((((/* implicit */_Bool) (-(-736325348)))) ? (((/* implicit */unsigned long long int) 0)) : (6978950812291479562ULL))));
                            }
                        } 
                    } 
                } 
                var_42 = (~(((int) arr_18 [i_0] [11])));
                var_43 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_34 [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 + 2]), (arr_34 [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((unsigned long long int) 10168359386063334180ULL))))))) : (((((/* implicit */unsigned long long int) 618071914)) & (arr_17 [i_0] [i_0] [i_1] [8ULL] [i_1 - 2])))));
            }
        } 
    } 
    var_44 = var_10;
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 22; i_20 += 3) 
    {
        for (unsigned long long int i_21 = 3; i_21 < 20; i_21 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_22 = 0; i_22 < 22; i_22 += 4) 
                {
                    arr_68 [i_20] [i_21 - 2] [i_22] [i_22] = ((/* implicit */unsigned long long int) (~(1853752945)));
                    arr_69 [i_22] = ((/* implicit */int) (+(((((/* implicit */_Bool) 6291454)) ? (var_8) : (var_5)))));
                }
                for (unsigned long long int i_23 = 1; i_23 < 19; i_23 += 2) 
                {
                    var_45 *= (-(3554169733855246249ULL));
                    var_46 = ((/* implicit */unsigned long long int) 6291454);
                }
                var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) arr_61 [i_21 - 1] [i_21 + 1]))));
                var_48 = arr_71 [i_20];
                var_49 = min((arr_71 [i_21 - 1]), (((((/* implicit */_Bool) arr_63 [i_20] [i_20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_63 [i_21 - 1] [i_20])) || (((/* implicit */_Bool) arr_67 [i_20] [i_20] [i_20])))))) : (((unsigned long long int) arr_61 [i_20] [i_21])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_24 = 0; i_24 < 22; i_24 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 22; i_25 += 2) 
                    {
                        for (unsigned long long int i_26 = 1; i_26 < 19; i_26 += 4) 
                        {
                            {
                                var_50 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_80 [i_20] [i_21 - 2] [i_21 - 2] [i_24] [i_26 + 1] [i_26] [i_26 + 3])) ? (arr_64 [i_21] [i_21 + 2]) : (((/* implicit */unsigned long long int) var_7)))), ((+(arr_79 [i_26] [i_26] [i_26 + 2] [i_26 - 1] [i_26 - 1] [i_26 - 1])))));
                                var_51 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10366446572457565193ULL)) ? (((/* implicit */unsigned long long int) 1966354418)) : (arr_77 [i_26 - 1] [i_26] [i_26] [i_26] [i_21 + 1] [i_20])))) ? (arr_77 [i_26 + 1] [i_21 + 2] [i_26] [i_26] [i_21 - 2] [i_21 - 3]) : (((/* implicit */unsigned long long int) ((var_6) << (((65535ULL) - (65535ULL)))))));
                                var_52 = 2087683075;
                            }
                        } 
                    } 
                    var_53 = ((((/* implicit */_Bool) ((18446744073709486094ULL) - (var_10)))) ? (((/* implicit */unsigned long long int) (-(arr_75 [i_21] [i_21] [i_21] [i_21])))) : (min((arr_78 [i_24] [i_24] [i_20] [i_21] [i_21 - 3] [i_20] [i_20]), (((arr_73 [i_21] [i_20]) + (18446744073709551615ULL))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_27 = 0; i_27 < 14; i_27 += 2) 
    {
        for (unsigned long long int i_28 = 2; i_28 < 13; i_28 += 2) 
        {
            for (int i_29 = 1; i_29 < 12; i_29 += 2) 
            {
                {
                    var_54 = ((/* implicit */unsigned long long int) arr_65 [i_27]);
                    var_55 = ((/* implicit */unsigned long long int) max((var_55), (arr_74 [0ULL] [i_29 + 1] [i_28 + 1] [i_28])));
                }
            } 
        } 
    } 
}
