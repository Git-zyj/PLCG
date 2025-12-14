/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239577
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */long long int) arr_5 [i_1 - 1] [i_1 - 1])) : (4915273546001855058LL)));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned char i_3 = 2; i_3 < 22; i_3 += 1) 
                {
                    {
                        arr_12 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_3 + 2])) % (((/* implicit */int) arr_8 [i_3 + 1]))));
                        var_18 &= ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)10)) ^ (((/* implicit */int) arr_8 [(_Bool)1])))) * ((~(((/* implicit */int) arr_2 [i_0] [i_0]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_2] [i_4] [i_3] [i_4 - 1] = ((/* implicit */unsigned char) (+(((((/* implicit */int) (signed char)2)) | (((/* implicit */int) var_13))))));
                            var_19 -= ((/* implicit */unsigned long long int) (+(arr_5 [i_0] [i_3 + 1])));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [i_5 - 1] [i_6] [i_5] [i_5 - 1] [i_6])) || (((/* implicit */_Bool) -4915273546001855058LL))));
                var_21 -= ((/* implicit */unsigned short) ((_Bool) ((var_14) ? (((/* implicit */int) (short)30504)) : (((/* implicit */int) arr_13 [i_0] [i_5] [i_5] [i_5] [i_6] [i_6])))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (~(((/* implicit */int) var_9)))))));
            }
            for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
                arr_24 [i_5] = ((/* implicit */signed char) ((-4915273546001855077LL) | (((/* implicit */long long int) 3206116893U))));
                arr_25 [i_0] [i_5] = ((/* implicit */unsigned short) 4062832992U);
                arr_26 [i_5] [i_5] [i_5] [i_7] = ((/* implicit */int) ((long long int) arr_21 [i_5 - 1] [i_5 - 1] [i_7]));
            }
            for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_24 *= ((/* implicit */short) -4915273546001855067LL);
                            arr_35 [i_0] [i_0] [i_8] [i_9] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)139)) || (((/* implicit */_Bool) arr_10 [i_10] [i_10] [i_5 - 1] [i_5 - 1] [i_5 - 1] [1LL]))));
                            arr_36 [i_0] [i_5 - 1] [i_8] [i_5] [i_10] = ((/* implicit */unsigned char) (unsigned short)12285);
                            arr_37 [i_0] [i_0] [i_5] [i_9] [i_9] = ((/* implicit */unsigned char) (+(4915273546001855057LL)));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((arr_27 [i_5 - 1] [i_8]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)222))))))));
            }
            var_26 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            var_27 = ((/* implicit */unsigned short) (_Bool)1);
        }
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned short i_12 = 2; i_12 < 24; i_12 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_40 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [(short)7] [i_12]))))))));
                var_29 = (unsigned char)118;
            }
            for (unsigned short i_13 = 2; i_13 < 24; i_13 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_14 = 4; i_14 < 21; i_14 += 1) 
                {
                    arr_48 [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) arr_22 [i_11 - 1] [i_13 + 1] [i_11 - 1]);
                    var_30 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_13)) ? (2802481353U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                }
                for (unsigned char i_15 = 0; i_15 < 25; i_15 += 1) 
                {
                    var_31 = ((/* implicit */short) min((((min((((/* implicit */unsigned long long int) var_16)), (4986136686625489657ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5005))) : (arr_14 [i_13] [i_13] [i_11] [i_13] [i_11])))))), (((/* implicit */unsigned long long int) var_12))));
                    arr_51 [i_0] [i_11] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_15), (var_1)))) ? (((/* implicit */int) (unsigned short)64817)) : (((((/* implicit */_Bool) -4915273546001855049LL)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)12288)) != (((/* implicit */int) var_15))))) : (((((/* implicit */int) (short)30499)) >> (((arr_0 [i_11]) - (311313416U)))))))));
                    var_32 = ((/* implicit */int) arr_50 [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 3; i_16 < 24; i_16 += 3) 
                    {
                        arr_56 [i_0] [i_0] [i_13 - 1] [i_15] [0] [i_13] |= ((/* implicit */unsigned char) 1739432038351186116ULL);
                        var_33 = ((/* implicit */signed char) 42419417U);
                    }
                }
                var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) var_11)) + (1739432038351186116ULL)))))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)5)) || (((/* implicit */_Bool) var_17))))) : (((/* implicit */int) arr_2 [i_0] [i_11 - 1])))) : (((/* implicit */int) ((unsigned char) (short)(-32767 - 1))))));
                var_35 = ((/* implicit */unsigned short) (~(((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) % (((/* implicit */int) (_Bool)1))))));
            }
            for (long long int i_17 = 1; i_17 < 23; i_17 += 3) /* same iter space */
            {
                var_36 = ((/* implicit */unsigned int) ((int) min((arr_59 [i_11 - 1] [i_11 - 1] [i_17 + 1]), (((/* implicit */unsigned char) ((1391802806) < (((/* implicit */int) arr_47 [i_0] [i_11 - 1] [i_11] [i_11 - 1] [i_17]))))))));
                arr_61 [i_0] [i_0] [i_0] [i_17] = ((/* implicit */signed char) ((((/* implicit */int) (((~(((/* implicit */int) arr_53 [(signed char)20] [i_11 - 1] [i_11] [(signed char)20] [i_17])))) < ((-(((/* implicit */int) arr_30 [i_0] [i_17 - 1]))))))) - (max((((((/* implicit */int) (unsigned char)63)) & (((/* implicit */int) (unsigned char)120)))), (((/* implicit */int) arr_31 [i_0] [i_11 - 1] [i_17 + 2] [i_0] [i_0]))))));
            }
            for (long long int i_18 = 1; i_18 < 23; i_18 += 3) /* same iter space */
            {
                var_37 = ((/* implicit */short) 709709420U);
                /* LoopSeq 2 */
                for (short i_19 = 0; i_19 < 25; i_19 += 2) 
                {
                    var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) var_6))));
                    var_39 = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) arr_2 [17U] [i_18])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_20 [i_11 - 1] [i_18] [i_19])))))));
                    arr_68 [i_0] [i_0] [i_11] [i_11] [i_19] = ((/* implicit */signed char) 8622941151550524254LL);
                    var_40 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)8)), ((short)8862)))), (((unsigned long long int) (unsigned char)216)))))));
                }
                for (unsigned long long int i_20 = 2; i_20 < 23; i_20 += 2) 
                {
                    var_41 &= ((/* implicit */unsigned int) -13LL);
                    arr_72 [i_0] [i_11] [i_18 + 1] [i_20] [i_0] [i_11] = min((((/* implicit */long long int) ((3323103987U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)8192)))))), (max((((((/* implicit */_Bool) 56441251U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [(unsigned char)14] [i_11] [i_18]))) : (var_8))), (((/* implicit */long long int) (unsigned char)8)))));
                    var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 8622941151550524247LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)116))) : (-8622941151550524264LL))), (-1LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (6574188356692920782ULL))), (((/* implicit */unsigned long long int) 3683074303U))))));
                    arr_73 [i_0] [i_11] [(unsigned short)23] [i_20] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))));
                }
                var_43 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_20 [i_11 - 1] [i_11 - 1] [i_0])))), (((/* implicit */int) ((arr_19 [i_18 + 2] [i_0] [i_11 - 1]) <= (arr_19 [i_18 + 2] [i_0] [i_11 - 1]))))));
                /* LoopNest 2 */
                for (unsigned char i_21 = 2; i_21 < 23; i_21 += 2) 
                {
                    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                    {
                        {
                            arr_80 [(short)3] [13ULL] [i_18] [i_21] [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) ((13LL) == (var_8))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) var_3)))))));
                            var_44 = ((/* implicit */unsigned char) arr_38 [i_18 + 2] [i_22 - 1]);
                            var_45 = (-(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_21])) || (((/* implicit */_Bool) -4783328442123876435LL))))), (arr_58 [i_22 - 1] [i_21 - 1] [i_18 + 1]))));
                            var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) (unsigned char)170))));
                        }
                    } 
                } 
            }
            var_47 = ((/* implicit */unsigned int) (_Bool)1);
            arr_81 [i_11] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0]);
            arr_82 [i_11] |= ((/* implicit */short) ((int) 9223372036854775807LL));
            var_48 = ((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */unsigned short) arr_66 [i_0] [i_0] [i_0] [i_11] [i_11 - 1])), (arr_7 [i_0] [i_11 - 1] [i_0]))));
        }
        for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) /* same iter space */
        {
            var_49 = ((/* implicit */unsigned char) ((var_14) ? (((/* implicit */int) (unsigned short)950)) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (((signed char) var_0)))))));
            var_50 = ((/* implicit */unsigned short) max((max((6574188356692920808ULL), (((/* implicit */unsigned long long int) 26LL)))), (((/* implicit */unsigned long long int) (+(12LL))))));
            arr_87 [i_23] = ((/* implicit */_Bool) min(((+(arr_41 [i_23 - 1] [i_23 - 1] [i_23 - 1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_15)))))));
        }
        var_51 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
    }
    var_52 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (((((/* implicit */unsigned long long int) var_6)) * (var_17)))));
    var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (9223372036854775793LL)))) ? (((/* implicit */int) var_13)) : ((-(((/* implicit */int) (signed char)8))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((-11LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) : (((long long int) var_12))));
    /* LoopNest 3 */
    for (long long int i_24 = 0; i_24 < 21; i_24 += 2) 
    {
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                {
                    var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) (~(((var_17) - (((/* implicit */unsigned long long int) arr_33 [i_24])))))))));
                    var_55 = ((/* implicit */long long int) ((unsigned short) ((max((arr_14 [i_24] [i_25] [i_26] [i_26] [i_24]), (-8109686099877879671LL))) / (((/* implicit */long long int) ((/* implicit */int) max((arr_90 [i_24] [i_25] [i_25]), (var_4))))))));
                }
            } 
        } 
    } 
}
