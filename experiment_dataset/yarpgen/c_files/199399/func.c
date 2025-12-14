/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199399
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
    var_16 = ((/* implicit */_Bool) ((unsigned char) var_3));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */_Bool) var_9);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) (!((_Bool)1))))));
                            var_18 = ((/* implicit */unsigned short) arr_2 [i_1] [i_2]);
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_3 [i_1] [i_0] [i_0]), (((/* implicit */short) arr_9 [i_0] [i_0] [i_0] [i_0])))))));
        }
        for (int i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            var_20 -= ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_5])) ? (var_15) : (184012768U))), (((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) var_8)) : (var_10)))))), (((((((/* implicit */_Bool) var_6)) ? (arr_13 [i_0] [i_5] [i_5]) : (((/* implicit */unsigned int) var_10)))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [5])) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_5] [i_5])))))))));
            /* LoopSeq 4 */
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5] [i_7]))) + (((((/* implicit */_Bool) arr_19 [i_0] [i_6] [6] [i_5] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (184012768U)))));
                    arr_21 [i_0] [i_0] [i_6] = ((/* implicit */unsigned char) ((184012768U) + (((/* implicit */unsigned int) arr_18 [i_0] [i_5] [i_6]))));
                }
                for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_27 [i_9] [i_5] [i_5] [i_0])) / (var_3)));
                        arr_28 [(_Bool)1] [i_5] [i_5] &= ((/* implicit */unsigned char) min((var_10), (arr_26 [i_0] [i_0] [i_5] [i_6] [i_8] [i_8])));
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5] [i_8])) ? (arr_7 [i_5] [i_8]) : (((/* implicit */unsigned long long int) var_15))))) ? (((arr_7 [i_6] [i_9]) | (arr_7 [i_8] [i_0]))) : (max((arr_7 [i_5] [i_9]), (arr_7 [i_6] [i_0])))));
                        var_24 *= ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) (+(1417097296)))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) max((-1417097322), (var_0)))) : (var_15))));
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_25 += ((/* implicit */unsigned char) ((unsigned short) arr_10 [i_6] [i_5] [i_6] [i_10]));
                        arr_32 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) ? (4294967287U) : (4110954539U)));
                        var_26 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_4)) >= ((-2147483647 - 1))))) >> ((((~(((/* implicit */int) var_12)))) + (24701)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */int) arr_17 [i_0] [i_0]);
                        var_28 = ((/* implicit */_Bool) var_3);
                        var_29 = ((((/* implicit */int) arr_22 [i_0] [i_5] [i_6] [i_8] [i_11])) >> (((((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_8] [i_11])) - (106))));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_11] [i_8] [i_6] [i_6] [i_5] [i_0])) ? (arr_30 [i_11] [4] [i_6] [i_5] [i_5] [i_0]) : (arr_30 [i_0] [i_0] [i_5] [i_6] [2] [i_11])));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 3) /* same iter space */
                    {
                        var_31 ^= ((/* implicit */unsigned long long int) ((5735939772511299824ULL) >= (((((/* implicit */_Bool) 2136082513)) ? (var_13) : (((/* implicit */unsigned long long int) 4294967266U))))));
                        arr_38 [i_0] [i_5] [i_5] [i_0] [(unsigned char)8] [i_8] &= ((/* implicit */unsigned char) ((unsigned int) arr_20 [i_6]));
                        arr_39 [i_0] [i_0] [i_5] [i_6] [i_6] [i_8] [i_12] = ((/* implicit */unsigned int) var_10);
                    }
                    var_32 *= ((/* implicit */_Bool) ((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_5] [i_5] [i_6] [i_6])))));
                    arr_40 [i_0] [i_0] [i_6] = ((/* implicit */unsigned short) 184012768U);
                }
                var_33 += ((unsigned long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_9))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    var_34 = ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) arr_3 [i_13] [i_5] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_6])));
                    /* LoopSeq 3 */
                    for (unsigned int i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        arr_45 [i_0] [(unsigned char)7] [i_13] [i_0] [i_6] [i_5] [i_0] = ((/* implicit */unsigned long long int) (+(var_0)));
                        arr_46 [i_0] [i_5] [i_6] [i_0] [i_14] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_0])) ? (-1417097297) : (((/* implicit */int) var_9))))) ^ (((((/* implicit */_Bool) 5184713333332440697ULL)) ? (((/* implicit */unsigned int) arr_18 [0U] [i_5] [i_6])) : (arr_43 [i_0] [i_0] [i_6] [i_13] [i_14])))));
                        var_35 = ((/* implicit */short) min((var_35), ((short)-1)));
                        arr_47 [2] [i_6] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_6] [i_6])) ? (((/* implicit */int) arr_16 [i_5] [i_5])) : (((/* implicit */int) arr_17 [i_5] [i_14]))));
                    }
                    for (unsigned long long int i_15 = 2; i_15 < 7; i_15 += 2) /* same iter space */
                    {
                        arr_50 [i_0] [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_14)))) ? (((arr_24 [i_0] [i_0] [i_6] [i_13] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0] [i_0] [9] [4] [i_15] [(short)4] [i_6])))));
                        var_36 = ((/* implicit */int) var_4);
                        arr_51 [i_0] [i_13] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)15);
                        arr_52 [(_Bool)1] [i_5] [i_6] [i_13] [i_0] = ((/* implicit */int) var_12);
                    }
                    for (unsigned long long int i_16 = 2; i_16 < 7; i_16 += 2) /* same iter space */
                    {
                        var_37 += var_3;
                        arr_55 [i_0] [i_0] [(unsigned char)1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0] [i_6] [i_5] [i_0])) + (((/* implicit */int) ((((/* implicit */_Bool) -924863427)) || (((/* implicit */_Bool) arr_9 [i_0] [i_6] [(unsigned char)1] [i_0])))))));
                    }
                    var_38 -= ((/* implicit */_Bool) ((unsigned short) var_11));
                }
                arr_56 [1U] [0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_11)) - (((/* implicit */int) arr_48 [i_0] [3] [i_0] [i_0] [i_5] [i_6] [i_6])))) - (((((arr_20 [i_0]) * (((/* implicit */int) var_9)))) * (((/* implicit */int) arr_29 [i_5] [i_0]))))));
                var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_0] [i_5] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_5] [i_0])) : (-1417097322)))) : (var_15)))) : (max((((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_13))), (((/* implicit */unsigned long long int) var_10))))));
            }
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
            {
                arr_59 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_17 - 1] [i_17 - 1]))) ? (((/* implicit */int) max((var_9), (arr_22 [i_5] [i_5] [i_17] [i_17] [i_17 - 1])))) : ((-(((/* implicit */int) arr_22 [i_0] [i_5] [i_17 - 1] [i_0] [i_17 - 1]))))));
                var_40 |= ((/* implicit */short) ((((/* implicit */int) arr_8 [i_0])) >= (-1200469516)));
            }
            /* vectorizable */
            for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) /* same iter space */
            {
                var_41 += ((/* implicit */unsigned int) arr_33 [i_18 - 1] [i_18] [i_18 - 1] [1ULL] [i_18]);
                arr_63 [i_0] [i_0] [(unsigned char)3] = ((/* implicit */unsigned char) arr_12 [i_18 - 1] [(unsigned char)5]);
            }
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_20 = 0; i_20 < 10; i_20 += 2) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 4) 
                    {
                        {
                            var_42 = 4046774646U;
                            arr_73 [i_0] [i_20] [6] [i_5] [i_19] [i_5] [i_21] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_11), (var_4))))) < (min((4110954522U), (((/* implicit */unsigned int) 1417097297))))));
                            arr_74 [i_21] [i_20] [i_20] [i_5] [i_0] &= ((/* implicit */int) arr_27 [i_19 - 1] [i_19] [i_19 - 1] [i_19]);
                            var_43 -= ((/* implicit */_Bool) arr_29 [9U] [i_5]);
                        }
                    } 
                } 
                var_44 |= ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) * (5184713333332440690ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_29 [i_19] [i_0])) : (arr_60 [i_5] [i_5]))) ^ (((/* implicit */int) var_12)))))));
                arr_75 [i_19] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_8)))) & (arr_62 [i_0] [i_0] [(unsigned char)7])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 1965033914))) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_5])) > (var_0)))) : (((/* implicit */int) (short)-29295)))))));
            }
        }
        for (unsigned int i_22 = 0; i_22 < 10; i_22 += 2) 
        {
            var_45 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_67 [i_0] [i_22] [i_22] [i_0])) && (((/* implicit */_Bool) arr_72 [i_0] [i_22] [i_0] [i_0] [i_0] [i_0])))) ? (max((arr_7 [i_0] [i_22]), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
            var_46 = ((/* implicit */unsigned int) arr_37 [i_0] [i_22] [i_0] [i_0] [i_22] [i_0] [i_22]);
        }
        var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) var_7))));
        var_48 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) var_11)), (var_14)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_65 [i_0] [i_0] [i_0] [i_0])) : (arr_61 [i_0]))) : (((/* implicit */unsigned long long int) max((var_14), (((/* implicit */int) var_8)))))));
    }
    for (unsigned char i_23 = 1; i_23 < 12; i_23 += 2) 
    {
        var_49 |= ((/* implicit */int) ((unsigned int) ((short) ((unsigned char) arr_80 [i_23]))));
        /* LoopSeq 1 */
        for (unsigned char i_24 = 0; i_24 < 14; i_24 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_25 = 0; i_25 < 14; i_25 += 4) 
            {
                for (unsigned long long int i_26 = 0; i_26 < 14; i_26 += 4) 
                {
                    {
                        arr_90 [i_24] [i_23] = ((/* implicit */_Bool) var_6);
                        arr_91 [i_23] [i_23] [i_25] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((var_13) >> (((1039011386U) - (1039011329U))))), (((/* implicit */unsigned long long int) arr_89 [i_26] [i_25] [i_23]))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)4015))) % (12710804301198251792ULL))))));
                        var_50 = ((/* implicit */int) ((((5735939772511299833ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && ((_Bool)1))))))) - (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-4004)) + (2147483647))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))) | (7743122909141796991ULL))) - (7743122909141796986ULL))))))));
                    }
                } 
            } 
            var_51 *= ((/* implicit */unsigned long long int) arr_83 [i_24] [i_24]);
            arr_92 [i_23] = ((/* implicit */int) var_5);
        }
        var_52 = ((/* implicit */short) ((((/* implicit */unsigned int) arr_79 [i_23] [i_23])) ^ (var_15)));
        var_53 = ((/* implicit */unsigned short) arr_85 [i_23] [i_23]);
        var_54 = ((/* implicit */_Bool) max((arr_79 [i_23 - 1] [i_23]), (((((/* implicit */_Bool) arr_79 [i_23 + 1] [i_23])) ? (arr_79 [i_23 + 1] [i_23]) : (arr_86 [i_23 + 1] [10] [i_23] [i_23])))));
    }
}
