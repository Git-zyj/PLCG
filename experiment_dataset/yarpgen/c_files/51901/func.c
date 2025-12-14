/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51901
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        arr_2 [21ULL] = ((/* implicit */int) ((max((((unsigned long long int) -822643309)), (((/* implicit */unsigned long long int) -822643309)))) != (((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */long long int) max(((~(822643309))), (min((-822643309), (((822643308) | (822643309)))))));
                    arr_10 [i_0] [19ULL] [i_2] = ((/* implicit */signed char) arr_6 [i_0 + 1] [i_1] [i_2]);
                    var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0] [i_0])) ? (-822643309) : (arr_0 [i_0 + 2] [i_2])));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */int) max((var_6), (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0]))));
                        var_19 = ((((arr_5 [(unsigned short)20] [i_1] [i_2] [i_3]) + (((/* implicit */unsigned long long int) 822643309)))) - (((((/* implicit */unsigned long long int) arr_12 [i_2] [i_2 + 3] [i_2] [i_2 + 3] [i_2 + 1] [i_2])) + (arr_3 [i_2 - 1] [4] [i_2 - 1]))));
                        arr_13 [i_2] [i_2] = ((/* implicit */unsigned short) ((822643309) / (822643308)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */short) (+(arr_0 [i_2 - 1] [i_4 - 1])));
                            arr_17 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2] [i_3] [i_3] [9ULL])) ? (arr_5 [i_2] [i_4] [(signed char)8] [i_4]) : (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_2] [i_0] [15] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (-822643309)))) : (arr_3 [i_4 - 2] [i_0 - 1] [i_2 + 3]));
                            arr_18 [i_2] [i_1] [i_1] [i_4] = ((unsigned long long int) arr_4 [i_0] [i_1] [i_4 + 1]);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) min((max((arr_14 [i_0] [i_1] [i_2 + 2] [i_2] [i_2 + 1] [i_1] [i_5]), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -822643309)) ? (-822643309) : (-822643309))))));
                            arr_23 [i_0] [i_0] [i_2] [i_0] [i_2] [i_5] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_11 [i_2] [i_3] [i_2] [i_2 - 1])))) <= (arr_1 [14] [14])));
                        }
                    }
                    arr_24 [i_2] [i_1] [i_0] [i_1] = ((/* implicit */int) arr_4 [i_1] [i_1] [i_2]);
                }
            } 
        } 
        var_22 = ((/* implicit */int) min((var_22), (-822643309)));
    }
    for (int i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((unsigned long long int) ((arr_32 [i_6] [i_6]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_7]))))))));
            var_24 = ((/* implicit */unsigned char) -822643309);
        }
        for (int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            var_25 = ((/* implicit */unsigned char) (+(((int) arr_26 [i_6]))));
            arr_35 [i_6] [i_8] = ((max((arr_19 [i_6] [i_6] [i_8] [i_6] [i_8] [i_6] [16]), (((/* implicit */long long int) max((-822643310), (822643309)))))) + (((/* implicit */long long int) -822643309)));
            arr_36 [i_6] [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_1 [i_6] [i_6]);
        }
        for (signed char i_9 = 3; i_9 < 16; i_9 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_10 = 2; i_10 < 14; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        {
                            arr_47 [i_11] [i_11] [(short)9] [i_11] [i_11] [i_11] = ((/* implicit */long long int) -822643310);
                            arr_48 [i_6] [i_9 - 2] [i_6] [i_11] [i_12] |= ((/* implicit */long long int) min((((/* implicit */int) ((arr_44 [i_10 + 2] [i_10] [i_10 - 1] [i_10] [i_10 + 3]) != (((/* implicit */int) arr_27 [i_9 - 1] [i_10 + 3]))))), (((((/* implicit */_Bool) -822643309)) ? (822643309) : (822643309)))));
                            var_26 = ((/* implicit */int) var_0);
                        }
                    } 
                } 
                var_27 = ((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 822643309))))), (arr_7 [i_10]))) / (((/* implicit */unsigned long long int) 822643309)));
            }
            /* vectorizable */
            for (int i_13 = 1; i_13 < 15; i_13 += 4) 
            {
                var_28 = ((/* implicit */long long int) arr_15 [i_6] [i_6] [i_6] [i_9] [i_9] [i_13 - 1] [(signed char)1]);
                var_29 = -822643310;
            }
            arr_52 [i_6] = ((/* implicit */unsigned char) 822643309);
            /* LoopSeq 3 */
            for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 17; i_15 += 4) 
                {
                    for (int i_16 = 2; i_16 < 15; i_16 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (((-(-822643309))) <= (max((822643309), (-822643310)))))) << (((arr_19 [i_6] [i_6] [i_14] [i_15] [i_14] [i_6] [i_6]) - (2352002391132188102LL)))));
                            var_31 = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_21 [i_16 - 2] [i_16 - 2] [i_16 - 2] [i_16 + 1])))), ((~(((/* implicit */int) arr_38 [i_9 - 1]))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) 822643310)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (822643309)))) ? (((arr_58 [i_14] [i_14] [i_14] [i_14] [i_14]) + (822643309))) : ((-(822643309))))))));
            }
            for (int i_17 = 0; i_17 < 17; i_17 += 4) 
            {
                /* LoopSeq 2 */
                for (signed char i_18 = 0; i_18 < 17; i_18 += 4) 
                {
                    var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((short) ((-822643309) >= (822643309))))), ((-(min((arr_7 [i_17]), (((/* implicit */unsigned long long int) var_9)))))))))));
                    arr_68 [i_17] [5] = ((/* implicit */int) var_11);
                    var_34 = ((/* implicit */signed char) ((max(((-(arr_8 [i_6] [i_18] [(short)14]))), (((/* implicit */unsigned long long int) max((arr_20 [i_17] [i_17]), (arr_40 [i_6] [3] [i_17])))))) + (((/* implicit */unsigned long long int) -822643310))));
                }
                for (long long int i_19 = 0; i_19 < 17; i_19 += 3) 
                {
                    arr_71 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */long long int) min((((int) ((822643309) ^ (-822643310)))), (min((max((822643309), (((/* implicit */int) arr_57 [i_19])))), (((/* implicit */int) var_15))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_20 = 2; i_20 < 14; i_20 += 4) 
                    {
                        var_35 = ((((/* implicit */_Bool) ((unsigned char) 822643308))) ? (arr_56 [i_6] [i_6] [i_17] [i_19]) : (arr_63 [i_6] [i_9] [i_9]));
                        arr_75 [i_6] [i_6] [i_6] [i_6] [(signed char)4] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((long long int) -822643309))) ? (((/* implicit */int) var_15)) : (min((822643309), (var_12)))))));
                        var_36 ^= (-(((/* implicit */int) ((((/* implicit */_Bool) arr_70 [i_9 - 1] [i_20 - 2] [4ULL] [i_20 + 2] [i_9 - 1] [i_20 + 3])) || (((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))))));
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -822643309)) ? (min((((/* implicit */int) arr_26 [i_9 - 3])), (822643309))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) min((-822643310), (822643308)))) <= (((((/* implicit */_Bool) arr_58 [i_6] [(unsigned char)16] [i_17] [(unsigned char)16] [(unsigned short)14])) ? (arr_5 [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6] [5ULL] [21] [i_19]))))))))));
                    }
                    for (short i_21 = 0; i_21 < 17; i_21 += 2) 
                    {
                        var_38 -= ((/* implicit */unsigned long long int) max((822643309), (((-822643309) + (-822643310)))));
                        arr_79 [i_9] [i_17] [i_19] [8] = ((/* implicit */signed char) ((int) ((unsigned char) (-(arr_67 [(unsigned char)6] [i_17] [i_17] [i_17] [i_17] [i_17])))));
                    }
                }
                var_39 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_46 [0ULL] [0ULL] [i_17] [2LL] [i_17] [i_17])), (max((var_13), ((~(-822643309)))))));
            }
            for (unsigned char i_22 = 0; i_22 < 17; i_22 += 3) 
            {
                var_40 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-822643311), (822643308)))) ? (arr_66 [i_6] [i_9] [i_6] [i_22]) : (((/* implicit */long long int) (-(822643309))))));
                arr_83 [i_6] [i_22] [i_22] = arr_21 [i_6] [i_6] [i_6] [i_6];
            }
        }
        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_6] [i_6])) ? (arr_0 [i_6] [i_6]) : (arr_0 [i_6] [i_6])))) ? (max((((/* implicit */unsigned long long int) min((-822643309), (arr_41 [i_6] [i_6] [i_6])))), ((~(arr_81 [i_6] [14LL] [i_6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_39 [i_6] [i_6]))))));
        var_42 = ((/* implicit */long long int) 822643308);
    }
    for (unsigned short i_23 = 0; i_23 < 17; i_23 += 3) 
    {
        var_43 &= ((/* implicit */long long int) max((min((min((((/* implicit */unsigned long long int) arr_54 [i_23] [i_23] [i_23])), (arr_7 [6]))), (((/* implicit */unsigned long long int) ((var_13) / (822643309)))))), (((/* implicit */unsigned long long int) max((-822643309), (822643308))))));
        /* LoopSeq 1 */
        for (unsigned char i_24 = 2; i_24 < 16; i_24 += 4) 
        {
            arr_89 [i_23] [7ULL] = ((/* implicit */short) (~(min((min((arr_58 [i_23] [i_23] [i_23] [(signed char)5] [i_23]), (arr_69 [i_23] [i_24 - 1]))), (-822643309)))));
            arr_90 [i_23] [i_23] |= ((/* implicit */signed char) min((arr_19 [(signed char)8] [(short)10] [i_24] [i_24] [i_23] [i_23] [i_23]), (((/* implicit */long long int) arr_86 [i_23] [i_23]))));
            var_44 = ((/* implicit */signed char) min((min((arr_72 [i_24 + 1] [i_24] [i_24 - 1] [i_24] [i_24 + 1]), (arr_72 [i_24 + 1] [i_24] [i_24 - 1] [i_24] [i_24 + 1]))), (((/* implicit */unsigned long long int) ((int) arr_72 [i_24 - 1] [(signed char)1] [i_24 + 1] [i_24] [i_24 + 1])))));
        }
        arr_91 [10LL] [i_23] = ((/* implicit */long long int) (-(822643308)));
        /* LoopNest 2 */
        for (short i_25 = 2; i_25 < 14; i_25 += 2) 
        {
            for (int i_26 = 0; i_26 < 17; i_26 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_27 = 0; i_27 < 17; i_27 += 4) 
                    {
                        var_45 = max((arr_67 [14LL] [i_25 + 1] [14LL] [i_25 - 1] [14LL] [i_25 + 1]), ((~(((/* implicit */int) arr_26 [i_27])))));
                        var_46 = ((/* implicit */short) arr_29 [i_23] [i_23] [i_23]);
                        var_47 = ((/* implicit */short) 822643308);
                        arr_100 [i_25] = (-(max((arr_31 [i_23] [i_27]), (arr_31 [i_25 - 2] [i_26]))));
                    }
                    /* LoopSeq 3 */
                    for (int i_28 = 0; i_28 < 17; i_28 += 4) 
                    {
                        var_48 = 822643309;
                        var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) min((((long long int) var_4)), (((/* implicit */long long int) ((((/* implicit */int) arr_99 [i_23] [i_25 + 3] [i_25 + 1] [i_25] [i_25 + 1])) > (-822643311)))))))));
                        var_50 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_6 [i_25] [i_25] [i_25]))));
                        var_51 = ((/* implicit */int) ((((/* implicit */_Bool) -822643310)) ? (((/* implicit */unsigned long long int) (~(((822643309) | (((/* implicit */int) arr_11 [i_25] [i_25] [18LL] [i_25]))))))) : (((((((/* implicit */_Bool) arr_11 [i_23] [i_25 + 2] [14] [i_23])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [(short)14] [i_25]))) : (arr_32 [i_23] [i_25 + 1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                    }
                    for (short i_29 = 0; i_29 < 17; i_29 += 4) 
                    {
                        var_52 |= ((/* implicit */short) ((int) arr_57 [2LL]));
                        var_53 = ((/* implicit */unsigned long long int) 822643309);
                    }
                    for (signed char i_30 = 0; i_30 < 17; i_30 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_31 = 0; i_31 < 17; i_31 += 4) 
                        {
                            var_54 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_78 [i_25 - 1] [i_25 - 2] [i_25 + 1] [i_25] [i_25 - 2]))));
                            var_55 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_95 [i_23] [i_23] [i_23] [i_23])) + (((/* implicit */int) var_0))));
                            var_56 &= ((/* implicit */short) ((((/* implicit */int) ((arr_7 [i_25]) <= (((/* implicit */unsigned long long int) -822643309))))) - (822643309)));
                        }
                        arr_109 [i_23] [i_25] [i_23] [i_25] [(short)13] [(short)13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -822643309)) ? (max((max((822643310), (((/* implicit */int) var_3)))), ((+(((/* implicit */int) var_15)))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (arr_86 [i_23] [i_25 + 3]))))));
                        arr_110 [i_25] [i_26] [i_30] = arr_92 [i_23] [i_26];
                        arr_111 [i_23] [i_23] [i_23] [i_23] = ((((/* implicit */_Bool) ((int) -822643309))) ? (822643308) : (-822643308));
                        var_57 = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(-822643308))), (((arr_0 [i_23] [0ULL]) - (822643309)))))) ? (822643308) : (((-822643309) / (((/* implicit */int) var_3))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_32 = 4; i_32 < 16; i_32 += 1) 
                    {
                        var_58 = ((arr_77 [2] [i_25 + 3] [i_25] [i_26] [i_32]) ^ (min((((/* implicit */int) arr_95 [i_23] [i_25 + 1] [i_26] [i_32 - 3])), ((+(822643309))))));
                        var_59 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_23] [(short)16] [i_26] [i_32 - 4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_51 [i_23] [i_23] [i_23])) ? (-822643311) : (822643310)))) : (((unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [(unsigned short)2]))) : (arr_81 [i_23] [i_25] [i_23])));
                    }
                    for (unsigned char i_33 = 1; i_33 < 13; i_33 += 4) 
                    {
                        arr_116 [i_23] [i_23] [i_23] [i_23] [i_23] = ((/* implicit */unsigned short) 822643309);
                        var_60 = ((/* implicit */int) min((var_60), (arr_70 [(unsigned char)3] [(unsigned char)3] [i_33 + 3] [i_33 + 3] [(unsigned char)3] [i_33 + 2])));
                        var_61 = ((/* implicit */signed char) min((min((arr_45 [8LL] [(unsigned char)4] [i_26] [i_25 + 2] [i_33] [i_33] [i_26]), (((arr_8 [(signed char)0] [i_25] [(short)20]) / (((/* implicit */unsigned long long int) arr_74 [i_25] [(short)6] [i_25] [i_25])))))), (((/* implicit */unsigned long long int) arr_78 [i_23] [i_25] [i_26] [i_26] [(signed char)12]))));
                        var_62 = ((/* implicit */int) min((var_62), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (min((((unsigned long long int) -822643309)), (((/* implicit */unsigned long long int) arr_86 [i_23] [i_23])))) : (((/* implicit */unsigned long long int) min((max((((/* implicit */int) var_10)), (-822643309))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [4] [i_33 - 1] [i_26] [i_33])))))))))))));
                        var_63 -= ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) ((arr_15 [2ULL] [i_25 - 2] [(unsigned short)0] [(unsigned short)0] [i_26] [i_26] [i_25]) == (((/* implicit */int) arr_11 [3] [i_25] [i_26] [i_33]))))))));
                    }
                }
            } 
        } 
        var_64 = ((/* implicit */int) min((var_64), (((/* implicit */int) ((((unsigned long long int) 822643310)) == (((/* implicit */unsigned long long int) 822643309)))))));
    }
    var_65 = ((/* implicit */unsigned long long int) (~(min((min((822643310), (var_12))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
}
