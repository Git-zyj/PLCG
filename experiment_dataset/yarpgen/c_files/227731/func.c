/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227731
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (18446744073709551596ULL)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [(unsigned char)12] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17ULL)) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((7987851544071173828ULL) == (((/* implicit */unsigned long long int) 1329599786U)))))))));
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 20; i_2 += 3) 
                {
                    arr_8 [i_0] [i_1] [i_0 + 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2 - 2] [i_2] [i_2])) ? (arr_2 [i_1] [i_2 - 2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_2 - 3] [i_2 - 1] [i_2])))))) & ((+((~(arr_7 [i_0 + 1] [i_1] [i_0 + 1])))))));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0 - 2]))))), (((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_1 + 1] [i_2 + 1])) ? (arr_0 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)90))))))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)7669))));
                    /* LoopSeq 3 */
                    for (int i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        arr_12 [i_0] = ((/* implicit */unsigned char) (((~(arr_0 [i_0 + 1]))) | (((/* implicit */long long int) (~((~(((/* implicit */int) (short)7687)))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            var_18 *= ((/* implicit */unsigned long long int) arr_11 [i_4 + 1] [i_2 - 1] [i_2] [i_0 - 1] [i_0]);
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0)))))))))))));
                            var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((var_13) | (4884232U)))) / (((((/* implicit */_Bool) 3022249801U)) ? (var_1) : (((/* implicit */long long int) -23))))))), (max((max((18446744073709551596ULL), (((/* implicit */unsigned long long int) 1252025922U)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [(short)14])))))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_4 + 2] [i_0 - 1] [i_2 - 3] [i_1 - 2])) ? ((+(((/* implicit */int) arr_6 [i_4 + 1] [i_0 + 1] [i_2 + 1] [i_1 - 1])))) : (((/* implicit */int) (!((_Bool)1))))));
                        }
                    }
                    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-7670)), (((((/* implicit */_Bool) 2965367510U)) ? (2965367527U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1558)))))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (((+(((/* implicit */int) arr_3 [i_2 - 1])))) - (((((/* implicit */int) arr_3 [i_2 - 1])) + (((/* implicit */int) arr_11 [i_1 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0])))))))));
                    }
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        arr_19 [i_0] [i_1] |= (!(((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0 + 1]))));
                        arr_20 [(unsigned char)11] [i_1] [i_1] [i_0] &= ((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) >> (((((((/* implicit */_Bool) (unsigned char)33)) ? (1252025923U) : (2U))) - (1252025897U)))));
                    }
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    var_24 = ((/* implicit */unsigned short) (unsigned char)33);
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            var_25 = ((/* implicit */_Bool) (~(arr_10 [i_0] [i_0] [i_0 - 2] [i_1 - 1] [i_1] [i_7])));
                            arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */_Bool) min((((/* implicit */long long int) max(((-(((/* implicit */int) arr_22 [i_0] [i_1] [i_7])))), (((/* implicit */int) arr_3 [i_0 - 1]))))), (max(((~(arr_2 [i_0] [i_1] [i_7]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2965367510U)) ? (4294967287U) : (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0] [10ULL] [i_0])))))))));
                            arr_29 [i_9] [i_9] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_10 [i_9] [i_8] [i_0 + 1] [i_1 + 1] [i_0 + 1] [i_0 - 2])) ? (arr_26 [i_7]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)0))))))), (((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) var_11))))))));
                            var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_25 [i_8] [i_8] [i_1 - 2] [i_1 - 1]) > (arr_25 [i_8] [i_8] [i_1] [i_1 - 1]))))));
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 1) /* same iter space */
                        {
                            var_27 = ((unsigned long long int) min((2965367510U), (3461813234U)));
                            var_28 = ((/* implicit */long long int) ((signed char) max((((/* implicit */long long int) arr_27 [i_1 + 1] [i_1] [i_1 + 1])), (((((/* implicit */long long int) 3461813234U)) | (arr_31 [i_0] [i_1] [i_0] [i_1] [(short)1]))))));
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 1) /* same iter space */
                        {
                            var_29 -= ((/* implicit */unsigned long long int) (_Bool)0);
                            arr_35 [i_0] [i_11] [i_7] [i_8] [i_11] = ((/* implicit */int) (+(0LL)));
                            arr_36 [i_0] [i_1 - 1] [(_Bool)1] [i_11] [i_1 - 1] = ((/* implicit */signed char) (~(3461813233U)));
                        }
                        /* LoopSeq 2 */
                        for (int i_12 = 0; i_12 < 21; i_12 += 3) 
                        {
                            arr_40 [i_12] [i_12] [i_7] [i_7] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) ((22ULL) == (((/* implicit */unsigned long long int) 7LL))));
                            arr_41 [19LL] [19LL] [i_7] [19LL] [i_12] [i_12] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
                            arr_42 [i_0] [i_0] [i_0] [i_7] [i_8] [i_12] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_0 + 1])) || (((/* implicit */_Bool) 2U))))), (((unsigned int) ((20U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [9] [i_1] [i_0] [i_0] [i_0] [i_7])))))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned char) (short)-25056);
                            var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 20U)) ? (23) : (((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0] [(short)14] [i_0 + 1])))) * (((/* implicit */int) max((arr_14 [i_0] [i_0 - 2] [i_1 - 2] [i_1 - 2]), (arr_14 [18U] [i_0 + 1] [i_1 - 2] [i_1 - 1]))))));
                            arr_47 [i_13] [i_8] [i_7] [i_0 - 2] = ((/* implicit */long long int) ((int) ((long long int) arr_23 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_0 - 2] [i_0 + 1])));
                        }
                        arr_48 [i_0] [(signed char)19] [i_7] [1U] = ((/* implicit */unsigned long long int) (~(-7716269863627411836LL)));
                        /* LoopSeq 1 */
                        for (int i_14 = 0; i_14 < 21; i_14 += 4) 
                        {
                            var_32 = ((/* implicit */_Bool) min((var_32), (((((/* implicit */int) ((arr_11 [i_14] [5U] [i_7] [i_1 + 1] [(unsigned short)5]) && (((/* implicit */_Bool) 9140913634793172570LL))))) == (((/* implicit */int) (short)20701))))));
                            arr_52 [i_0] [i_0] [i_1] [i_0] [i_14] [i_0] = ((/* implicit */long long int) arr_51 [i_14] [i_1]);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 21; i_15 += 4) 
                    {
                        for (int i_16 = 0; i_16 < 21; i_16 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (~(4294967276U)))) ? ((~(var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)8)) ? (arr_56 [i_0 + 1] [i_1] [i_7] [i_1] [i_1]) : (((/* implicit */int) var_7)))))))));
                                var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)70)) ? (((((/* implicit */_Bool) 6466745989453893632LL)) ? (-7) : (((/* implicit */int) (short)-32438)))) : (((/* implicit */int) (_Bool)1)))))));
                                var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-9)) ? (arr_16 [i_0] [i_1] [i_7] [i_0 - 2] [i_0] [i_7]) : (((/* implicit */int) (signed char)-9))))) ? ((-(arr_16 [i_0] [i_1] [i_7] [i_0 - 1] [i_1] [i_1]))) : (min((((/* implicit */int) (unsigned short)44728)), (arr_16 [i_0] [(unsigned char)11] [i_7] [i_0 - 2] [i_7] [i_7])))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_17 = 0; i_17 < 21; i_17 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_18 = 0; i_18 < 21; i_18 += 4) 
                    {
                        for (unsigned char i_19 = 0; i_19 < 21; i_19 += 2) 
                        {
                            {
                                arr_66 [i_19] [i_18] [i_18] [i_17] [i_0] [i_0] = ((/* implicit */short) (((((~(((/* implicit */int) arr_30 [i_0] [i_1 + 1] [i_0 - 1] [i_18] [i_0])))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (((/* implicit */int) arr_43 [i_0 - 2] [i_0] [i_0] [i_0] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_0 - 2])))) + (125)))));
                                var_36 = ((/* implicit */signed char) max((((long long int) ((((/* implicit */_Bool) arr_45 [i_1 - 1] [i_17])) ? (7792559744749092754LL) : (((/* implicit */long long int) 1450477373U))))), (max((-8LL), (((/* implicit */long long int) arr_15 [i_0 - 1] [i_18]))))));
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (~(3461813234U))))));
                    var_38 = (~(((/* implicit */int) ((unsigned char) arr_55 [i_1 - 2] [i_0 - 2] [i_0] [i_0]))));
                    var_39 -= ((/* implicit */_Bool) max((9U), (((/* implicit */unsigned int) ((arr_27 [i_1 - 1] [i_1] [i_1]) ? (((/* implicit */int) arr_27 [i_1 - 2] [i_1] [i_1])) : (((/* implicit */int) arr_27 [i_1 - 2] [i_1] [i_1])))))));
                }
                for (unsigned char i_20 = 0; i_20 < 21; i_20 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 1) /* same iter space */
                    {
                        var_40 += ((signed char) max(((short)-25461), (((/* implicit */short) (unsigned char)167))));
                        arr_73 [i_0] [i_1] = max((((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (arr_7 [i_0 + 1] [6ULL] [i_0 - 2]) : (((/* implicit */unsigned long long int) arr_44 [i_0 - 1] [i_1] [i_1] [i_1 - 2] [i_1 - 2] [i_1 + 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-28129)) * (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 4 */
                        for (long long int i_22 = 1; i_22 < 20; i_22 += 4) 
                        {
                            var_41 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) (unsigned char)5)) / (((((/* implicit */_Bool) 15889541029360794715ULL)) ? (2106800382) : (((/* implicit */int) arr_76 [i_1] [(_Bool)1] [i_1])))))));
                            var_42 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(3112710595U))))));
                            arr_77 [18U] = ((/* implicit */_Bool) var_4);
                            arr_78 [i_0] [i_0] [i_0] [i_21] [i_0] &= ((/* implicit */_Bool) (((~(2106282196))) + (((/* implicit */int) arr_75 [2U] [i_1]))));
                        }
                        for (long long int i_23 = 0; i_23 < 21; i_23 += 2) 
                        {
                            var_43 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_63 [i_1 - 2] [i_0 - 2] [i_0] [i_0]) >> (((arr_63 [i_1 - 1] [i_0 + 1] [i_0] [13]) - (12787937199493018623ULL))))))));
                            arr_81 [i_0] [i_0] [i_0] [i_20] [i_21] [i_23] |= ((/* implicit */signed char) (((~(((/* implicit */int) arr_75 [(signed char)10] [i_1 - 1])))) - (max((((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) var_3)))), (((((/* implicit */int) arr_1 [i_20])) >> (((((/* implicit */int) (unsigned short)20807)) - (20785)))))))));
                            arr_82 [i_0] [i_1] [i_1] [i_21] [i_23] = ((/* implicit */short) (signed char)-1);
                        }
                        for (unsigned int i_24 = 3; i_24 < 20; i_24 += 4) 
                        {
                            var_44 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])) ? (arr_31 [i_24 + 1] [i_0 - 2] [i_20] [i_0] [i_24]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)1)))))));
                            var_45 = arr_59 [i_24] [i_21] [i_0];
                        }
                        for (unsigned int i_25 = 0; i_25 < 21; i_25 += 4) 
                        {
                            arr_90 [i_25] [i_21] [i_20] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0)))))));
                            arr_91 [i_1] [i_1] = ((/* implicit */long long int) ((max((arr_74 [i_0] [i_0] [i_0] [i_0 - 2] [i_25]), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) arr_62 [i_0] [i_1] [i_0] [i_20] [0U] [i_1]))))))) <= (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), ((~(arr_16 [i_1] [i_21] [i_1] [i_1] [i_1] [i_0]))))))));
                            var_46 &= (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240)))))) ? (((/* implicit */unsigned long long int) 8LL)) : ((~(10780755634750203618ULL))))));
                        }
                        arr_92 [i_0] [i_0] |= ((/* implicit */int) arr_6 [i_21] [20U] [i_1 + 1] [11]);
                        var_47 = ((/* implicit */unsigned long long int) (short)26812);
                    }
                    for (unsigned long long int i_26 = 0; i_26 < 21; i_26 += 1) /* same iter space */
                    {
                        arr_97 [i_0 + 1] [i_0] [i_0] [(short)0] [i_1] [i_0] |= (-(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (-4054824826738610225LL))));
                        arr_98 [i_26] [i_26] = ((/* implicit */unsigned long long int) ((_Bool) ((arr_37 [i_0] [i_0 + 1] [(unsigned short)8] [i_1 - 2] [i_26]) == (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
                        var_48 |= (+((~(((/* implicit */int) (!(((/* implicit */_Bool) 4152124569U))))))));
                    }
                    arr_99 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((1058787961) / (((/* implicit */int) (unsigned char)253))));
                }
                var_49 = ((/* implicit */_Bool) ((((((((/* implicit */int) (short)-32438)) >= (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [11ULL] [i_1])))) ? (((/* implicit */unsigned long long int) (~(-2929568527035413824LL)))) : (((((/* implicit */_Bool) var_9)) ? (arr_79 [(short)11] [(short)11] [i_1] [i_0] [(short)11]) : (((/* implicit */unsigned long long int) 0LL)))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [(short)12] [i_0 + 1] [i_0] [i_1 - 2] [i_1 - 2])) - (((/* implicit */int) arr_11 [(unsigned char)20] [i_0 - 1] [i_1] [i_1 - 1] [(unsigned char)4])))))));
            }
        } 
    } 
}
