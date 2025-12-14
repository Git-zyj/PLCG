/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218611
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
    var_15 = ((((/* implicit */_Bool) (+(max((-4801862195849716982LL), (((/* implicit */long long int) -1758919392))))))) ? (7435574061631648412LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)79))))) ? (((/* implicit */int) var_11)) : (((int) 1493836233))))));
    var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12288))) ^ (1896351527U)));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_17 = ((_Bool) (+(min((arr_0 [i_0 + 1] [i_0 + 1]), (var_8)))));
        var_18 |= ((/* implicit */_Bool) min((((/* implicit */long long int) max((arr_0 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned int) var_14))))), (min((((/* implicit */long long int) arr_0 [i_0 - 1] [i_0 - 1])), (4801862195849716982LL)))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32758)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(short)7] [18] [(short)18]))))) : (min((arr_3 [i_0 + 2]), (((/* implicit */int) (unsigned short)65517)))))))));
            var_20 = ((((/* implicit */_Bool) 1493836233)) ? (-6335631289108005587LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)79))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                arr_7 [i_0] [i_0] [i_2] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_0])) ? (((/* implicit */unsigned long long int) 9223372036854775801LL)) : (var_1)))));
                var_21 |= ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) 1610612736)))));
            }
            for (unsigned char i_3 = 2; i_3 < 23; i_3 += 1) 
            {
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((unsigned long long int) ((int) (~(var_6))))))));
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    var_23 = ((/* implicit */unsigned short) arr_1 [(unsigned char)24] [(unsigned char)9]);
                    arr_13 [8U] |= ((/* implicit */int) (-(max(((-(var_12))), (((/* implicit */long long int) 622322776))))));
                    var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22582)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_8)))) ? (((/* implicit */long long int) arr_4 [i_0 + 2] [i_1 + 1] [i_3 - 1])) : (((long long int) 600088547U))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)))), (((((/* implicit */_Bool) 14769074908168713914ULL)) ? (arr_5 [i_0] [i_1 + 1] [i_0 - 1] [6]) : (((/* implicit */long long int) arr_3 [i_0 - 1])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)73)) ? (-4801862195849716971LL) : (((/* implicit */long long int) -1869333694))))) ? (((/* implicit */long long int) var_7)) : (min((arr_8 [i_0] [i_0 - 1]), (arr_1 [i_0 - 1] [i_4])))))));
                }
                for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_6 = 1; i_6 < 23; i_6 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)32767)), (((((/* implicit */_Bool) arr_17 [i_6 + 2] [i_6] [i_6 + 1] [i_6 + 2] [(signed char)22])) ? (((/* implicit */int) arr_10 [22U] [16] [8U] [i_6 + 2] [i_6 + 2] [i_6 + 2])) : (((/* implicit */int) arr_17 [i_6 - 1] [i_6 - 1] [i_6 + 2] [i_6 + 2] [(short)0])))))))));
                        arr_19 [18LL] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? (arr_1 [i_1 + 1] [i_0 - 1]) : (((/* implicit */long long int) arr_2 [i_1 + 1] [i_0 - 1] [i_5 + 2])))) >> (((((((/* implicit */_Bool) max((13214090573414500626ULL), (((/* implicit */unsigned long long int) (signed char)-1))))) ? (8444249301319680LL) : (((/* implicit */long long int) (+(arr_4 [i_0 + 2] [i_0 + 2] [i_0 + 1])))))) - (8444249301319628LL)))));
                        arr_20 [i_0] = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (3396704559145578413ULL)))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_26 ^= ((/* implicit */unsigned char) var_11);
                        arr_25 [22ULL] [22ULL] [i_3] [i_5 + 1] [i_7] |= ((/* implicit */_Bool) 4294967266U);
                        arr_26 [20LL] [i_1 + 1] [24U] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [24LL] [i_5] [i_1 + 1] [24LL])) ? (((/* implicit */int) arr_21 [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_3 + 1] [(_Bool)1])) : (((/* implicit */int) ((unsigned short) var_10)))))) : (((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [22U]))) : (((unsigned int) arr_16 [i_5] [i_3] [i_0]))))));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (_Bool)1))));
                    }
                    arr_27 [i_0] = ((/* implicit */unsigned short) -4801862195849716999LL);
                }
                for (unsigned int i_8 = 2; i_8 < 22; i_8 += 3) 
                {
                    var_28 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [(unsigned char)23] [i_0 - 1])) ? (((/* implicit */unsigned long long int) 2147483634)) : (var_1))) : (((/* implicit */unsigned long long int) max((-656088089), (((/* implicit */int) (signed char)127)))))))));
                    var_29 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_1 + 1] [18LL] [i_1 + 1] [i_8 - 2] [0U])) ? (((/* implicit */int) arr_23 [i_1 + 1] [2ULL] [(unsigned short)12] [i_8 - 1] [(short)24])) : (((/* implicit */int) arr_23 [i_1 + 1] [i_3 + 1] [i_3] [i_8 - 1] [(_Bool)1]))))) ? (min((((/* implicit */int) arr_23 [i_0 + 2] [i_1 + 1] [i_3 + 1] [i_8 - 1] [(short)22])), ((~(2147483634))))) : (var_7)));
                }
            }
            for (short i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                arr_33 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)179))));
                /* LoopSeq 2 */
                for (int i_10 = 2; i_10 < 23; i_10 += 1) 
                {
                    var_30 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_14)) ? (arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1]) : (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                    arr_37 [i_0] [i_1 + 1] [(unsigned char)22] |= ((((/* implicit */_Bool) 15947191234736748896ULL)) ? (((((/* implicit */_Bool) max((arr_18 [i_9] [5U] [(unsigned char)6] [i_9] [i_9] [i_9] [i_9]), (((/* implicit */unsigned short) var_2))))) ? (((/* implicit */long long int) ((var_9) ? (((/* implicit */int) arr_23 [(_Bool)1] [i_10 - 2] [i_9] [i_1 + 1] [(_Bool)1])) : (((/* implicit */int) arr_36 [i_0] [i_1 + 1] [(_Bool)1] [i_10 + 1]))))) : ((((_Bool)1) ? (-7435574061631648412LL) : (((/* implicit */long long int) arr_15 [14ULL])))))) : (((/* implicit */long long int) ((/* implicit */int) var_14))));
                    var_31 = arr_2 [i_1 + 1] [i_9] [i_10];
                }
                for (unsigned short i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    arr_40 [i_0 + 2] [i_1 + 1] [i_0] [i_11] = ((/* implicit */signed char) 10509669392208146512ULL);
                    var_32 -= ((/* implicit */int) (+(-7435574061631648425LL)));
                    var_33 += ((/* implicit */long long int) arr_18 [8] [i_1 + 1] [i_0] [(_Bool)0] [i_11] [i_1] [i_9]);
                    arr_41 [i_0] [i_0] [i_9] [i_11] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) >= (0ULL))))));
                    var_34 = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
                }
                var_35 |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -7435574061631648409LL)) ? (((/* implicit */int) arr_9 [i_1 + 1] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_38 [i_9] [22]))))));
            }
            /* vectorizable */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_46 [i_0 + 1] [i_0] [i_0] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? ((~(((/* implicit */int) (unsigned char)9)))) : (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (long long int i_13 = 1; i_13 < 23; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 4; i_14 < 23; i_14 += 4) 
                    {
                        {
                            arr_54 [i_13] [i_13] [i_0] [i_0] [i_1 + 1] [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) (short)20079)))) ? (((arr_43 [i_1] [17U] [22] [i_14]) / (((/* implicit */long long int) 2147483634)))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                            var_36 = ((/* implicit */unsigned char) ((_Bool) (unsigned char)255));
                            arr_55 [i_0 + 1] [i_0 + 1] [4U] [i_0] = ((/* implicit */short) arr_29 [2ULL] [i_1 + 1] [i_12] [i_0] [i_1 + 1]);
                            arr_56 [i_0] [i_12] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_1 + 1] [i_13 - 1] [i_13 - 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0 + 2] [i_1 + 1] [i_13 - 1] [i_13 + 1] [i_0]))) : (var_1)));
                        }
                    } 
                } 
                var_37 = ((/* implicit */short) (!((_Bool)1)));
            }
            /* LoopSeq 1 */
            for (short i_15 = 1; i_15 < 21; i_15 += 3) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_16 = 3; i_16 < 23; i_16 += 4) 
                {
                    var_38 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_38 [i_15 + 2] [i_0])) : (((/* implicit */int) arr_38 [i_15 + 3] [i_0]))));
                    arr_62 [i_0] [i_1 + 1] [i_15 + 4] [i_15 + 4] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) 4294967295U))));
                    arr_63 [i_16 + 1] [(signed char)24] [(unsigned char)4] |= ((/* implicit */int) (+(arr_44 [(_Bool)1] [i_1 + 1] [i_1 + 1] [i_16 - 2])));
                }
                for (unsigned short i_17 = 0; i_17 < 25; i_17 += 1) 
                {
                    arr_66 [i_0] [i_1 + 1] [i_15 + 4] [i_17] = ((/* implicit */short) var_10);
                    var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_1) % (((/* implicit */unsigned long long int) max((arr_16 [2ULL] [15U] [(short)24]), (var_8))))))) ? (((/* implicit */int) ((short) arr_50 [i_1 + 1] [i_15 + 3] [i_1 + 1]))) : ((+(((/* implicit */int) arr_18 [i_15 + 3] [i_15 + 3] [i_15 + 3] [i_17] [i_15] [i_0 - 1] [i_1 + 1])))))))));
                    /* LoopSeq 1 */
                    for (int i_18 = 0; i_18 < 25; i_18 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) var_4))));
                        var_41 = ((/* implicit */unsigned int) min((((/* implicit */int) (short)-8631)), (max((((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) (short)11614)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (unsigned short)31892)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) arr_53 [(unsigned char)4] [i_0] [i_0] [i_0 + 2]))))))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_19 = 0; i_19 < 25; i_19 += 1) 
                {
                    arr_71 [18ULL] [i_0] [i_15] [i_19] = ((/* implicit */long long int) (unsigned short)0);
                    arr_72 [i_0] [i_15 + 1] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) arr_24 [i_15 + 4] [i_1 + 1]);
                    var_42 = ((/* implicit */unsigned char) max((var_42), (arr_67 [16] [i_1 + 1] [16] [i_15 + 3] [i_19] [(signed char)5])));
                    /* LoopSeq 1 */
                    for (long long int i_20 = 1; i_20 < 22; i_20 += 1) 
                    {
                        arr_77 [i_0] [i_0] [i_0] [i_19] [i_0] = ((/* implicit */unsigned int) (unsigned char)17);
                        var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (-(((/* implicit */int) arr_24 [i_1 + 1] [i_0 - 1])))))));
                    }
                }
                var_44 = ((/* implicit */unsigned char) (+(131071)));
                var_45 = ((/* implicit */long long int) arr_17 [i_0 + 1] [i_1 + 1] [(_Bool)1] [i_1] [i_0]);
            }
        }
    }
}
