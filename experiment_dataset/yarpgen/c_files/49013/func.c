/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49013
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
    var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_11)))) == (((((/* implicit */_Bool) ((var_0) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)35)))))) ? (((/* implicit */unsigned long long int) max((5475747950745971029LL), (((/* implicit */long long int) (unsigned char)215))))) : (((((/* implicit */_Bool) var_1)) ? (8444249301319680ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
    var_19 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_0 - 2] [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)1145))));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((var_17) || (((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)10] [10LL] [(unsigned char)10])))))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_4 = 2; i_4 < 8; i_4 += 2) 
                {
                    var_22 *= ((/* implicit */_Bool) (~(((arr_11 [i_1]) >> (((((/* implicit */int) arr_5 [i_4] [i_1] [i_3] [i_4])) - (37250)))))));
                    var_23 += ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_4]))));
                }
                for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    var_24 = ((/* implicit */unsigned char) arr_6 [i_5] [i_1] [i_0]);
                    var_25 ^= ((/* implicit */long long int) arr_7 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1]);
                }
                var_26 = ((/* implicit */int) -5475747950745971029LL);
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned long long int) (_Bool)1);
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((unsigned long long int) arr_6 [i_0 + 2] [i_0] [i_0])))));
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5475747950745971029LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_11 [i_0 - 2])));
                var_30 = ((/* implicit */_Bool) max((var_30), ((_Bool)1)));
            }
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                var_31 = ((/* implicit */unsigned char) ((unsigned int) arr_9 [i_0 + 1] [i_0] [i_0 - 1] [i_0]));
                var_32 = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((-(arr_11 [(unsigned short)8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                /* LoopSeq 1 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    var_33 = ((/* implicit */int) max((var_33), (((((/* implicit */_Bool) arr_3 [i_8] [i_8 - 1] [i_7])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) var_12))))));
                    var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)48)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 768)) ? (((/* implicit */unsigned long long int) var_4)) : (8162020001285424460ULL))))));
                }
            }
            arr_22 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0 - 2] [i_0 + 2] [i_0 - 2] [i_0 - 2])) * (((/* implicit */int) arr_7 [i_0 - 2] [i_0 + 2] [i_0 + 1] [i_0 + 1]))));
            /* LoopSeq 2 */
            for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    var_35 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [(short)2] [i_0] [i_0] [i_0 - 2])) : (arr_4 [i_0 - 1] [i_0 - 2] [i_0 - 1])));
                    /* LoopSeq 4 */
                    for (short i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        arr_32 [i_11] [i_11] [i_9] [i_0] [i_11] = ((arr_4 [i_10] [i_1] [i_0]) - (arr_4 [i_0 + 1] [i_1] [i_9]));
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */_Bool) ((((arr_20 [(short)4] [i_1] [i_1] [i_1]) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_15 [i_1] [(unsigned short)10])) ? (arr_4 [i_0 - 2] [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_1]))))))));
                    }
                    for (long long int i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned char) 9894493575637045524ULL);
                        arr_35 [i_0] [i_1] [i_0] [i_9] [(unsigned char)6] [(unsigned char)1] [(unsigned short)6] = arr_7 [1ULL] [10U] [i_9] [i_9];
                        var_38 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0 - 1]))) : (((((/* implicit */_Bool) arr_30 [i_1] [8U] [i_1])) ? (arr_29 [i_0 + 1] [i_1] [i_0 + 1] [i_10] [i_12] [i_12]) : ((-9223372036854775807LL - 1LL))))));
                    }
                    for (unsigned char i_13 = 2; i_13 < 8; i_13 += 4) 
                    {
                        arr_38 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_13);
                        var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) var_13))));
                        arr_39 [i_1] [i_1] [i_9] [i_1] [i_10] [i_10] [i_0] = ((/* implicit */unsigned char) ((arr_36 [i_13 + 3] [i_13 - 2] [i_13 + 2] [i_13 + 2] [8ULL]) > (arr_36 [i_13 + 1] [i_13 + 1] [i_13 + 3] [i_13 + 3] [i_13 + 3])));
                        var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) ((long long int) arr_8 [i_1])))));
                    }
                    for (int i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) max((var_41), ((+((-(arr_11 [i_0])))))));
                        var_42 &= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (1098974756864LL))));
                        arr_43 [(unsigned short)9] [5ULL] [i_9] [i_10] [i_0] [i_14] [i_14] = ((/* implicit */unsigned short) (-(arr_6 [i_0 - 1] [i_0 + 1] [i_0 - 1])));
                        var_43 = ((/* implicit */unsigned int) ((unsigned short) arr_25 [i_0] [i_0] [i_0] [i_0 - 1]));
                        var_44 = ((/* implicit */unsigned int) ((short) (_Bool)1));
                    }
                    /* LoopSeq 1 */
                    for (int i_15 = 4; i_15 < 10; i_15 += 4) 
                    {
                        arr_47 [i_0] [i_0] [i_9] [6] [i_9] &= ((/* implicit */unsigned long long int) arr_33 [i_1] [i_1] [i_15] [(_Bool)1] [i_15] [i_1]);
                        arr_48 [i_15] [i_10] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_8 [i_0 + 2];
                        arr_49 [i_0] [i_0] [i_15 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) >> (((arr_44 [i_1] [i_1] [i_9] [i_0 - 1] [i_15]) + (8633862569277920079LL)))));
                        var_45 = ((/* implicit */unsigned short) min((var_45), ((unsigned short)65531)));
                    }
                }
                var_46 *= ((/* implicit */unsigned char) (!(arr_42 [i_0] [i_9] [0ULL] [i_0 + 1] [i_0 + 2])));
                arr_50 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) arr_37 [(unsigned char)8] [i_9] [i_1] [i_0 + 1])) ? (arr_10 [i_0] [i_0] [i_1] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [(_Bool)0] [(unsigned char)10] [i_1] [i_1] [i_9] [4U]))))))));
            }
            for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_17 = 3; i_17 < 10; i_17 += 2) 
                {
                    for (long long int i_18 = 0; i_18 < 11; i_18 += 4) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) -7110073483795304407LL))));
                            var_49 = ((/* implicit */unsigned long long int) var_1);
                            var_50 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) 11150417452338058754ULL))) ? (((((/* implicit */_Bool) arr_11 [i_16])) ? (arr_9 [i_0] [i_1] [i_17] [i_18]) : (((/* implicit */unsigned long long int) arr_20 [i_0] [(unsigned char)6] [i_0] [i_18])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 2] [i_1] [i_16] [i_18])))));
                            arr_58 [8LL] [i_18] [i_17] [i_17 - 1] [(unsigned short)10] [i_18] [i_0] |= ((/* implicit */long long int) ((arr_46 [i_0 - 1] [i_17 - 1] [i_18] [i_17] [i_0 - 2]) ? (((/* implicit */int) arr_34 [i_0] [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_18])) : (((/* implicit */int) (unsigned char)158))));
                        }
                    } 
                } 
                arr_59 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 - 2] [i_0 + 2] [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_0 + 2] [i_0 - 2] [i_0 + 2] [i_0 - 1])) : (((/* implicit */int) var_13))));
                arr_60 [i_0] [i_0] [(short)10] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 9223372036854775807LL))));
            }
        }
        for (unsigned short i_19 = 0; i_19 < 11; i_19 += 2) 
        {
            arr_64 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32640)) || (((/* implicit */_Bool) (short)-1075))));
            var_51 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_19] [7LL] [i_0 - 2])) && (arr_42 [i_0] [i_0] [i_0] [i_0] [i_19])))) : (((/* implicit */int) arr_2 [i_0]))));
        }
        arr_65 [i_0] = ((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 1] [i_0 + 1]))) : (131071LL)));
    }
    for (unsigned int i_20 = 0; i_20 < 19; i_20 += 3) 
    {
        var_52 = ((/* implicit */unsigned char) (((-(arr_67 [i_20]))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7110073483795304395LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)38069)))))));
        arr_69 [i_20] [i_20] = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)15));
    }
}
