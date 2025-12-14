/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24540
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (var_14)));
                        var_21 *= ((/* implicit */signed char) max((((/* implicit */int) ((1513463217U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3 + 3] [i_2] [i_3] [i_2])))))), (((((/* implicit */int) arr_11 [i_3 + 3] [i_3] [i_3] [i_0])) - (((/* implicit */int) (short)32736))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 1; i_5 < 12; i_5 += 2) 
                        {
                            arr_19 [i_0] [i_2] [i_2] [i_2] [i_4] [i_5 + 2] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((arr_16 [i_2] [i_5] [i_5] [i_5] [i_5] [i_5 + 1]) != (((/* implicit */int) (unsigned short)9073))))), (((long long int) arr_9 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_2]))));
                            var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)32724))))) && (((/* implicit */_Bool) (signed char)(-127 - 1)))))), (max((arr_9 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5] [i_5 - 1] [i_2]), (arr_9 [i_5] [i_5] [i_5 - 1] [i_5] [i_5] [i_2])))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (short)-32724)), (2107346151967251460ULL))))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-32736)) / (((/* implicit */int) (short)-24477))));
                        }
                        for (unsigned short i_6 = 2; i_6 < 10; i_6 += 1) 
                        {
                            var_25 += ((/* implicit */unsigned short) arr_14 [i_0 - 1] [i_2] [i_2]);
                            arr_24 [i_0 - 3] [i_2] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)49438))) | (-3251510242305259324LL)));
                        }
                        for (signed char i_7 = 4; i_7 < 13; i_7 += 3) 
                        {
                            var_26 += ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)73))) : (338634034U)))) ? ((+(((/* implicit */int) var_14)))) : (((/* implicit */int) ((signed char) arr_0 [i_1])))));
                            var_27 = ((/* implicit */unsigned int) ((14186004500320187739ULL) * (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-74))))) ? (min((((/* implicit */unsigned long long int) 1069547520)), (272678883688448ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
                            arr_27 [i_0] [i_0] [i_2] [i_4] [i_7] = ((/* implicit */_Bool) (+(max((((4260739573389363873ULL) * (((/* implicit */unsigned long long int) arr_17 [i_2] [i_4] [i_2] [i_2] [i_1] [i_0] [i_2])))), (((/* implicit */unsigned long long int) (short)-24477))))));
                        }
                        var_28 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned short)52442)), (((((2ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9066)))))));
                    }
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) min((((arr_16 [i_1] [i_0] [i_0] [i_0 + 1] [i_2] [i_0]) - (((/* implicit */int) var_14)))), ((+(1069547504))))))));
                        arr_30 [i_2] = ((/* implicit */long long int) ((int) arr_28 [i_8] [i_1] [i_1] [i_0]));
                    }
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_21 [i_0 - 2] [i_0 - 3] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]), (arr_21 [i_1] [i_0 - 2] [i_0 - 3] [i_0 + 1] [i_0 - 2] [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)95), (arr_21 [i_1] [i_0] [i_0 - 1] [i_0 - 3] [i_0] [i_0 - 2]))))) : (((18014394214514688ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1] [i_0] [i_0 - 2] [i_0 - 1] [i_0] [i_0]))))))))));
                    arr_31 [i_0 - 2] [i_2] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_2] [i_0])))) + (((/* implicit */int) ((arr_15 [i_0] [i_0] [i_2]) <= (var_13))))))), (9223372036854775785LL)));
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) 2420875743U))));
                }
                /* vectorizable */
                for (long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */int) (short)28672)) * (((/* implicit */int) (_Bool)1)))))));
                        arr_37 [i_0 - 1] [i_0 - 1] [i_9] [i_10] = ((/* implicit */signed char) (short)-23609);
                        var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_26 [i_0 + 1]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 2; i_11 < 12; i_11 += 4) 
                    {
                        for (int i_12 = 0; i_12 < 14; i_12 += 1) 
                        {
                            {
                                arr_44 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_23 [i_12] [i_11] [i_11] [i_9] [i_11] [i_0]);
                                var_34 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_11])) % ((+(((/* implicit */int) (short)-32725))))));
                                arr_45 [i_0 - 3] [i_1] [i_1] [i_1] [i_12] = ((((/* implicit */_Bool) (short)9120)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_16)));
                            }
                        } 
                    } 
                    arr_46 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 - 3])));
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 2; i_13 < 12; i_13 += 1) 
                    {
                        arr_49 [i_0 - 1] [i_0 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_16 [i_1] [i_13 - 1] [i_13] [i_13] [i_1] [i_13]) : (((/* implicit */int) (unsigned short)31))));
                        var_35 = ((/* implicit */unsigned char) ((unsigned short) ((arr_40 [i_13] [i_9] [i_1] [i_1] [i_0 + 1]) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) var_8)))));
                        /* LoopSeq 2 */
                        for (long long int i_14 = 3; i_14 < 11; i_14 += 1) 
                        {
                            var_36 = ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_14 - 1] [i_14 + 1] [i_14] [i_14 + 3] [i_14 - 2] [i_1]))));
                            var_37 = ((/* implicit */_Bool) max((var_37), ((_Bool)1)));
                        }
                        for (unsigned short i_15 = 0; i_15 < 14; i_15 += 2) 
                        {
                            arr_55 [i_15] [i_0] [i_9] [i_1] [i_0] = ((/* implicit */unsigned int) (((-2147483647 - 1)) < (((/* implicit */int) arr_25 [i_13 - 2] [i_13 - 2] [i_13 + 1] [i_13 + 1] [i_13 - 1]))));
                            arr_56 [i_0] [i_1] [i_9] [i_9] [i_13] [i_15] = ((3ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0])) : (var_6)))));
                        }
                    }
                    for (unsigned char i_16 = 2; i_16 < 13; i_16 += 3) 
                    {
                        arr_59 [i_16] [i_16] [i_16] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) -1116283653)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_60 [i_0 + 1] = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_4)))) / (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_0 [i_0])))))));
                        var_38 = ((/* implicit */unsigned short) ((int) -3165302741117055749LL));
                        var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_10))) != (arr_36 [i_0 + 1]))))));
                        arr_61 [i_0] [i_0] [i_1] [i_0] [i_9] [i_16] = ((/* implicit */long long int) arr_51 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0]);
                    }
                }
                var_40 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_5) - (((((/* implicit */long long int) ((/* implicit */int) var_18))) / (var_12)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0 - 3] [i_0 - 2]))) == (arr_53 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0])))) : (-271383303)));
            }
        } 
    } 
    var_41 = max((((/* implicit */long long int) var_19)), (var_5));
    /* LoopSeq 1 */
    for (signed char i_17 = 0; i_17 < 24; i_17 += 3) 
    {
        var_42 ^= ((/* implicit */long long int) ((((arr_62 [12ULL]) < (arr_62 [10]))) || (((/* implicit */_Bool) -2516041292220353900LL))));
        var_43 |= ((/* implicit */signed char) ((max((((((/* implicit */_Bool) 1069547486)) ? (var_17) : (((/* implicit */int) (unsigned short)34130)))), (arr_62 [14ULL]))) / (-1185024872)));
        arr_64 [i_17] = ((/* implicit */unsigned char) (unsigned short)9085);
    }
    var_44 = ((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_15))) / (max((var_5), (-3165302741117055754LL))))));
}
