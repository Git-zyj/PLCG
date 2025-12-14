/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226308
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
    var_19 -= ((/* implicit */signed char) ((short) ((((((/* implicit */_Bool) var_7)) ? (15412072961985740837ULL) : (((/* implicit */unsigned long long int) var_7)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            var_20 = ((/* implicit */long long int) (-(arr_1 [i_1 + 2])));
            arr_4 [i_0] = ((/* implicit */long long int) var_16);
            arr_5 [10] [i_1] [i_1] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (72064996004970040ULL) : (3593069105226603386ULL))) : (min((((/* implicit */unsigned long long int) (signed char)-61)), (arr_1 [2])))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            var_21 -= (+(((/* implicit */int) (signed char)0)));
            arr_8 [(signed char)3] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)28)) == (((((/* implicit */_Bool) 0)) ? (-1459540563) : (((/* implicit */int) arr_6 [i_0] [i_2]))))));
            /* LoopNest 2 */
            for (signed char i_3 = 3; i_3 < 13; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    {
                        arr_14 [5LL] [i_3] [i_3] [(signed char)1] = ((/* implicit */signed char) (-2147483647 - 1));
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (+(arr_1 [i_3])))) && (((/* implicit */_Bool) -4480462761763665410LL)))))));
                    }
                } 
            } 
            arr_15 [i_2] [i_2] [i_0] = ((/* implicit */short) (((~(arr_12 [12] [12]))) >= (((/* implicit */unsigned long long int) arr_13 [4] [(signed char)9] [i_0] [i_0] [i_0] [i_0]))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                {
                    arr_20 [i_0] [0] [6LL] = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [5]))))), (2147483647))), (((/* implicit */int) ((_Bool) var_16)))));
                    var_23 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (arr_12 [i_5] [8]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) ? (max((arr_9 [i_0]), (arr_9 [i_6]))) : (((/* implicit */unsigned long long int) var_2))));
                }
            } 
        } 
    }
    for (int i_7 = 2; i_7 < 22; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_8 = 1; i_8 < 24; i_8 += 3) 
        {
            for (int i_9 = 0; i_9 < 25; i_9 += 4) 
            {
                {
                    arr_28 [22] [i_7] [i_8] [(signed char)17] = ((/* implicit */signed char) (~(((/* implicit */int) arr_25 [i_7] [i_8] [21]))));
                    var_24 -= ((/* implicit */long long int) (short)5556);
                }
            } 
        } 
        var_25 = arr_21 [i_7];
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            for (short i_11 = 0; i_11 < 25; i_11 += 4) 
            {
                {
                    arr_35 [12ULL] [i_10] [i_10] [(short)6] &= ((/* implicit */unsigned long long int) (-2147483647 - 1));
                    var_26 += ((/* implicit */long long int) ((arr_26 [i_7]) || (((/* implicit */_Bool) arr_25 [i_10] [18] [i_10]))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 2) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (signed char i_13 = 2; i_13 < 23; i_13 += 4) 
                        {
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (-(0ULL)))) ? (((((/* implicit */_Bool) 17ULL)) ? (72064996004970040ULL) : (((/* implicit */unsigned long long int) 1459540566)))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [16LL] [i_10] [i_11] [19] [(signed char)6] [9]))) : (arr_29 [4LL] [i_11])))));
                            arr_42 [i_12] [i_10] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_13] [i_12] [i_7 + 1])) ? (arr_30 [i_13] [i_13] [i_7 + 1]) : (arr_30 [i_10] [i_7] [i_7 + 1])));
                            var_28 -= ((signed char) arr_23 [i_13]);
                        }
                        for (unsigned long long int i_14 = 3; i_14 < 24; i_14 += 3) /* same iter space */
                        {
                            var_29 -= ((/* implicit */short) (~((~(((/* implicit */int) arr_38 [i_7] [i_10] [i_11] [24LL] [i_14]))))));
                            arr_46 [i_7] [i_10] [i_10] [i_11] [i_12] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_14 - 3])) ? (((/* implicit */int) arr_23 [i_7 - 1])) : (((/* implicit */int) arr_23 [i_7 - 2]))));
                        }
                        for (unsigned long long int i_15 = 3; i_15 < 24; i_15 += 3) /* same iter space */
                        {
                            var_30 += ((/* implicit */short) ((unsigned long long int) -210009702));
                            var_31 = ((/* implicit */long long int) (signed char)-77);
                        }
                        for (signed char i_16 = 0; i_16 < 25; i_16 += 3) 
                        {
                            arr_52 [1ULL] [i_12] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) 7731658083631133109LL)) || (((/* implicit */_Bool) 0LL))))));
                            arr_53 [i_16] [i_12] [i_11] [i_10] [i_7] = ((/* implicit */short) ((arr_37 [i_16]) ? (((long long int) arr_51 [7ULL] [i_10] [i_10] [i_11] [i_12] [i_16])) : (((/* implicit */long long int) arr_48 [i_7] [i_10] [i_11] [i_12] [i_16]))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_17 = 0; i_17 < 25; i_17 += 2) 
                        {
                            arr_57 [i_17] [i_12] [i_11] [24ULL] [i_7] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (signed char)-26)) ? (var_7) : (((/* implicit */int) arr_21 [(signed char)10])))));
                            arr_58 [i_7] [13ULL] [(signed char)7] [i_7] [(signed char)2] = ((unsigned long long int) (short)18414);
                        }
                        var_32 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_7 + 3] [i_7 - 2] [(signed char)13] [i_7 + 2] [i_7])) ? (arr_48 [i_7 + 1] [i_7 + 1] [22ULL] [i_7 - 1] [i_7]) : (arr_48 [i_7 + 2] [i_7 - 1] [i_7] [i_7 - 1] [i_7])));
                    }
                    for (long long int i_18 = 0; i_18 < 25; i_18 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)-1)) ? (min((((/* implicit */unsigned long long int) arr_50 [19] [i_10] [i_10] [i_11] [9])), (16900064707911450583ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_7] [24ULL] [i_7 - 1] [i_7 - 2] [(short)5]))))))))));
                        arr_63 [i_7] [i_10] [i_11] [i_18] = ((/* implicit */short) ((((int) ((arr_45 [i_7] [i_10] [13ULL] [6ULL] [i_18] [i_18] [i_18]) | (((/* implicit */int) var_12))))) / (((/* implicit */int) min((((/* implicit */short) ((signed char) -543397083))), (arr_32 [i_7 + 1]))))));
                        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-22861)), (628037863)))) < (((arr_31 [i_7 - 1] [i_7 + 3] [i_7]) * (arr_31 [i_7 - 1] [i_7 - 2] [16ULL]))))))));
                        arr_64 [i_7] [i_10] [5] [9] = arr_30 [i_7] [i_7] [i_7];
                    }
                    /* vectorizable */
                    for (long long int i_19 = 0; i_19 < 25; i_19 += 2) /* same iter space */
                    {
                        arr_68 [i_7] [i_10] [13ULL] [(signed char)23] = ((/* implicit */int) ((((/* implicit */int) arr_22 [i_7 - 1])) >= (210009701)));
                        arr_69 [i_10] [i_10] = ((/* implicit */short) (((((~(((/* implicit */int) arr_26 [11ULL])))) + (2147483647))) << (((arr_33 [i_7 - 1]) - (4989034803013933324LL)))));
                        arr_70 [(signed char)9] [(signed char)3] [11] [i_7] = ((/* implicit */unsigned long long int) (+(arr_49 [(signed char)10] [i_7] [i_7 + 2] [21ULL] [i_7])));
                        arr_71 [3ULL] [i_7] [8] [1ULL] [i_7] [3] = ((/* implicit */short) ((((/* implicit */int) arr_50 [0ULL] [i_7 + 2] [i_11] [i_10] [i_19])) <= (((/* implicit */int) (signed char)58))));
                    }
                    for (signed char i_20 = 0; i_20 < 25; i_20 += 2) 
                    {
                        arr_75 [i_10] [(short)18] [i_7] &= ((/* implicit */int) (signed char)-1);
                        arr_76 [i_7] [(signed char)0] [i_11] [i_20] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_47 [i_7 - 2] [i_7] [i_7 + 1]) * (0))))));
                        var_35 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_18)), (210009702)))) ? (((int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) var_15)) : (12094178892299137577ULL)))) : (((/* implicit */int) arr_27 [17] [0] [i_20]))));
                    }
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_21 = 1; i_21 < 10; i_21 += 3) 
    {
        for (signed char i_22 = 0; i_22 < 12; i_22 += 2) 
        {
            {
                var_36 = arr_3 [i_22];
                arr_82 [i_21] = ((((/* implicit */_Bool) min((arr_44 [i_21 + 1] [i_21] [i_22] [i_22] [i_21]), (((/* implicit */unsigned long long int) arr_32 [i_21 - 1]))))) ? (((((/* implicit */_Bool) arr_55 [i_21 + 1] [i_21 + 2] [i_21 + 2] [i_21 + 1])) ? (arr_55 [i_21 + 2] [i_21 - 1] [i_21 + 2] [i_21 + 2]) : (arr_55 [i_21 + 1] [i_21 + 1] [i_21 + 2] [i_21 - 1]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((int) arr_73 [i_22] [i_22] [16ULL] [i_21] [i_21] [4]))), (arr_67 [i_22] [11] [i_22] [i_21] [i_21] [(short)13])))));
                var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (signed char)-15)) ? (arr_19 [(short)1] [13] [i_21 + 1] [i_21]) : (arr_19 [i_22] [i_21] [i_21 + 1] [i_21]))) : ((~(arr_19 [i_22] [(signed char)0] [i_21 + 1] [(short)11])))));
                var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) arr_37 [i_21]))))) - (arr_0 [4]))))))));
            }
        } 
    } 
}
