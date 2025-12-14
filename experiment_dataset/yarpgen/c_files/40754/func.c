/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40754
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) var_0)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_12 [(unsigned short)9] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3] [i_1] [6ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_10 [i_0] [(short)4] [8ULL] [i_1] [i_2] [i_3])));
                        arr_13 [(short)12] [i_2] [i_2] [i_2] [i_2] [(signed char)14] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) 3262609212U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [(signed char)5] [i_0]))) : (13835058055282163712ULL))));
                        var_14 = ((/* implicit */unsigned long long int) ((((7308667633490260148LL) >> (((((/* implicit */int) arr_4 [i_1] [1] [5LL])) + (2656))))) >> (((((/* implicit */int) var_3)) + (145)))));
                        var_15 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1] [(unsigned char)15] [i_3])))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4] [i_1] [i_0] [i_0])) ? (17971208698443209921ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_4])))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 2; i_6 < 14; i_6 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)6] [i_4] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (short)32766)) - (((/* implicit */int) arr_2 [i_1] [i_4] [i_1]))))));
                            var_18 &= ((/* implicit */signed char) (~(var_9)));
                        }
                    } 
                } 
            }
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11)))))));
        }
        for (signed char i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
        {
            var_20 += ((/* implicit */unsigned int) var_0);
            /* LoopSeq 3 */
            for (unsigned short i_8 = 3; i_8 < 16; i_8 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        arr_31 [i_0] [i_7] [i_0] [i_9] [i_10] = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) <= (((/* implicit */unsigned long long int) var_12)))))) | (min((((/* implicit */unsigned long long int) var_3)), (17971208698443209921ULL))))), (((/* implicit */unsigned long long int) ((signed char) arr_14 [i_9] [i_8 - 1] [i_7] [i_9])))));
                        var_21 = ((/* implicit */unsigned char) arr_16 [i_0] [i_9] [(_Bool)1]);
                        var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(var_8)))), (max((arr_25 [i_8 - 3] [i_8 - 3] [i_8 - 1]), (((/* implicit */unsigned long long int) var_8))))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        var_23 = ((/* implicit */_Bool) arr_15 [i_9] [4ULL] [i_9]);
                        var_24 = ((/* implicit */unsigned char) ((max((var_0), (((/* implicit */unsigned long long int) arr_14 [i_9] [i_8 - 1] [i_8] [i_8])))) + (var_10)));
                        arr_34 [i_0] [i_0] [i_0] [(unsigned char)13] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 10273897647205476649ULL)) && (((/* implicit */_Bool) arr_26 [i_7]))))), (var_5))))));
                        var_25 *= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_7] [i_8] [i_7]))))))))));
                        arr_35 [i_11] [i_9] [(signed char)13] [i_7] [(signed char)13] = ((/* implicit */unsigned short) ((long long int) var_5));
                    }
                    arr_36 [16U] [16U] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */signed char) 2407142689U);
                    arr_37 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 10882308352384116353ULL)))))) ? (((((/* implicit */int) arr_2 [i_7] [i_8] [i_9])) - (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)13]))));
                }
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 17; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 1; i_13 < 13; i_13 += 3) 
                    {
                        {
                            arr_44 [i_12] [i_12] = ((/* implicit */unsigned int) ((var_8) || (((/* implicit */_Bool) 2889863798U))));
                            var_26 = max((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_29 [i_0] [i_12] [i_8] [5ULL] [i_0]), (((/* implicit */unsigned long long int) var_9)))))))), (((((/* implicit */_Bool) arr_32 [i_13] [7] [i_13 + 3] [i_13] [i_13] [12])) ? (((/* implicit */int) arr_43 [2LL] [i_12] [12U] [i_8] [i_8] [i_12] [(unsigned char)4])) : (((/* implicit */int) (signed char)-86)))));
                        }
                    } 
                } 
                var_27 ^= ((/* implicit */short) var_2);
                /* LoopNest 2 */
                for (signed char i_14 = 1; i_14 < 13; i_14 += 1) 
                {
                    for (signed char i_15 = 2; i_15 < 14; i_15 += 2) 
                    {
                        {
                            arr_51 [i_0] [(unsigned char)8] [8U] [8ULL] [8U] = ((/* implicit */short) ((((/* implicit */int) (short)16893)) <= (((/* implicit */int) ((((arr_1 [i_8 - 1]) ? (arr_3 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))))) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-10680))))))));
                            arr_52 [(signed char)16] [i_7] [i_8] [9] [i_15] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_43 [(unsigned char)6] [i_7] [(unsigned char)16] [i_7] [i_7] [(unsigned char)16] [i_15]))))) ? ((~(((/* implicit */int) var_4)))) : ((~(((/* implicit */int) var_11)))))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_15 [i_8] [i_8 - 1] [i_7])) : (((/* implicit */int) arr_15 [i_8] [i_8 - 2] [i_15]))))));
                        }
                    } 
                } 
                var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (1964642490) : (1135612907)))) | ((~(var_0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_7] [i_7] [i_7] [i_7])) ? (-188747521) : (((/* implicit */int) (unsigned char)247))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [(short)7]))) : (992U))) : (((/* implicit */unsigned int) var_12))));
            }
            for (unsigned long long int i_16 = 1; i_16 < 16; i_16 += 4) 
            {
                arr_57 [i_16] [i_16] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_10))) & (arr_38 [i_7])));
                var_29 += ((/* implicit */short) min((((((/* implicit */_Bool) arr_27 [(unsigned char)9] [i_16 + 1] [i_16 - 1] [(signed char)14] [i_16 + 1])) ? (arr_33 [i_16 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (max((arr_27 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 + 1]), (arr_27 [i_16] [i_16 - 1] [i_16 - 1] [i_16] [i_16 + 1])))));
            }
            /* vectorizable */
            for (signed char i_17 = 1; i_17 < 15; i_17 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_18 = 3; i_18 < 16; i_18 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_67 [i_18] = ((/* implicit */unsigned long long int) arr_58 [i_0] [i_0] [i_0] [i_0]);
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) var_11))))))));
                        arr_68 [i_18] = ((/* implicit */unsigned int) var_9);
                        var_31 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (var_1)));
                    }
                    var_32 ^= ((/* implicit */int) arr_18 [i_0] [i_0] [(short)5]);
                }
                arr_69 [i_0] [i_17] &= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_17])) ? (((/* implicit */int) (unsigned short)39377)) : (((/* implicit */int) arr_32 [i_0] [i_0] [i_7] [i_0] [i_0] [i_17])))));
                arr_70 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned char)250);
                var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) var_11))));
            }
            /* LoopNest 2 */
            for (unsigned int i_20 = 0; i_20 < 17; i_20 += 1) 
            {
                for (unsigned long long int i_21 = 0; i_21 < 17; i_21 += 4) 
                {
                    {
                        var_34 += ((/* implicit */unsigned int) ((long long int) (unsigned char)166));
                        var_35 = ((/* implicit */_Bool) arr_6 [i_0] [i_7] [i_21]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_22 = 0; i_22 < 17; i_22 += 1) 
            {
                for (signed char i_23 = 0; i_23 < 17; i_23 += 4) 
                {
                    for (int i_24 = 3; i_24 < 15; i_24 += 2) 
                    {
                        {
                            var_36 = min(((!(((/* implicit */_Bool) ((arr_38 [i_22]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))), ((!((!(((/* implicit */_Bool) var_4)))))));
                            var_37 += ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_17 [i_24] [i_23] [i_24] [i_23] [i_23])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_7))))) >> (((621160543) - (621160526)))))) : (min((((/* implicit */unsigned long long int) var_1)), ((~(72057594037927935ULL)))))));
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_8 [(short)15] [i_7] [i_24] [i_24 - 3] [i_24])) ? (arr_20 [i_24 - 1] [i_24 + 1] [i_24 + 1] [i_24] [i_24] [i_24 + 1]) : (arr_20 [i_23] [i_23] [(signed char)16] [i_24] [i_23] [i_24 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [(unsigned short)5] [(unsigned short)5] [i_22] [i_22] [(unsigned short)5])))));
                            var_39 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) arr_66 [i_0] [i_0] [i_22] [i_22] [i_22])), (arr_55 [i_22]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_25 = 0; i_25 < 17; i_25 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_26 = 2; i_26 < 16; i_26 += 3) 
            {
                arr_92 [i_0] [i_0] [i_0] [(signed char)16] = ((/* implicit */unsigned short) (unsigned char)252);
                /* LoopNest 2 */
                for (unsigned int i_27 = 2; i_27 < 16; i_27 += 4) 
                {
                    for (unsigned char i_28 = 0; i_28 < 17; i_28 += 3) 
                    {
                        {
                            var_40 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_54 [i_26 - 2] [i_27 - 1] [i_27])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_26 + 1] [i_27 + 1] [i_25]))) : (12705827636691312012ULL)));
                            arr_100 [i_25] [i_28] [(unsigned char)0] [i_26] [i_28] [(unsigned char)0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_25])) && (((/* implicit */_Bool) var_0)))))));
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_12)) | ((~(arr_3 [i_25])))));
                            var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) var_8))));
                        }
                    } 
                } 
                var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_20 [8] [8] [i_26] [3] [i_0] [i_25])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))) : (var_0))) >= (((((/* implicit */_Bool) (unsigned short)39377)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111))) : (arr_29 [(unsigned char)6] [i_25] [(_Bool)1] [i_0] [i_0]))))))));
                var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) (signed char)74))));
            }
            for (unsigned int i_29 = 2; i_29 < 16; i_29 += 1) 
            {
                var_45 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_29 - 1])) >> (((arr_27 [i_29 - 2] [i_29 - 2] [(unsigned char)8] [i_29 - 2] [i_29]) - (10067709012113652557ULL)))));
                /* LoopNest 2 */
                for (long long int i_30 = 0; i_30 < 17; i_30 += 3) 
                {
                    for (short i_31 = 3; i_31 < 16; i_31 += 4) 
                    {
                        {
                            var_46 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_11))))) + (((/* implicit */int) (signed char)-124))));
                            arr_111 [i_0] [i_0] [i_30] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_108 [i_30] [i_30])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [(unsigned char)5] [i_29 + 1] [i_30]))) : (arr_85 [i_0] [i_25] [i_29 - 1] [i_29 - 2] [i_29 - 1] [i_31 - 3])));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_32 = 4; i_32 < 14; i_32 += 4) 
                {
                    var_47 ^= ((/* implicit */unsigned int) arr_113 [i_25] [i_32 - 1]);
                    var_48 -= ((/* implicit */unsigned int) var_3);
                    var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
                }
                for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                {
                    var_50 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_99 [i_0] [i_25] [i_29 + 1] [i_33])) ? (((/* implicit */int) arr_42 [4U] [i_25] [i_29 - 1] [i_33] [i_25])) : (((/* implicit */int) arr_42 [(unsigned short)5] [(unsigned char)1] [i_29 - 2] [i_33] [6U]))));
                    arr_120 [i_33] [3LL] [i_25] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_74 [i_33] [5LL]))))) >= ((+(((/* implicit */int) var_4))))));
                    arr_121 [i_25] [i_33] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_119 [(signed char)12] [i_0] [(unsigned char)13] [i_0]) : (((/* implicit */int) var_3))))) ? ((~(10459278381678182860ULL))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_0] [i_25] [i_25] [i_33] [i_33]))) : (var_0)))));
                }
                /* LoopNest 2 */
                for (unsigned char i_34 = 0; i_34 < 17; i_34 += 3) 
                {
                    for (long long int i_35 = 0; i_35 < 17; i_35 += 4) 
                    {
                        {
                            arr_128 [16] [8ULL] [i_29] [i_35] [i_34] [i_35] [i_35] |= ((/* implicit */long long int) arr_110 [i_35] [(signed char)2] [i_35] [i_35] [5ULL]);
                            arr_129 [i_34] = ((/* implicit */short) (+(((/* implicit */int) arr_59 [i_0] [i_25]))));
                        }
                    } 
                } 
            }
            var_51 = ((/* implicit */long long int) ((((/* implicit */int) (short)-32139)) * (((((/* implicit */int) var_8)) / (((/* implicit */int) arr_74 [i_25] [(unsigned char)0]))))));
        }
        arr_130 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_77 [i_0])) ? (((11763817173263465583ULL) >> (((arr_98 [(signed char)4] [i_0] [i_0] [i_0] [i_0]) + (8834267956194445353LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    }
    var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1)))))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
}
