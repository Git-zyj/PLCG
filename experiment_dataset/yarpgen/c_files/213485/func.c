/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213485
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
    var_10 = ((/* implicit */long long int) var_9);
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min((((/* implicit */unsigned int) ((unsigned char) -4144097560091775495LL))), (var_3)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1] [i_0 + 1])) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) var_0))));
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            var_12 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (_Bool)1)) <= (365937126)))));
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((var_2) <= (var_2)))) : (((/* implicit */int) arr_11 [i_0 + 3] [i_0 + 2] [i_0 + 4] [i_0 + 4]))));
                            var_14 |= ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0 + 4]);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1] |= ((/* implicit */long long int) var_8);
                            var_15 = 1812975119844296409LL;
                        }
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (-(((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_6])))))));
                            arr_19 [i_0 + 4] [(unsigned short)2] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_1);
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                for (unsigned char i_9 = 1; i_9 < 19; i_9 += 4) 
                {
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (+(var_9))))));
                        var_18 -= ((((/* implicit */_Bool) arr_22 [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9 - 1])) ? (((/* implicit */int) arr_25 [i_0 - 1] [i_9 + 1] [i_9] [i_9])) : (((/* implicit */int) arr_22 [i_9] [i_9 + 1] [i_9 - 1] [i_9])));
                    }
                } 
            } 
            arr_28 [i_0 + 1] [i_7] = -162966863;
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)6610))) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 3] [i_0 + 2] [i_0 + 4] [16U]))) : (((var_6) + (var_5)))));
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((var_2) == (((/* implicit */unsigned long long int) (+(2200941414U)))))))));
            arr_29 [i_0] = arr_13 [i_0] [i_7] [i_0] [i_0] [i_0 - 1];
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            /* LoopSeq 3 */
            for (long long int i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_9)) : (var_3)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_4))) | (-3332395325807836517LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_0 [i_10])))))));
                /* LoopSeq 1 */
                for (signed char i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 266287972352LL)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)207))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_6)))));
                        var_23 = ((/* implicit */_Bool) 9007194959773696LL);
                        var_24 = ((/* implicit */short) ((var_5) != (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                    }
                    var_25 = ((((/* implicit */int) var_0)) & (((/* implicit */int) arr_14 [i_0 + 4] [i_12] [i_12])));
                    arr_39 [i_0] [i_0] [i_11] [i_10] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_12] [i_10])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_14 [i_0] [i_12] [14U]))))) & (((5091725948707456008ULL) & (((/* implicit */unsigned long long int) 804680957)))));
                }
            }
            for (long long int i_14 = 0; i_14 < 20; i_14 += 2) /* same iter space */
            {
                var_26 *= ((/* implicit */signed char) (_Bool)1);
                arr_43 [i_14] [i_14] [i_14] = ((/* implicit */signed char) var_2);
            }
            for (long long int i_15 = 0; i_15 < 20; i_15 += 2) /* same iter space */
            {
                arr_46 [i_10] &= ((int) ((((/* implicit */_Bool) var_2)) ? (arr_41 [i_0] [i_10] [i_15]) : (((/* implicit */unsigned long long int) arr_44 [i_0 + 2] [i_10] [i_15]))));
                /* LoopSeq 2 */
                for (short i_16 = 1; i_16 < 18; i_16 += 4) 
                {
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (!(((((/* implicit */int) var_4)) == (((/* implicit */int) arr_31 [i_0] [i_10] [i_16])))))))));
                    var_28 = ((/* implicit */long long int) var_3);
                    arr_51 [i_0 + 2] [i_0 + 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) (_Bool)0)) : (-365937127)))) ? (((((/* implicit */_Bool) 9007194959773696LL)) ? (1U) : (((/* implicit */unsigned int) (-2147483647 - 1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                    arr_52 [i_0 + 4] [(_Bool)1] [i_10] [i_15] [1LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned int) var_7))));
                }
                for (int i_17 = 0; i_17 < 20; i_17 += 2) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_18 = 0; i_18 < 20; i_18 += 2) 
                    {
                        var_29 = ((/* implicit */long long int) ((var_2) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_18] [i_10])))))))));
                        var_30 |= ((/* implicit */_Bool) (+(var_2)));
                    }
                    for (short i_19 = 0; i_19 < 20; i_19 += 3) 
                    {
                        arr_60 [i_0] [i_10] [i_19] [i_17] [i_19] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) == ((-(var_5)))));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) <= (((/* implicit */int) (unsigned char)97)))) ? (((/* implicit */int) ((short) (signed char)1))) : (((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_9 [i_0] [i_10])))))))));
                        arr_61 [i_0 + 3] [i_19] [i_19] [i_17] [i_19] = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0 + 1] [i_0 - 1] [i_0 + 4] [i_0 + 3] [i_0 + 2])) & (((/* implicit */int) arr_12 [i_0 + 4] [i_0 + 2] [i_0 + 2] [i_0] [i_0 - 1]))));
                        var_32 = ((/* implicit */int) ((short) var_8));
                    }
                    for (unsigned int i_20 = 0; i_20 < 20; i_20 += 4) 
                    {
                        arr_64 [i_0] [i_0 - 1] [i_10] [i_15] [i_0 - 1] [i_0 - 1] [i_20] = ((/* implicit */_Bool) var_6);
                        var_33 = var_6;
                        arr_65 [i_0] [i_0 + 3] [i_15] [i_0] [i_10] [i_10] [i_10] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (985346479U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (1607576864))))));
                        arr_66 [i_0] [i_10] [i_15] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)1)) - (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 4294967295U)))) : (((((/* implicit */_Bool) (unsigned char)157)) ? (-9007194959773696LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_34 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_17 [i_10]))))) & (arr_24 [i_0 + 4])));
                    }
                    for (long long int i_21 = 0; i_21 < 20; i_21 += 3) 
                    {
                        arr_70 [i_0 + 4] [i_0] [i_0] [i_0 - 1] [i_0 + 4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_0 + 4] [i_0 + 2] [i_0]))) & (var_3)));
                        arr_71 [3U] [i_10] [i_15] [i_17] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_21] [i_17] [i_10])) ? (var_6) : (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */int) ((((/* implicit */int) arr_20 [i_10])) <= (((/* implicit */int) var_1))))) : (((/* implicit */int) ((unsigned short) var_0)))));
                        var_35 = ((/* implicit */long long int) var_8);
                    }
                    var_36 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-2))));
                    arr_72 [i_0 + 2] [i_15] [i_15] [i_17] = ((/* implicit */unsigned int) (+(var_9)));
                }
                arr_73 [i_10] [i_15] = ((/* implicit */unsigned int) var_9);
                arr_74 [i_15] [i_10] = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) var_2)))));
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 20; i_22 += 4) 
                {
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) var_3);
                            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_15])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (int i_24 = 0; i_24 < 20; i_24 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_25 = 0; i_25 < 20; i_25 += 2) 
                {
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 15830332958337528744ULL)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) arr_76 [i_0 + 3] [(unsigned short)7] [i_24] [i_26]))))));
                            arr_90 [14ULL] [i_25] [i_24] [i_10] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))));
                            var_40 = ((/* implicit */unsigned short) arr_6 [i_0 + 4] [i_24] [i_25] [i_26]);
                        }
                    } 
                } 
                var_41 ^= ((/* implicit */long long int) (+(arr_80 [i_0 + 1] [i_10] [i_24] [i_24] [i_10])));
            }
            for (unsigned short i_27 = 0; i_27 < 20; i_27 += 2) 
            {
                var_42 = ((/* implicit */unsigned char) ((arr_59 [i_0 + 1] [i_10] [i_10] [i_27] [i_27] [i_0 + 4] [i_10]) != (((arr_11 [i_0 + 3] [i_10] [i_27] [i_27]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_6)))));
                var_43 = ((/* implicit */_Bool) arr_15 [i_0] [i_0 + 1] [i_0] [(_Bool)1] [i_0] [i_27]);
                arr_93 [i_27] [i_10] [16U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_37 [i_0 + 4] [i_0 + 2] [(unsigned char)12] [i_10] [i_0 + 3])) : (((/* implicit */int) (signed char)-20))));
            }
        }
    }
    /* vectorizable */
    for (unsigned int i_28 = 0; i_28 < 12; i_28 += 2) 
    {
        arr_97 [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) var_6)) != (-7363519556242881087LL)))) <= ((+(((/* implicit */int) var_8))))));
        var_44 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_28] [i_28] [i_28] [i_28]))) : (var_3));
        var_45 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_24 [i_28])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15))))));
        arr_98 [i_28] = ((/* implicit */unsigned int) var_0);
    }
}
