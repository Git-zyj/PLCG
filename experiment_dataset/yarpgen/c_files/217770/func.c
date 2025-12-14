/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217770
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
    var_11 = ((/* implicit */signed char) var_7);
    var_12 -= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) * ((~(var_2))))) - (12210609461163642484ULL)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (_Bool)0);
                arr_5 [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) (_Bool)0)))) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (short)-2513)))) : (((/* implicit */int) max((arr_1 [i_1]), (arr_1 [i_0]))))))) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2]))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        var_14 &= ((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_10 [i_0 - 1] [i_0 - 1]), (arr_10 [i_0 - 1] [i_0 - 1]))))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            arr_15 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_2 - 2])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)52))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_6 [i_4] [i_3] [i_2] [i_1]), (((/* implicit */unsigned char) arr_9 [i_0] [i_0]))))) ? (((arr_13 [i_0 + 1] [i_0] [i_0] [i_1] [i_1] [i_3] [i_1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((signed char) 15019176593327220770ULL))))))));
                            var_15 -= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))), (min((((((/* implicit */_Bool) 18446744073709551585ULL)) ? (arr_7 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_1]))))), (((/* implicit */long long int) arr_2 [i_4] [i_1] [i_2]))))));
                            arr_16 [i_0] [i_1] [i_0] [i_1] = (-(((((/* implicit */_Bool) (unsigned char)67)) ? (arr_14 [i_2] [i_2 + 2] [i_2]) : (arr_8 [i_0 - 2] [i_0] [i_0] [i_0]))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (5163654303424779463ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)61))))))));
                            var_17 += ((((/* implicit */_Bool) (unsigned char)203)) ? (17887143275198377125ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))));
                        }
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((unsigned int) ((_Bool) ((unsigned long long int) (_Bool)1)))))));
                            var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_20 [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 2]), (arr_20 [i_0 - 1] [(signed char)15] [i_6] [i_3] [i_0 - 1])))), (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 2] [i_0 - 1]))) : (min((arr_17 [i_0] [i_1] [i_2] [i_3] [i_3] [i_6]), (((/* implicit */unsigned long long int) (signed char)61))))))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)126)), ((short)8191)))) ? (((/* implicit */int) arr_21 [i_2] [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) var_5)))))));
                            arr_23 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)67))));
                        }
                        var_21 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_9 [i_0] [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_3]))))));
                    }
                    var_22 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                }
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    arr_26 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 2])) ? (((/* implicit */int) arr_21 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])))) : ((-(((/* implicit */int) (unsigned char)46))))));
                    var_23 -= ((/* implicit */unsigned int) var_9);
                }
                for (int i_8 = 4; i_8 < 18; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
                    {
                        var_24 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)82))));
                        arr_31 [i_9] [i_0] [i_1] [i_0] [(unsigned char)17] = ((/* implicit */unsigned char) arr_1 [i_8]);
                    }
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
                        {
                            arr_37 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_0] [i_0])) && (((/* implicit */_Bool) var_4))));
                            arr_38 [i_11] [i_11] &= ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_10] [i_11]);
                            arr_39 [i_0] [i_0] [i_0] [i_1] [i_0] [i_10] [i_11] = min((((unsigned long long int) arr_14 [i_0 + 1] [i_8 + 1] [i_8 - 1])), (((/* implicit */unsigned long long int) var_0)));
                            arr_40 [i_11] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((min((arr_10 [i_0] [i_0 - 1]), (arr_10 [i_0] [i_0 - 1]))) ? (arr_32 [i_0] [i_1] [3ULL]) : (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_24 [i_0] [i_8] [i_10])))), (((/* implicit */int) ((signed char) arr_10 [i_0] [i_1]))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) 
                        {
                            arr_44 [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_12] = ((/* implicit */_Bool) (unsigned char)209);
                            var_25 ^= (-(((unsigned int) var_0)));
                            arr_45 [i_0] [i_8] [i_8] [i_10] [i_12] [i_12] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_10] [i_12])) ? (arr_8 [i_0] [i_12] [i_8] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32586)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_0 + 1] [i_1]))) : (var_10)));
                        }
                        var_26 |= ((/* implicit */unsigned char) arr_41 [i_0]);
                        arr_46 [i_0] [i_1] = arr_27 [i_1] [i_0];
                    }
                    var_27 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1]))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_9 [i_0] [i_0 - 2]) ? (((/* implicit */int) arr_9 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_9 [i_0] [i_0 - 2]))))) ? (min((18446744073709551615ULL), (2528069854439635859ULL))) : (arr_35 [i_0] [i_0] [i_0 + 1] [i_0] [i_8 - 3])));
                    arr_47 [i_0] = ((/* implicit */_Bool) var_2);
                }
                /* vectorizable */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_14 = 0; i_14 < 19; i_14 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (arr_8 [i_0] [i_0] [i_0] [i_0]))))));
                        arr_53 [i_0] [(_Bool)1] [i_13] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3390252505776933925LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))) : (1230877870U)));
                        /* LoopSeq 2 */
                        for (unsigned char i_15 = 0; i_15 < 19; i_15 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((((((/* implicit */_Bool) arr_21 [i_0] [i_15] [i_15] [i_0] [i_0])) ? (arr_43 [i_0] [i_0] [i_0] [i_0] [i_14] [i_0] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)202))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0 - 2])))))));
                            var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_1] [i_1] [i_13])) >> (((4194303LL) - (4194290LL)))));
                        }
                        for (unsigned int i_16 = 4; i_16 < 17; i_16 += 1) 
                        {
                            var_32 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_54 [(signed char)0]) ? (((/* implicit */int) arr_48 [i_0] [(_Bool)1] [i_13])) : (((/* implicit */int) arr_42 [i_16]))))) ? (((/* implicit */int) (short)-12768)) : (((/* implicit */int) (unsigned char)7))));
                            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1362344403615937284ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 24U)) ? (10021247771748338372ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15957))))))))));
                            arr_58 [i_0 + 1] [i_0 + 1] [i_1] [i_13] [i_0] [i_16] = ((/* implicit */unsigned char) ((var_8) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) : (0ULL)));
                            arr_59 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_16 - 3] [i_0 - 2] [i_0])) ? (((((/* implicit */_Bool) (short)-297)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)249)))))));
                            arr_60 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1073741792U)) ? (261632U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 574625071))))));
                        }
                        var_34 += ((/* implicit */unsigned char) (-(335952800U)));
                    }
                    for (short i_17 = 0; i_17 < 19; i_17 += 3) /* same iter space */
                    {
                        arr_63 [i_0] [i_1] [i_17] = ((/* implicit */unsigned int) (unsigned char)52);
                        /* LoopSeq 1 */
                        for (short i_18 = 0; i_18 < 19; i_18 += 4) 
                        {
                            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((short) (_Bool)1)))));
                            arr_67 [i_0] [i_0] [i_13] [i_17] [i_18] [15LL] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)16615))));
                        }
                    }
                    for (short i_19 = 0; i_19 < 19; i_19 += 3) /* same iter space */
                    {
                        arr_70 [i_0] [(signed char)14] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */unsigned long long int) 4123784992011991151LL)) : (14892538826077953030ULL)))) ? (arr_55 [6ULL] [i_1] [i_1]) : (var_10)));
                        /* LoopSeq 1 */
                        for (signed char i_20 = 2; i_20 < 18; i_20 += 4) 
                        {
                            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (((!(((/* implicit */_Bool) 2588774957816977364ULL)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-10075)) >= (((/* implicit */int) (_Bool)1)))))))))));
                            arr_73 [i_0] [i_20] &= ((((/* implicit */int) (!(((/* implicit */_Bool) arr_68 [i_1] [i_1]))))) & (((((/* implicit */_Bool) arr_11 [(unsigned char)2] [i_1] [i_13] [(unsigned char)2] [(unsigned char)2])) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_13])) : (((/* implicit */int) var_0)))));
                            arr_74 [i_0] [i_1] [i_1] [i_13] [i_19] [i_20] [i_20] &= ((/* implicit */unsigned long long int) (signed char)-48);
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_21 = 0; i_21 < 19; i_21 += 2) 
                    {
                        for (unsigned char i_22 = 1; i_22 < 18; i_22 += 3) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_13] [i_21] [i_22])) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (signed char)-61)))))))));
                                var_38 -= ((/* implicit */unsigned long long int) arr_48 [i_0] [i_0] [i_1]);
                                arr_79 [i_0] [i_0] [i_13] [i_21] [i_0] = ((/* implicit */_Bool) var_2);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
