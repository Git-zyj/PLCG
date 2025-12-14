/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20861
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_0 [i_0])))))));
        var_15 += ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_16 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_3 [(short)2]) : (arr_3 [(short)16])))) ? (min((arr_3 [(short)18]), (((/* implicit */unsigned int) (short)29063)))) : (((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (arr_3 [(unsigned short)4]) : (17U)))));
        var_17 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? ((~(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [(_Bool)1])) > (var_1)))))))) & ((+(17994008792945387368ULL)))));
        arr_5 [i_1] = ((/* implicit */short) (-(0U)));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3] [i_2] [i_3])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)112)) >= (((/* implicit */int) var_4))))) : (((/* implicit */int) arr_6 [i_2]))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    arr_19 [i_4] = ((/* implicit */_Bool) (~((-(40U)))));
                    arr_20 [i_2] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_17 [i_2]))));
                    var_19 = ((/* implicit */int) (+(var_11)));
                }
                for (unsigned char i_6 = 1; i_6 < 17; i_6 += 3) 
                {
                    arr_23 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)28862))))) % (2182809610U)));
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        arr_27 [i_2] [i_7] [i_4] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) + (((/* implicit */int) arr_26 [i_6 - 1] [i_6 - 1]))));
                        var_20 = ((/* implicit */signed char) ((13923661933183072171ULL) >> (((/* implicit */int) arr_10 [i_6] [i_6] [i_2]))));
                        arr_28 [(signed char)16] [(signed char)16] [i_4] [(short)2] [(unsigned short)6] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_6] [i_6 - 1] [i_6])) ? (arr_16 [i_7] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_7]) : (arr_16 [i_6] [i_3] [i_4] [i_6 + 1] [i_7])));
                    }
                    arr_29 [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (unsigned short)19342))) ? (((/* implicit */int) var_10)) : (arr_16 [(unsigned char)11] [i_6 + 1] [i_6] [i_6 - 1] [i_6 + 1])));
                }
                var_21 = ((/* implicit */unsigned short) ((((_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) arr_8 [(unsigned short)2] [i_3])) ? (((/* implicit */unsigned long long int) 4294967279U)) : (17994008792945387368ULL)))));
            }
            for (signed char i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
            {
                var_22 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_8] [i_3])) ? (((((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_31 [i_2] [i_2] [i_3] [i_8])))) : (max((arr_15 [(unsigned char)3] [i_2] [(unsigned char)3]), (((/* implicit */unsigned long long int) arr_17 [i_2])))))) : ((-(((unsigned long long int) arr_0 [i_2]))))));
                /* LoopSeq 2 */
                for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) /* same iter space */
                {
                    var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((4294967251U), (max((40U), (((/* implicit */unsigned int) var_10))))))) || (((/* implicit */_Bool) max((arr_15 [i_2] [i_3] [8U]), (((/* implicit */unsigned long long int) var_10)))))));
                    var_25 = ((/* implicit */unsigned int) arr_15 [i_3] [i_3] [i_8]);
                }
                /* vectorizable */
                for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
                {
                    var_26 += ((/* implicit */unsigned int) ((short) ((((/* implicit */int) var_10)) + (((/* implicit */int) (short)-16253)))));
                    arr_39 [i_2] [i_3] [i_8] [i_8] [(unsigned short)10] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_2] [i_3])) == (((/* implicit */int) (unsigned short)52526))));
                }
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        {
                            var_27 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_6 [i_2]))))) > (((((/* implicit */_Bool) 4294967256U)) ? ((~(arr_8 [i_11] [i_12]))) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_8] [i_11] [i_8] [i_3] [(short)6] [i_2])))))));
                            arr_44 [i_12] [i_11] [i_11] [6ULL] = ((/* implicit */unsigned long long int) arr_1 [i_8]);
                        }
                    } 
                } 
            }
            arr_45 [i_3] [i_3] [i_2] = ((/* implicit */short) arr_31 [i_2] [i_3] [i_3] [i_3]);
            arr_46 [i_2] = ((/* implicit */unsigned int) ((long long int) 17U));
            /* LoopNest 2 */
            for (unsigned int i_13 = 2; i_13 < 17; i_13 += 1) 
            {
                for (int i_14 = 1; i_14 < 16; i_14 += 3) 
                {
                    {
                        var_28 -= max((arr_47 [i_3] [i_13] [i_14 + 2]), (min((((/* implicit */unsigned int) (unsigned char)93)), (0U))));
                        var_29 = ((/* implicit */short) arr_50 [i_3] [(signed char)9]);
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (short i_15 = 0; i_15 < 18; i_15 += 1) 
        {
            for (unsigned int i_16 = 1; i_16 < 15; i_16 += 3) 
            {
                for (unsigned int i_17 = 0; i_17 < 18; i_17 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_18 = 2; i_18 < 17; i_18 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_35 [i_16 + 1] [i_18 + 1]))));
                            var_31 = ((/* implicit */int) (+(55U)));
                            var_32 = ((/* implicit */signed char) arr_48 [i_2] [i_15] [i_16]);
                            arr_62 [i_15] [i_15] = ((/* implicit */long long int) arr_24 [i_18] [i_18] [i_18] [i_18] [i_18]);
                        }
                        for (unsigned long long int i_19 = 1; i_19 < 17; i_19 += 1) 
                        {
                            var_33 -= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((((short) 452735280764164248ULL)), (((/* implicit */short) ((_Bool) var_3)))))) : (((((/* implicit */_Bool) 3698622672U)) ? (((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_58 [i_15] [i_17] [i_16] [i_17] [i_17])) : (((/* implicit */int) var_12))))))));
                            arr_65 [17] [i_19] [i_16 + 2] [i_2] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_37 [i_15] [i_15] [i_2])) ? (-402687147) : (((/* implicit */int) arr_42 [i_15] [i_15] [i_16])))))) ? (((((/* implicit */_Bool) arr_52 [i_2] [(unsigned short)13] [i_16])) ? (((/* implicit */int) arr_51 [i_17])) : (((/* implicit */int) arr_10 [(unsigned short)11] [i_15] [(unsigned short)11])))) : ((+(((((/* implicit */_Bool) var_6)) ? (2147483647) : (((/* implicit */int) arr_26 [i_2] [i_2]))))))));
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_57 [(short)16] [(short)16] [i_16 + 1])), (4294967277U)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_14 [i_17]))));
                        }
                        /* vectorizable */
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)4)))) <= (((/* implicit */int) arr_49 [i_2] [i_15] [(short)14] [i_16 + 3]))));
                            var_36 += ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_67 [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [(unsigned char)0] [i_15] [i_15] [(_Bool)1] [i_17] [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (var_2)));
                            arr_69 [i_20] [i_15] [i_16] [i_15] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_59 [i_2] [i_16 - 1] [i_16 + 2] [i_16 + 3] [i_16 - 1]))));
                            var_38 = ((/* implicit */_Bool) arr_61 [i_15] [i_17] [i_16 + 1] [0ULL] [i_2] [i_15]);
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_21 = 3; i_21 < 15; i_21 += 3) 
                        {
                            var_39 |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_61 [(short)0] [0ULL] [i_16 - 1] [i_16] [i_21 + 1] [i_15])) ? (arr_63 [i_2] [i_15] [i_21] [i_17] [i_21]) : (arr_55 [12] [i_17] [12]))))) ? (((/* implicit */unsigned long long int) arr_57 [i_21] [i_15] [i_2])) : (9385774966096927370ULL)));
                            var_40 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_61 [i_15] [i_15] [i_15] [i_15] [i_17] [(_Bool)0])) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((arr_57 [i_2] [i_16] [i_16]) | (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_51 [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_2] [i_15] [15U] [i_17] [i_2] [i_21]))) : (arr_33 [i_16 + 3] [i_17])))))));
                        }
                        for (unsigned short i_22 = 0; i_22 < 18; i_22 += 4) 
                        {
                            arr_74 [i_15] [i_17] [i_22] [i_15] [i_22] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)8))) | (arr_34 [i_2] [i_2] [(short)1] [i_2] [i_17] [(short)1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16376))) : ((-(arr_41 [i_16]))))), (((/* implicit */unsigned long long int) 0U))));
                            var_41 -= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_10 [i_16 + 2] [i_16 + 1] [i_16 + 1])) ? (arr_8 [i_16] [i_16 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)100)))))));
                        }
                    }
                } 
            } 
        } 
        arr_75 [i_2] = ((((((/* implicit */int) arr_48 [i_2] [i_2] [i_2])) * (((/* implicit */int) arr_48 [i_2] [i_2] [i_2])))) >> (((var_11) - (11951515145624207594ULL))));
    }
    var_42 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) max((var_8), (var_10)))) : (((/* implicit */int) (short)16376)))), (((/* implicit */int) var_6))));
    var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((var_7), (((/* implicit */unsigned long long int) (signed char)15)))), (((/* implicit */unsigned long long int) var_9))))) ? ((~(((/* implicit */int) ((_Bool) 3843751100U))))) : (((/* implicit */int) var_6))));
}
