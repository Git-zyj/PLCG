/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224416
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
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))) / (var_10))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) var_0);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (short i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 1) 
                    {
                        {
                            var_13 = (-(arr_11 [i_0] [i_1] [i_2] [i_0] [15] [i_1]));
                            var_14 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_2] [i_3]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (short i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) max((1447066993U), (((/* implicit */unsigned int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) var_2))))))))));
                            var_16 |= ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 16244221877916553649ULL)) ? (((/* implicit */int) var_9)) : (1191993587))))) + ((-(min((-1191993587), (((/* implicit */int) var_6)))))));
                            var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_21 [i_0] [i_5 + 2] [i_5 - 1] [i_5 + 1] [i_5] [i_5] [i_5]) != (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_5] [i_7]))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_23 [i_5 + 3] [i_5 - 1] [i_5 + 1] [i_5 + 3] [i_5 - 1]))))));
                    var_20 = ((/* implicit */int) 17351597330090553012ULL);
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) arr_6 [i_9] [i_5] [i_1]);
                        var_22 = ((/* implicit */unsigned int) ((int) arr_12 [i_5 + 2] [(unsigned short)1] [i_5 + 3] [12ULL]));
                        arr_33 [i_0] [i_10] [i_9] [(short)0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_22 [i_5 + 3] [i_5] [i_1] [8ULL]);
                    }
                    for (int i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (var_4)));
                        arr_36 [i_1] [i_1] [i_1] [i_1] [i_1] [(_Bool)0] [i_9] |= ((/* implicit */unsigned long long int) var_6);
                        var_24 = ((/* implicit */unsigned char) (~(794766142U)));
                        var_25 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 1725493142)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2156362390U)) ? (((/* implicit */int) (_Bool)1)) : (arr_10 [i_11] [8U] [i_5 + 2] [i_1]))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        var_27 = ((/* implicit */int) ((var_0) && (((/* implicit */_Bool) var_7))));
                        var_28 = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    var_29 = ((((/* implicit */int) var_7)) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)94))))));
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) arr_1 [i_9]))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 1) 
                    {
                        arr_41 [(unsigned short)9] [i_9] [i_0] [i_1] [i_13] [i_1] [13U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_0] [12ULL] [i_5] [i_0] [i_13] [i_13]))));
                        var_31 = ((/* implicit */unsigned int) 923554500065254794ULL);
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_32 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_28 [14U] [14U] [i_9] [i_9] [i_9]))));
                        var_33 = ((/* implicit */unsigned int) ((unsigned short) ((_Bool) var_3)));
                        arr_44 [3ULL] [i_1] [i_5] [i_0] [0ULL] = ((/* implicit */unsigned short) arr_22 [i_0] [i_0] [i_9] [i_14]);
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 1) 
                    {
                        arr_47 [4U] [i_0] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_15] [i_0] [(unsigned char)6] [i_5 + 1] [i_0] [i_5 + 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) 4194303U)) || (((/* implicit */_Bool) var_5))))) : (arr_20 [i_1] [0] [i_5] [i_5 + 1] [14] [i_1])));
                        var_34 = var_5;
                        var_35 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4194295U)) ? (((/* implicit */unsigned long long int) arr_46 [13] [i_1] [13] [i_1])) : (((unsigned long long int) arr_20 [(_Bool)1] [13ULL] [i_5] [5ULL] [5U] [9ULL]))));
                        var_36 = ((/* implicit */unsigned long long int) 4294967290U);
                    }
                }
                var_37 = ((/* implicit */unsigned long long int) arr_34 [i_5] [i_0] [(short)12] [i_0] [i_0]);
            }
            arr_48 [i_0] = ((/* implicit */unsigned short) min((arr_13 [i_0] [i_1]), (((/* implicit */unsigned long long int) 4294967295U))));
            /* LoopSeq 3 */
            for (unsigned short i_16 = 0; i_16 < 17; i_16 += 3) /* same iter space */
            {
                var_38 = ((/* implicit */unsigned long long int) (+((~(((((/* implicit */_Bool) (short)2)) ? (((/* implicit */int) arr_43 [i_0] [i_0])) : (((/* implicit */int) arr_52 [2] [i_1] [i_0] [i_0]))))))));
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 16; i_17 += 3) 
                {
                    for (unsigned long long int i_18 = 2; i_18 < 16; i_18 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned char)93)), (max((arr_56 [(_Bool)1] [(short)4] [i_16] [i_16] [(unsigned short)12] [i_16]), (((/* implicit */unsigned long long int) ((unsigned char) arr_28 [0ULL] [16ULL] [(unsigned char)14] [i_1] [i_0]))))))))));
                            arr_59 [i_18] [1U] [i_0] [i_16] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) var_2);
                            var_40 |= ((/* implicit */short) var_4);
                        }
                    } 
                } 
            }
            for (unsigned short i_19 = 0; i_19 < 17; i_19 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_20 = 0; i_20 < 17; i_20 += 1) 
                {
                    for (int i_21 = 0; i_21 < 17; i_21 += 1) 
                    {
                        {
                            var_41 = max(((~(18446744073709551612ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), (1031897606)))));
                            var_42 *= ((/* implicit */unsigned long long int) 556699626U);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_22 = 0; i_22 < 17; i_22 += 4) 
                {
                    for (unsigned long long int i_23 = 3; i_23 < 16; i_23 += 4) 
                    {
                        {
                            arr_74 [i_1] [i_22] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 15632168988665097233ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) var_3))))) + (arr_32 [i_22] [i_23 - 3] [i_22])));
                            var_43 ^= var_4;
                            var_44 = ((/* implicit */int) (short)-9462);
                            var_45 ^= ((/* implicit */unsigned char) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (var_5))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_0] [i_1] [i_1] [i_22] [i_22]))) & ((~(arr_28 [i_0] [i_1] [i_22] [i_22] [2ULL]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_24 = 1; i_24 < 16; i_24 += 1) 
                {
                    for (unsigned long long int i_25 = 0; i_25 < 17; i_25 += 1) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned int) ((min(((~(((/* implicit */int) (short)-1)))), (((/* implicit */int) var_9)))) + (((/* implicit */int) arr_4 [2ULL]))));
                            var_47 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) == (arr_77 [i_24 + 1] [i_24 + 1] [i_24 + 1] [(unsigned short)7] [i_25]))))));
                        }
                    } 
                } 
                arr_79 [i_19] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) 481176253)) >= (arr_72 [15ULL] [i_0] [i_19] [i_19] [i_0] [i_0]))))) | (((((/* implicit */_Bool) arr_39 [(unsigned short)13] [i_0] [i_0] [i_1] [i_0] [13ULL])) ? (((((/* implicit */_Bool) arr_28 [(unsigned char)4] [4] [i_0] [i_0] [i_0])) ? (var_4) : (arr_65 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [13ULL]))) : (1095146743618998603ULL))));
            }
            for (unsigned short i_26 = 0; i_26 < 17; i_26 += 3) /* same iter space */
            {
                var_48 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) arr_67 [i_0] [i_26] [i_26] [i_0] [i_0])))));
                arr_83 [i_0] [i_26] [i_26] = min((((/* implicit */unsigned long long int) arr_22 [i_1] [i_1] [9U] [i_1])), (6162652306460747135ULL));
            }
        }
        var_49 = ((/* implicit */unsigned long long int) max((var_49), (((((/* implicit */_Bool) ((short) var_8))) ? (((/* implicit */unsigned long long int) max((4294967292U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_5)))))))) : (max((((/* implicit */unsigned long long int) 4194303U)), (13895718560919024191ULL)))))));
        var_50 = ((/* implicit */unsigned char) (~(min((((((/* implicit */_Bool) 3521179479U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0]))) : (arr_26 [(unsigned char)13] [i_0] [i_0]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 1191993587)), (arr_63 [1ULL] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    for (unsigned long long int i_27 = 0; i_27 < 25; i_27 += 2) 
    {
        arr_86 [(unsigned char)23] = ((/* implicit */int) (-(max((arr_84 [i_27]), (((((/* implicit */_Bool) arr_85 [i_27] [6ULL])) ? (var_10) : (3970146808U)))))));
        var_51 = ((/* implicit */int) arr_84 [i_27]);
    }
    var_52 = ((/* implicit */_Bool) var_3);
    var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) var_0))));
}
