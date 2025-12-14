/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238391
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)25)) + (-1))) - (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)16384))))));
                    var_20 = ((/* implicit */_Bool) min((((arr_3 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_14))), (((/* implicit */long long int) arr_3 [(_Bool)1]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 8; i_4 += 4) 
                        {
                            {
                                arr_15 [i_3] [(short)7] [i_2] [i_2] [i_2] [i_2] [(signed char)5] = ((/* implicit */unsigned int) var_6);
                                arr_16 [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [(_Bool)1] [i_0] [i_4] [i_0])) : (((/* implicit */int) var_12)))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)16384)) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((signed char) var_0)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_17 [i_0] = min((max((min((268435455U), (((/* implicit */unsigned int) arr_2 [i_0])))), (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [10U])))), (((/* implicit */unsigned int) min(((~(arr_10 [6LL] [(short)2] [(short)9] [i_0]))), (((/* implicit */int) ((short) arr_7 [i_0] [i_0] [i_0] [i_0])))))));
        arr_18 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_13 [(unsigned short)9] [i_0] [i_0] [i_0] [(_Bool)1]);
    }
    for (long long int i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
    {
        var_21 *= (((~(((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [(_Bool)1] [(short)1] [i_5])))) & (((/* implicit */int) min((arr_11 [i_5] [10U] [i_5] [i_5] [i_5] [10U]), (arr_11 [i_5] [i_5] [(unsigned short)8] [i_5] [5] [7])))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_5 [i_5] [4] [1U] [i_5])), (8150852466518175981ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16385)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5] [i_5])) ? (((int) 65535LL)) : (((/* implicit */int) (short)28536))))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_7 = 2; i_7 < 8; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (short i_8 = 1; i_8 < 10; i_8 += 1) 
            {
                for (signed char i_9 = 2; i_9 < 7; i_9 += 1) 
                {
                    {
                        var_23 = ((signed char) arr_32 [i_6] [i_7 + 1] [i_6] [i_9 + 1]);
                        var_24 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8458237351960652283LL))));
                        arr_36 [i_6] [i_7] = ((/* implicit */unsigned int) arr_35 [10U] [i_7 + 3] [4]);
                        arr_37 [i_6] [5U] [i_6] [i_6] = ((/* implicit */unsigned short) ((short) arr_3 [i_7 - 2]));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned char) arr_8 [i_7 - 1] [i_6] [i_6] [i_6]);
        }
        /* LoopSeq 3 */
        for (short i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            arr_42 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_6] [0U] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_12 [i_6] [1] [i_6] [i_6] [i_6] [1])) : (((/* implicit */int) arr_12 [i_6] [i_6] [i_6] [(unsigned short)8] [(unsigned short)4] [i_10]))));
            var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_29 [i_6] [i_10] [3ULL] [i_10]))));
            var_27 -= ((/* implicit */unsigned short) arr_9 [i_6] [7U] [(signed char)0] [10U] [(_Bool)1]);
        }
        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned short i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                var_28 |= ((/* implicit */short) (-(arr_9 [i_12] [i_11] [i_11] [i_11] [i_6])));
                arr_48 [0] [i_6] [i_6] [(unsigned short)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16397)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)511))) : (2200031662U)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))));
            }
            for (short i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                arr_51 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_6] [i_6] [i_6])) ? (-8458237351960652284LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))));
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_6] [i_6] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6] [i_6] [i_13] [i_13] [7U] [i_6]))) : (arr_30 [i_6] [i_13] [i_13] [i_6])));
            }
            for (signed char i_14 = 0; i_14 < 11; i_14 += 3) 
            {
                arr_54 [i_6] [i_6] [i_6] [(unsigned short)4] = ((/* implicit */short) (-(((/* implicit */int) (signed char)127))));
                arr_55 [1ULL] [i_6] = ((/* implicit */unsigned short) ((long long int) 0));
            }
            for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 11; i_16 += 2) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_30 = (-(((-1LL) * (((/* implicit */long long int) 521716284)))));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */int) (short)32761)) / (arr_32 [i_6] [i_6] [i_6] [9])));
                            var_32 -= ((/* implicit */int) ((_Bool) arr_27 [i_16]));
                            arr_63 [i_17] [i_17] [(unsigned short)1] [i_6] [i_6] [i_11] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [(unsigned short)5])) ? (((/* implicit */int) arr_19 [i_6])) : (((/* implicit */int) arr_19 [i_6]))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned short) ((((unsigned long long int) (unsigned short)65511)) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112)))));
            }
            /* LoopSeq 2 */
            for (unsigned short i_18 = 2; i_18 < 10; i_18 += 3) 
            {
                var_34 |= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_30 [i_18 + 1] [10] [i_11] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (0LL))));
                arr_66 [i_6] [i_11] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_33 [(short)8] [i_11] [i_6] [i_6] [i_6]))) >= (-1LL)));
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_6])) / (((/* implicit */int) arr_1 [i_11])))))));
                var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) arr_21 [i_6]))));
                /* LoopSeq 2 */
                for (unsigned short i_20 = 1; i_20 < 10; i_20 += 1) 
                {
                    var_37 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_70 [i_20 + 1] [i_20 - 1] [i_20 + 1])) ? (((/* implicit */int) arr_69 [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_20 - 1])) : ((-(((/* implicit */int) arr_71 [i_6] [i_11] [i_11] [(unsigned char)8] [i_6] [2U]))))));
                    arr_74 [(signed char)8] [i_11] [i_19] [i_6] [(signed char)2] = ((/* implicit */unsigned int) arr_41 [i_6]);
                }
                for (signed char i_21 = 0; i_21 < 11; i_21 += 3) 
                {
                    arr_77 [i_6] [i_6] [i_19] [i_21] = ((((unsigned long long int) arr_47 [i_11] [i_19] [(short)8])) < (((/* implicit */unsigned long long int) (+(29LL)))));
                    var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10689220424656504117ULL)) ? (2200031662U) : (((/* implicit */unsigned int) 16777215))));
                    arr_78 [9U] [i_11] [i_6] = ((/* implicit */long long int) (~((~(arr_73 [i_6] [i_11] [i_19])))));
                    arr_79 [i_6] [i_6] [i_6] = ((/* implicit */signed char) arr_32 [i_21] [i_6] [i_6] [i_6]);
                    /* LoopSeq 2 */
                    for (long long int i_22 = 0; i_22 < 11; i_22 += 3) 
                    {
                        var_39 = ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_6]))) / (var_14));
                        var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) (-(arr_52 [10]))))));
                        var_41 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_6] [i_19] [i_21] [(_Bool)1]))));
                        arr_82 [i_6] [i_6] = ((/* implicit */int) arr_28 [i_6] [i_6] [i_22]);
                        var_42 = (~(arr_52 [0]));
                    }
                    for (signed char i_23 = 0; i_23 < 11; i_23 += 2) 
                    {
                        var_43 -= ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
                        var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) var_17))));
                        arr_87 [i_6] [i_21] [i_19] [2U] [i_6] = ((/* implicit */unsigned int) (((-(1829165642U))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_11] [i_19] [i_11] [i_6])))));
                        arr_88 [i_6] [i_6] [i_6] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(0LL)))) ? (((/* implicit */unsigned int) (~(var_17)))) : (((((/* implicit */_Bool) (unsigned short)17530)) ? (2213520585U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54)))))));
                    }
                }
                var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [(signed char)10])) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) var_3))));
            }
        }
        for (unsigned long long int i_24 = 0; i_24 < 11; i_24 += 1) /* same iter space */
        {
            arr_91 [i_24] [i_6] [i_6] = ((/* implicit */int) (~(var_8)));
            arr_92 [i_6] = ((/* implicit */unsigned short) arr_83 [i_6] [i_24] [i_24] [i_6] [(_Bool)1]);
            arr_93 [i_6] [(signed char)1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_50 [i_6] [i_24] [i_24] [i_24]))));
            /* LoopNest 2 */
            for (long long int i_25 = 0; i_25 < 11; i_25 += 3) 
            {
                for (long long int i_26 = 0; i_26 < 11; i_26 += 4) 
                {
                    {
                        var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) arr_21 [i_25]))));
                        /* LoopSeq 1 */
                        for (long long int i_27 = 2; i_27 < 10; i_27 += 3) 
                        {
                            arr_103 [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((/* implicit */int) arr_11 [i_6] [i_24] [i_25] [i_24] [i_24] [i_26])) : (((/* implicit */int) arr_21 [i_6])));
                            arr_104 [i_6] [i_6] [i_25] [5LL] = ((/* implicit */unsigned int) 255);
                        }
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_28 = 0; i_28 < 11; i_28 += 1) 
            {
                arr_107 [i_6] [i_24] [i_24] = ((/* implicit */unsigned int) (signed char)99);
                var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) (short)32767))));
                var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [(_Bool)1] [i_24] [i_28] [3LL] [i_6])) ? (((/* implicit */int) arr_33 [i_6] [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_33 [i_6] [(unsigned short)9] [i_6] [7ULL] [i_6]))));
            }
            for (long long int i_29 = 1; i_29 < 8; i_29 += 2) 
            {
                var_49 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_6])) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((int) 2147483645)))));
                /* LoopSeq 3 */
                for (int i_30 = 0; i_30 < 11; i_30 += 2) 
                {
                    var_50 = ((/* implicit */unsigned char) (-(18446744073709551611ULL)));
                    var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (303471445730689799LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_112 [i_6] [(unsigned short)4] [i_6] = ((/* implicit */long long int) (unsigned char)46);
                    var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) (unsigned short)0))));
                }
                for (int i_31 = 0; i_31 < 11; i_31 += 4) /* same iter space */
                {
                    var_53 = ((/* implicit */_Bool) var_8);
                    var_54 *= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 5125443075930121118ULL)) ? (arr_13 [6LL] [i_29 + 3] [6LL] [i_29 + 3] [(signed char)4]) : (((/* implicit */int) (short)32767)))));
                    arr_115 [i_6] [i_24] = ((/* implicit */_Bool) ((int) arr_10 [1ULL] [i_24] [i_29 - 1] [i_29 + 1]));
                    arr_116 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((254) != (((/* implicit */int) (short)32767))));
                    var_55 = ((/* implicit */signed char) min((var_55), (((signed char) (~(((/* implicit */int) arr_58 [i_6] [i_24])))))));
                }
                for (int i_32 = 0; i_32 < 11; i_32 += 4) /* same iter space */
                {
                    arr_120 [(_Bool)1] [(unsigned short)7] [i_6] = (-(arr_76 [i_29 - 1] [i_29 - 1] [i_29 + 2] [i_29 + 2]));
                    var_56 = ((/* implicit */unsigned int) ((arr_114 [i_6] [i_29 - 1] [i_6]) != (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)73))) : (268435455LL)))));
                    arr_121 [i_6] = ((/* implicit */_Bool) var_13);
                }
            }
        }
    }
    var_57 = var_11;
    var_58 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned short) (-(((/* implicit */int) (unsigned short)3248)))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (-275) : (((/* implicit */int) var_0))))), (var_8)))));
    var_59 = ((/* implicit */long long int) var_1);
}
