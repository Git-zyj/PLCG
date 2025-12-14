/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203818
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_12 ^= ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned short)0] [i_0 + 2]))))) <= (((/* implicit */int) ((unsigned short) arr_1 [4ULL] [i_0 + 2])))));
        var_13 = ((/* implicit */unsigned short) var_5);
        arr_2 [6] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)12] [i_0])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) ((signed char) arr_0 [i_0] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2047))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) var_10)), (((((/* implicit */int) var_10)) - ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_14 = ((/* implicit */unsigned char) (short)127);
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                {
                    arr_11 [i_1] [(_Bool)1] [i_2] [i_3] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned short)2])) ? (658202759U) : (((/* implicit */unsigned int) arr_10 [i_1] [i_2] [i_1] [i_3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_10 [i_1] [i_2] [i_3] [i_3]) : (((/* implicit */int) arr_5 [i_1]))))) : (var_0))));
                    var_15 += ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) (+(875887677)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            arr_16 [i_1] [2ULL] [i_4] &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31662))) : (18136200546147168822ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((long long int) arr_12 [i_1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_15 [i_4] [i_4])) : (((/* implicit */int) var_9))))))))));
            var_16 = ((((/* implicit */int) ((unsigned short) 4294967270U))) / (((/* implicit */int) ((_Bool) min((((/* implicit */int) var_7)), (arr_8 [i_1] [i_4]))))));
            arr_17 [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) (+(min((((arr_7 [i_1]) - (arr_6 [i_1]))), (((((/* implicit */long long int) var_0)) + (arr_6 [i_1])))))));
            arr_18 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_13 [i_1] [i_1])), (18136200546147168823ULL))), (((/* implicit */unsigned long long int) arr_15 [i_4] [i_1]))))) ? (((/* implicit */long long int) 4294967295U)) : (((((/* implicit */_Bool) arr_6 [i_4])) ? (arr_6 [i_1]) : (((((/* implicit */_Bool) 1236194630U)) ? (arr_6 [(_Bool)1]) : (((/* implicit */long long int) var_1))))))));
            arr_19 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) >= (arr_6 [i_4])))), ((signed char)-86))))));
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            var_17 ^= ((/* implicit */unsigned int) arr_5 [i_1]);
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                arr_27 [i_1] [13] = ((/* implicit */_Bool) var_2);
                var_18 = ((/* implicit */unsigned long long int) var_0);
            }
            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                var_19 = ((/* implicit */int) ((1236194630U) >> (((((/* implicit */int) arr_20 [(unsigned short)15] [(unsigned short)15])) - (28476)))));
                arr_31 [i_1] [i_5] [i_7] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_1))));
                var_20 = ((/* implicit */int) var_1);
            }
        }
        arr_32 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_1] [i_1] [i_1]))) > (((((/* implicit */_Bool) arr_5 [i_1])) ? (var_5) : (((/* implicit */unsigned long long int) var_1)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [(short)7] [13ULL] [i_1]))) & (2417418340U)))), (((((/* implicit */_Bool) 1236194631U)) ? (((/* implicit */unsigned long long int) arr_13 [i_1] [i_1])) : (arr_23 [(unsigned short)9] [18] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_23 [i_1] [i_1] [i_1]) < (arr_23 [i_1] [i_1] [i_1])))))));
        arr_33 [i_1] = arr_13 [i_1] [(short)14];
    }
    /* vectorizable */
    for (unsigned short i_8 = 2; i_8 < 17; i_8 += 4) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_8 - 1] [i_8 - 1] [i_8 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_8] [i_8] [i_8] [0U])) || (((/* implicit */_Bool) arr_29 [i_8] [(short)7] [i_8] [i_8 - 1])))))) : ((+(var_0)))));
        var_22 = ((/* implicit */int) (~(arr_4 [i_8 - 1] [i_8 - 1])));
        var_23 -= ((/* implicit */_Bool) (~((+(1236194640U)))));
        arr_37 [i_8] = ((/* implicit */int) var_4);
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_24 = ((((((/* implicit */_Bool) arr_0 [i_9] [i_9])) ? (((/* implicit */int) arr_0 [i_9] [i_9])) : (((/* implicit */int) arr_0 [i_9] [i_9])))) | (((/* implicit */int) arr_0 [i_9] [i_9])));
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            var_25 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_10])) ? (((/* implicit */int) var_6)) : (-840804973)))) ? (arr_12 [i_10]) : (((/* implicit */unsigned int) ((int) arr_23 [i_9] [i_10] [i_10])))))), (arr_34 [i_9] [i_9])));
            arr_42 [i_9] [i_10] = ((/* implicit */unsigned short) ((arr_39 [i_10]) ? (((((/* implicit */_Bool) 4294967293U)) ? (((((/* implicit */_Bool) 9636510240555194332ULL)) ? (310543527562382795ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_9] [3ULL]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [i_10] [i_9] [(short)7] [i_9]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_9] [i_10] [i_10] [i_10])))));
            arr_43 [4ULL] = max((((((/* implicit */_Bool) var_11)) ? (min((arr_23 [i_9] [14ULL] [i_10]), (arr_4 [(unsigned short)14] [i_9]))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_13 [i_9] [i_10])), (4294967295U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_9] [i_9] [i_10] [i_10])) ? (max((((/* implicit */unsigned int) arr_22 [i_10])), (var_1))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (arr_1 [2U] [2U])))))));
            /* LoopNest 2 */
            for (short i_11 = 3; i_11 < 9; i_11 += 4) 
            {
                for (unsigned char i_12 = 4; i_12 < 8; i_12 += 3) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) (_Bool)1);
                        var_27 = ((/* implicit */long long int) min(((unsigned short)65535), ((unsigned short)65521)));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (short i_13 = 2; i_13 < 10; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    for (unsigned short i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */int) var_5);
                            arr_55 [i_9] [i_10] [i_13] [(signed char)7] [i_15] |= ((/* implicit */int) var_4);
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) arr_1 [i_15] [i_13]))));
                            arr_56 [1U] [5] [(unsigned short)6] [(unsigned short)3] [(short)0] [5] [i_15] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_10 [i_9] [i_10] [i_13 + 1] [i_14])) ? (((/* implicit */long long int) arr_10 [i_9] [i_14] [i_13 - 1] [i_14])) : (arr_53 [i_13 + 1] [i_13] [i_13 - 1] [i_13 - 1] [i_13] [(signed char)7]))));
                        }
                    } 
                } 
                var_30 |= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((short) ((_Bool) arr_29 [(unsigned short)12] [i_10] [i_13] [i_9])))), (arr_53 [i_13 - 2] [i_13 + 1] [i_13 + 1] [i_13 - 2] [i_13 + 1] [i_13 - 2])));
                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) 67870873063051538LL))));
                var_32 = ((/* implicit */long long int) max((((/* implicit */short) (unsigned char)43)), ((short)-8887)));
            }
            for (short i_16 = 1; i_16 < 8; i_16 += 4) 
            {
                arr_59 [i_16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_16 - 1] [i_16 - 1] [i_16 + 1])) ? (arr_58 [9] [9] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((long long int) 3058772655U)) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [10U] [i_9] [i_10] [i_16])) ? (var_11) : (1236194640U)))))))) : (((((_Bool) var_4)) ? (max((7515455998546825127LL), (((/* implicit */long long int) 131071U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_9] [i_9] [i_9])) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) arr_49 [i_9] [i_10] [i_16]))))))));
                var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((min((((/* implicit */long long int) arr_50 [1] [i_9])), (arr_53 [i_16 + 2] [i_16 + 1] [i_16 - 1] [i_16 + 1] [i_16 + 2] [i_16 - 1]))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))));
                var_34 &= ((/* implicit */unsigned char) (_Bool)1);
                /* LoopSeq 3 */
                for (unsigned long long int i_17 = 1; i_17 < 10; i_17 += 4) 
                {
                    var_35 ^= ((/* implicit */short) min((((/* implicit */unsigned int) ((max((arr_61 [i_9] [i_9] [i_9] [(unsigned short)7] [i_9] [i_9]), (((/* implicit */long long int) arr_0 [(signed char)8] [i_10])))) <= (((((/* implicit */_Bool) arr_6 [12ULL])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_17] [i_17])))))))), (var_1)));
                    arr_62 [i_9] [(short)4] [i_10] [i_9] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_36 [i_16 + 3])) ? (((/* implicit */int) arr_36 [i_16 + 2])) : (((/* implicit */int) arr_36 [i_16 + 1])))), ((-(arr_54 [i_10] [i_16 + 3] [i_17 - 1] [i_17] [i_17 + 1] [i_17 - 1])))));
                    var_36 = ((/* implicit */short) arr_44 [i_17]);
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 1; i_18 < 10; i_18 += 2) 
                    {
                        var_37 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 3708629353247148800LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)111))) : (arr_6 [i_16 - 1]))) >= (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (var_0))))));
                        arr_65 [i_9] [(unsigned char)8] [i_9] [i_9] = ((/* implicit */unsigned short) ((long long int) arr_1 [(unsigned char)12] [10LL]));
                    }
                }
                for (unsigned char i_19 = 0; i_19 < 11; i_19 += 4) 
                {
                    var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) max((((((/* implicit */_Bool) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (arr_53 [i_9] [i_9] [i_9] [i_9] [i_9] [9ULL])))) ? (((/* implicit */int) arr_29 [i_16] [i_16 - 1] [i_16] [i_16])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (arr_66 [5U] [i_9] [i_9] [i_9] [i_9] [i_9]))))), (arr_26 [i_9] [i_10] [(short)4] [i_19]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_20 = 4; i_20 < 10; i_20 += 3) 
                    {
                        var_39 = ((/* implicit */long long int) var_1);
                        arr_71 [i_19] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1236194631U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (131086U))) - (((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) var_3)))) != ((~(((/* implicit */int) (unsigned char)59))))))))));
                        var_40 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_70 [i_20 - 2] [i_16 - 1] [i_20])) ? (((/* implicit */int) arr_70 [i_20 - 1] [i_16 + 3] [i_20])) : (((/* implicit */int) arr_70 [i_20 - 4] [i_16 + 2] [i_20]))))), (min((((/* implicit */long long int) arr_70 [i_20 - 1] [i_16 + 3] [i_20])), (16383LL)))));
                        var_41 = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) var_8)))) != (((/* implicit */int) var_9)))) ? (max((((arr_52 [i_19]) % (var_0))), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_19])))));
                    }
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_42 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_9])) <= (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_4)))))))), (arr_74 [i_9] [i_10] [i_9] [i_21])));
                    arr_76 [i_9] [i_10] [i_16] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65232)), (arr_7 [10LL])))) ? (((((/* implicit */_Bool) arr_13 [i_21] [i_9])) ? (((/* implicit */unsigned int) -1871303404)) : (3058772665U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_10])))))) ? (((/* implicit */unsigned long long int) ((((var_11) << (((((/* implicit */int) var_3)) - (43353))))) >> ((((~(((/* implicit */int) arr_41 [i_9] [(short)5])))) + (28)))))) : (max(((+(arr_21 [i_10]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_67 [0] [i_10] [i_10] [i_10])))))))));
                }
            }
            /* vectorizable */
            for (short i_22 = 1; i_22 < 7; i_22 += 2) 
            {
                arr_79 [i_9] [1LL] [i_9] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)9)) ? (((((/* implicit */_Bool) arr_44 [(signed char)6])) ? (((/* implicit */unsigned long long int) arr_26 [i_22] [i_22] [(short)11] [13U])) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                arr_80 [i_9] [i_10] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_22 + 4] [i_22 + 1] [i_22])) ? (((/* implicit */int) arr_49 [i_22 + 2] [i_22 + 1] [(short)2])) : (((/* implicit */int) arr_49 [i_22 + 2] [i_22 + 3] [i_22]))));
                var_43 = ((/* implicit */int) -16383LL);
                var_44 = ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_48 [i_22 + 1] [i_22 + 1] [i_22 + 1])));
            }
        }
        var_45 += ((/* implicit */long long int) ((min((((/* implicit */int) (unsigned short)44463)), (max((arr_10 [i_9] [i_9] [i_9] [i_9]), (((/* implicit */int) arr_41 [2] [i_9])))))) == ((+(((/* implicit */int) ((arr_64 [i_9] [i_9] [i_9] [i_9]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_9] [i_9]))))))))));
    }
    var_46 *= ((/* implicit */short) 18446744073709551611ULL);
    var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) (unsigned char)138))));
}
