/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41130
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
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_12)), (max((var_15), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (var_13))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) ((arr_0 [i_0]) ? ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_4))))) : (((/* implicit */unsigned long long int) min((-3332154), (3332162))))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 + 1])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 1; i_2 < 8; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_15 [i_2] [i_4] [i_3] [i_2] [i_1]))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_9))));
                            arr_17 [(unsigned short)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)7))))) ? (((((/* implicit */int) arr_9 [i_3] [i_3] [i_3] [i_4 - 1])) + (((/* implicit */int) arr_9 [1] [i_4] [i_4] [i_4 - 1])))) : (((/* implicit */int) max((((/* implicit */unsigned short) ((short) (unsigned short)63233))), (arr_4 [i_1]))))));
                            arr_18 [i_1] [i_1] [(_Bool)1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)65064)))), (min((((/* implicit */unsigned long long int) (short)256)), (8331476333725076428ULL))))), (((/* implicit */unsigned long long int) min(((unsigned char)255), (((/* implicit */unsigned char) arr_15 [i_4 - 1] [i_1] [i_1] [(unsigned short)9] [i_1])))))));
                        }
                    } 
                } 
                arr_19 [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */int) (_Bool)0))))), (max((var_4), (((/* implicit */unsigned long long int) arr_4 [i_2])))))) : (((unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) var_5)))))));
            }
            arr_20 [5] = max((max((((((/* implicit */int) var_14)) * (((/* implicit */int) var_1)))), (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (unsigned char)0)));
            arr_21 [i_2] = ((/* implicit */unsigned char) min((max((((/* implicit */int) min(((unsigned short)22961), ((unsigned short)0)))), ((+(((/* implicit */int) var_11)))))), (((/* implicit */int) (unsigned short)50937))));
            var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned int) max(((unsigned short)64792), (((/* implicit */unsigned short) var_9))))), (max((max((var_13), (((/* implicit */unsigned int) arr_10 [i_1])))), (((/* implicit */unsigned int) min(((unsigned short)34808), (var_7))))))));
            arr_22 [i_1] &= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) (unsigned short)23183))))))))));
        }
        for (unsigned char i_6 = 2; i_6 < 8; i_6 += 2) 
        {
            var_22 -= ((/* implicit */signed char) var_4);
            var_23 *= var_6;
        }
        for (unsigned long long int i_7 = 3; i_7 < 6; i_7 += 4) 
        {
            /* LoopSeq 3 */
            for (int i_8 = 1; i_8 < 8; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_38 [i_1] [i_1] [i_1] [4U] [i_8] [(unsigned short)6] = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) min((2289945995052418667LL), (((/* implicit */long long int) arr_14 [i_1] [i_8 + 1] [i_1]))))) : (max((var_0), (((/* implicit */unsigned long long int) var_10)))));
                            var_24 ^= ((/* implicit */unsigned short) min((min((((/* implicit */long long int) (unsigned char)76)), (1311566967008228969LL))), (((/* implicit */long long int) var_8))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    var_25 = ((/* implicit */_Bool) min(((unsigned short)65530), (((/* implicit */unsigned short) ((_Bool) arr_3 [i_7 + 2])))));
                    var_26 = ((/* implicit */unsigned long long int) max((min((max((arr_14 [(_Bool)1] [i_7] [i_7]), (((/* implicit */unsigned int) (unsigned char)173)))), (((/* implicit */unsigned int) (unsigned short)20435)))), (((/* implicit */unsigned int) min(((unsigned short)4032), (((/* implicit */unsigned short) var_12)))))));
                }
                var_27 = ((/* implicit */unsigned short) min((3332165), ((-(((((/* implicit */int) arr_25 [i_8] [(_Bool)1] [i_1])) & (((/* implicit */int) arr_10 [i_8]))))))));
            }
            /* vectorizable */
            for (unsigned char i_12 = 4; i_12 < 7; i_12 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((short) (signed char)124)))));
                var_29 += ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
                arr_44 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_13)));
                arr_45 [i_12 + 1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [(_Bool)1] [i_7 + 2] [i_12 - 3] [(signed char)0] [(unsigned short)6]))) : (var_4)));
            }
            for (unsigned char i_13 = 4; i_13 < 7; i_13 += 1) /* same iter space */
            {
                arr_49 [(unsigned short)3] [i_7] [i_13] = ((/* implicit */unsigned long long int) ((_Bool) var_7));
                arr_50 [i_13] [i_7] [i_1] [i_1] = arr_40 [(signed char)1] [i_7 - 3] [(signed char)7] [(unsigned char)3] [i_13] [(signed char)7];
                var_30 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_11))));
                /* LoopSeq 2 */
                for (unsigned short i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    arr_54 [i_7] [i_7] [0LL] = ((/* implicit */_Bool) arr_13 [i_13] [i_7 + 1] [i_7] [i_7]);
                    /* LoopSeq 4 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_57 [i_1] [i_1] [i_1] [i_7] [i_13] = ((/* implicit */_Bool) var_11);
                        var_31 = ((/* implicit */short) min((((/* implicit */unsigned int) ((signed char) var_8))), (((arr_15 [i_7 + 2] [i_7] [i_7 + 2] [i_7 - 2] [i_7]) ? (3836299261U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7 - 1] [i_7 + 3] [i_14])))))));
                        var_32 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) (_Bool)1)), (var_15)))));
                    }
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        arr_61 [i_1] [i_1] [i_16] [(short)2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_14 [i_7 + 1] [i_16 - 1] [i_13 + 1])) ? (arr_14 [i_7 + 1] [i_16 - 1] [i_13 - 3]) : (((/* implicit */unsigned int) -3332171)))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_12)), ((unsigned short)30127))))));
                        arr_62 [i_1] [i_16] [i_7] [i_16] [i_16] [i_7] [i_16] = ((/* implicit */_Bool) max((-9223372036854775779LL), (((/* implicit */long long int) 3332152))));
                    }
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        arr_67 [i_1] [i_7] [i_13] [i_17] [i_14] [i_14] [i_17 - 1] = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_13])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))), (((/* implicit */int) arr_5 [i_1] [i_7 - 2])))), (max((((((/* implicit */int) arr_58 [i_1] [i_7 + 3] [i_13] [i_14] [i_13])) + (((/* implicit */int) arr_6 [i_1] [0LL] [(_Bool)1])))), (((/* implicit */int) var_7))))));
                        arr_68 [i_1] [i_1] [i_17] [i_14] [i_17] = ((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (arr_40 [i_7 - 1] [i_7] [i_13 - 1] [i_13] [i_17 - 1] [i_17])))), (((((/* implicit */int) arr_40 [i_7 + 3] [i_7 + 3] [i_13 - 3] [i_7 + 3] [i_17 - 1] [i_17])) | (((/* implicit */int) arr_40 [i_7 - 1] [i_13] [i_13 - 1] [i_14] [i_17 - 1] [i_14]))))));
                    }
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        arr_71 [i_1] [i_18] [i_18] [i_1] [i_18 - 1] [i_13] [i_7] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_42 [2U] [i_7 - 3] [i_13 - 1] [2U]))))));
                        var_33 ^= ((/* implicit */long long int) var_9);
                        var_34 = ((/* implicit */unsigned short) min((max((min((2097024ULL), (((/* implicit */unsigned long long int) (unsigned short)50937)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)7528)), (6149906982228740954LL)))))), (max((((/* implicit */unsigned long long int) (!(arr_15 [i_1] [(_Bool)1] [(_Bool)1] [i_14] [(unsigned char)3])))), (arr_51 [(unsigned short)3] [(unsigned char)0] [i_13] [i_13 - 3] [i_13])))));
                    }
                }
                for (unsigned int i_19 = 2; i_19 < 7; i_19 += 4) 
                {
                    arr_74 [6LL] [i_1] [i_7] [(_Bool)1] [i_13 + 1] [i_19 + 1] = ((/* implicit */unsigned char) var_10);
                    arr_75 [i_1] [i_7 + 2] [i_13] [i_19] = ((/* implicit */unsigned short) (short)-13554);
                }
                arr_76 [i_1] [i_13 - 2] = ((/* implicit */long long int) ((_Bool) min((((/* implicit */unsigned long long int) 0U)), (min((15512680041270048327ULL), (((/* implicit */unsigned long long int) var_15)))))));
            }
            var_35 = max((max((((/* implicit */unsigned long long int) ((var_15) | (((/* implicit */long long int) 3149537546U))))), (var_0))), (((/* implicit */unsigned long long int) arr_34 [i_7 - 2] [i_7])));
            var_36 = ((/* implicit */short) var_4);
        }
        var_37 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)4171)) : (((/* implicit */int) (unsigned char)49))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_20 = 0; i_20 < 10; i_20 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    {
                        arr_85 [i_21] [i_21] [i_20] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_59 [i_1] [i_21] [i_22])) : (((/* implicit */int) arr_42 [i_1] [9LL] [(short)4] [i_22]))));
                        /* LoopSeq 2 */
                        for (int i_23 = 0; i_23 < 10; i_23 += 4) 
                        {
                            var_38 = ((/* implicit */unsigned char) var_12);
                            arr_89 [i_21] [i_20] [i_22] [i_22] [i_20] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_22] [i_20]))));
                        }
                        for (int i_24 = 1; i_24 < 8; i_24 += 2) 
                        {
                            var_39 = ((short) (unsigned short)512);
                            arr_93 [i_1] [i_24] [i_21] [i_21] [i_24] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
                            var_40 = ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [(unsigned char)3] [(unsigned char)3] [i_24 - 1] [(unsigned short)6] [i_24 + 2] [i_24 + 2])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        }
                        arr_94 [1U] [i_21] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)58293))));
                    }
                } 
            } 
            arr_95 [i_1] [(_Bool)1] = ((/* implicit */_Bool) arr_83 [i_1] [(unsigned char)6] [(signed char)3] [(_Bool)1]);
            arr_96 [i_20] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))));
            /* LoopSeq 1 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_26 = 0; i_26 < 10; i_26 += 2) 
                {
                    arr_102 [i_1] [i_1] [(short)6] [i_26] = ((/* implicit */short) ((((/* implicit */_Bool) 3332165)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46838))) : (-6149906982228740954LL)));
                    var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)35387)) ? (-225713645662859457LL) : (-7871157544145489108LL)));
                    arr_103 [i_1] [i_20] [(unsigned short)0] [4LL] [i_25] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_13))));
                }
                var_42 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) / ((-(((/* implicit */int) arr_1 [i_1]))))));
                var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) var_1))));
            }
        }
        var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) arr_58 [i_1] [i_1] [i_1] [i_1] [i_1]))));
    }
    for (unsigned char i_27 = 0; i_27 < 10; i_27 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_28 = 2; i_28 < 7; i_28 += 4) 
        {
            for (long long int i_29 = 3; i_29 < 9; i_29 += 1) 
            {
                for (unsigned short i_30 = 0; i_30 < 10; i_30 += 2) 
                {
                    {
                        var_45 = ((/* implicit */short) max(((~(min((((/* implicit */unsigned long long int) (short)-14626)), (var_2))))), (((/* implicit */unsigned long long int) arr_8 [i_28]))));
                        var_46 -= ((/* implicit */unsigned short) (short)14777);
                        arr_112 [i_29] = ((/* implicit */_Bool) (unsigned short)58303);
                        var_47 = ((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)4921), (((/* implicit */unsigned short) arr_25 [i_27] [i_27] [i_27])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_31 = 2; i_31 < 6; i_31 += 1) 
        {
            for (signed char i_32 = 0; i_32 < 10; i_32 += 2) 
            {
                {
                    var_48 = ((/* implicit */unsigned short) (((~((~(((/* implicit */int) var_10)))))) & (((/* implicit */int) var_12))));
                    arr_119 [i_31] [i_31] [(unsigned char)4] = ((/* implicit */unsigned int) max(((+(max((((/* implicit */long long int) var_12)), (var_3))))), (((/* implicit */long long int) ((_Bool) (short)23286)))));
                    arr_120 [i_31] [i_31] [i_32] [i_32] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_86 [i_32])), (((var_14) ? (((/* implicit */long long int) ((/* implicit */int) arr_46 [(unsigned short)2]))) : (9223372036854775807LL))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_31 + 2]))) != (var_3))))));
                }
            } 
        } 
        arr_121 [i_27] = ((/* implicit */unsigned char) var_0);
        var_49 = ((/* implicit */_Bool) (+(-361198985)));
    }
}
