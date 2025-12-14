/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195728
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32745))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
                    {
                        var_20 |= ((signed char) arr_1 [i_0] [i_2 - 2]);
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2 - 1])) ? (((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) arr_7 [i_0])) : (0))) : (((((/* implicit */_Bool) arr_8 [(short)12] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)0))))));
                            var_22 |= ((/* implicit */signed char) ((unsigned int) arr_7 [i_2 - 1]));
                        }
                        for (unsigned short i_5 = 3; i_5 < 14; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-105)) && (((/* implicit */_Bool) 6306112528889870627LL))));
                            var_24 = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) (unsigned char)7))))));
                            var_25 = ((/* implicit */long long int) (unsigned char)229);
                            var_26 = ((/* implicit */long long int) (signed char)-3);
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) arr_2 [i_2] [i_3]))));
                        }
                        for (signed char i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned char) (~((+(0LL)))));
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) var_16))));
                            arr_20 [i_0] [(unsigned char)11] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) arr_11 [i_3] [i_3] [i_2 - 1] [i_0] [i_3]);
                        }
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0] [i_0]))) ? (((/* implicit */int) (unsigned char)92)) : (arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3]))))));
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2 + 2])) ? (((/* implicit */int) arr_7 [i_2 + 1])) : (((/* implicit */int) arr_7 [i_2 - 1]))));
                        arr_21 [i_0] [i_1] [i_2] [i_2] [i_1] |= arr_7 [i_3];
                    }
                    for (long long int i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
                    {
                        arr_24 [i_7] = ((/* implicit */short) var_6);
                        var_32 = ((/* implicit */unsigned char) (-(min(((-(arr_12 [i_0] [i_1] [i_2] [i_2] [i_7] [i_7]))), (((/* implicit */int) var_3))))));
                        arr_25 [i_7] [i_2 + 2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned int) (_Bool)0)), (0U))));
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_29 [i_8] [i_1] = ((/* implicit */signed char) ((unsigned char) (signed char)28));
                        /* LoopSeq 4 */
                        for (signed char i_9 = 0; i_9 < 15; i_9 += 4) 
                        {
                            arr_32 [i_9] [i_9] [i_2] [i_2 - 2] [i_2] |= ((/* implicit */long long int) ((max((((/* implicit */long long int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1])), (arr_31 [i_1] [i_1] [i_1] [i_2 - 1] [11LL] [i_2 + 2] [i_2]))) < (((((/* implicit */_Bool) 1722135629551102757LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (4927546685977888264LL)))));
                            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((short) min(((+(8179645976073490049LL))), (((/* implicit */long long int) ((unsigned char) arr_13 [i_1] [i_8 - 1])))))))));
                        }
                        for (short i_10 = 0; i_10 < 15; i_10 += 3) /* same iter space */
                        {
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)56244)))))));
                            var_35 = ((/* implicit */short) (unsigned char)58);
                        }
                        for (short i_11 = 0; i_11 < 15; i_11 += 3) /* same iter space */
                        {
                            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) arr_17 [i_0] [i_1]))));
                            var_37 = ((/* implicit */signed char) (~(684537375U)));
                            arr_39 [i_8] [i_8 - 1] [i_8] = ((/* implicit */unsigned int) var_18);
                            var_38 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) -5139121298561068919LL)))))));
                            arr_40 [i_8] [i_11] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))));
                        }
                        for (short i_12 = 0; i_12 < 15; i_12 += 3) /* same iter space */
                        {
                            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((min((arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_31 [i_0] [i_1] [i_0] [i_8] [i_12] [i_0] [i_0]))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))))))));
                            var_40 |= arr_5 [i_0] [i_0];
                            arr_43 [i_12] [i_8] [i_2] [i_0] [i_8] [i_0] = arr_7 [i_8 - 1];
                            var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) (signed char)125))));
                            arr_44 [i_12] [i_12] [i_8] [i_8] [i_8] [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) min(((short)-26628), (((/* implicit */short) arr_4 [i_12] [i_1]))))) : ((-(((/* implicit */int) (unsigned char)63))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (arr_10 [i_0]) : (((/* implicit */int) arr_2 [i_0] [i_8]))))), (max((((/* implicit */long long int) (short)8456)), (arr_33 [i_1] [i_1])))))));
                        }
                        var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_4 [i_2 + 2] [i_8 - 1])))) ? (((/* implicit */int) arr_28 [i_0] [i_2] [i_1] [i_1] [i_0] [i_0])) : (((((/* implicit */_Bool) (unsigned char)54)) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)-4761)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((var_16) < (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_1])))))))))))));
                    }
                    arr_45 [i_1] = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                }
                for (long long int i_13 = 0; i_13 < 15; i_13 += 3) 
                {
                    arr_48 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((int) arr_38 [i_1] [i_1] [i_1] [i_1] [i_1]));
                    arr_49 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (unsigned short)25470)))), (((/* implicit */int) ((signed char) ((long long int) var_10))))));
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 1; i_14 < 14; i_14 += 1) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 15; i_15 += 4) 
                        {
                            {
                                arr_57 [i_13] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) ((var_11) < (((/* implicit */unsigned long long int) 1254316907U))))) + (((/* implicit */int) ((short) arr_31 [(unsigned char)8] [i_14] [i_0] [i_13] [i_0] [i_1] [i_0])))))) != (6257334094373555277LL)));
                                var_43 |= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)65535)))) / (((((/* implicit */_Bool) var_14)) ? (7365008240171788704ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))) ? (((/* implicit */int) arr_28 [i_0] [i_1] [i_1] [i_1] [i_14] [i_15])) : (((/* implicit */int) var_15)));
                                arr_58 [i_15] [i_15] [i_14] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (short)18455);
                                arr_59 [i_13] = ((/* implicit */long long int) ((((/* implicit */int) (short)-1)) > (((/* implicit */int) (unsigned char)9))));
                            }
                        } 
                    } 
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                {
                    var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (8) : (((/* implicit */int) (signed char)82))))) ? (max((((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))), (max((((/* implicit */unsigned int) arr_19 [i_16] [i_1] [i_1] [i_0] [i_0])), (var_16))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (unsigned char)63)) : (-273965402))) << (((int) (unsigned short)0)))))));
                    arr_62 [(signed char)8] [(signed char)8] [i_16] |= ((/* implicit */unsigned short) ((max((arr_0 [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-31979)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (signed char)-4))))))) << (((/* implicit */int) arr_53 [i_16] [i_16] [i_0] [i_0]))));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                {
                    arr_65 [i_0] |= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_17])) ? (((/* implicit */int) arr_15 [i_17] [i_0] [i_0])) : (((/* implicit */int) var_3))))));
                    arr_66 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1347714878)) ? (((/* implicit */int) var_10)) : (257583440))), (((/* implicit */int) (unsigned char)250))))) ? (arr_31 [i_0] [i_1] [i_17] [i_1] [i_1] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_0 [i_0])))))))));
                    var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((2147483647) % (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (-1794675531) : (((/* implicit */int) arr_5 [i_0] [(unsigned char)1]))))))) ? (((((/* implicit */_Bool) min((arr_13 [i_0] [i_1]), (((/* implicit */long long int) -2147483625))))) ? ((~(((/* implicit */int) (unsigned short)1684)))) : (((((/* implicit */_Bool) 65815799)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)87)))))) : (max((((/* implicit */int) var_12)), (((((/* implicit */int) (short)0)) >> (((9223372036854775807LL) - (9223372036854775791LL)))))))));
                }
                arr_67 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)192))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_52 [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_56 [i_0] [i_0] [i_1] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned char)253))) : (min((var_11), (((/* implicit */unsigned long long int) arr_30 [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) max((arr_1 [(short)8] [i_1]), (((/* implicit */signed char) arr_54 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [(unsigned short)13]))))), ((unsigned char)102)))))));
            }
        } 
    } 
    var_46 = min((4209288288704401484LL), (((/* implicit */long long int) ((((/* implicit */_Bool) ((18446744073709551615ULL) / (7259322098273960759ULL)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (short i_18 = 3; i_18 < 21; i_18 += 3) 
    {
        for (unsigned char i_19 = 0; i_19 < 22; i_19 += 3) 
        {
            {
                var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_68 [i_19] [i_18])))))));
                arr_73 [i_18] = (+((~(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)42597)) : (((/* implicit */int) (unsigned char)197)))))));
            }
        } 
    } 
    var_48 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned char) ((_Bool) (unsigned char)201))))))) + (min((var_16), (((/* implicit */unsigned int) var_5))))));
}
