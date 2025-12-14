/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233077
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
    var_12 -= ((/* implicit */short) var_7);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_12 [(_Bool)0] [i_0] = (unsigned char)0;
                        arr_13 [i_0] [i_1] [i_0] [i_0] = ((min((arr_9 [i_0] [i_1] [i_2] [i_2 + 2] [i_3]), (((/* implicit */unsigned long long int) var_5)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_1)), ((unsigned char)255))))));
                        /* LoopSeq 4 */
                        for (short i_4 = 3; i_4 < 13; i_4 += 3) 
                        {
                            var_13 = ((/* implicit */unsigned long long int) var_9);
                            var_14 = ((/* implicit */unsigned char) var_1);
                            var_15 = ((/* implicit */unsigned short) arr_10 [i_4] [(_Bool)1] [i_4] [i_0]);
                        }
                        for (signed char i_5 = 3; i_5 < 13; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (min((var_3), (((/* implicit */unsigned int) (signed char)26)))) : (var_3)));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_1 [(signed char)6]))));
                            var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3304330702U)) || (((/* implicit */_Bool) var_8))));
                            arr_18 [12ULL] [i_5] [6U] [4] [i_1] [i_1 - 1] [12ULL] &= ((/* implicit */unsigned char) ((unsigned int) ((signed char) var_1)));
                        }
                        for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 1) 
                        {
                            var_19 = ((((unsigned int) var_8)) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (unsigned char)32))))));
                            var_20 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) arr_5 [i_0] [(_Bool)0] [(unsigned char)0]))))));
                            var_21 ^= (+(2550757896U));
                        }
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            arr_25 [i_7] [i_3] [i_0] [i_0] [(unsigned char)6] [i_0] = ((/* implicit */unsigned long long int) (signed char)-69);
                            arr_26 [i_0] [i_1] [i_0] [i_3] [i_7] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)-69)))) > (((((/* implicit */unsigned long long int) min((990636593U), (((/* implicit */unsigned int) (unsigned char)243))))) / (arr_9 [i_0] [i_1 + 1] [1U] [i_3] [i_7])))));
                        }
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((unsigned int) ((long long int) min(((unsigned short)44100), (((/* implicit */unsigned short) var_2)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            for (int i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                {
                    var_23 |= ((unsigned long long int) ((short) var_4));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        var_24 &= ((((/* implicit */_Bool) (short)-26204)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (9223372036854775791LL)))) : (((/* implicit */int) arr_11 [i_9] [i_0] [i_8] [i_9])));
                        var_25 = ((/* implicit */signed char) ((_Bool) var_10));
                        var_26 = ((/* implicit */unsigned int) var_5);
                        arr_33 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((signed char) var_8))) << (((/* implicit */int) var_9))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)66)) ? (3042000710U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        arr_36 [i_8] [i_0] = ((/* implicit */_Bool) (unsigned char)255);
                        /* LoopSeq 3 */
                        for (unsigned char i_12 = 2; i_12 < 13; i_12 += 1) 
                        {
                            arr_39 [i_0] [i_11] [(unsigned short)13] [(unsigned char)9] [i_9] [(unsigned char)0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_16 [i_11] [i_12] [i_12 - 2] [2] [i_12])));
                            arr_40 [i_0] [i_0] [(signed char)5] = (signed char)43;
                        }
                        for (unsigned int i_13 = 1; i_13 < 11; i_13 += 3) 
                        {
                            var_28 -= ((/* implicit */unsigned int) ((_Bool) 0U));
                            arr_44 [i_0] [i_8] [i_8] [i_8] [i_8] [i_0] = ((/* implicit */signed char) (_Bool)1);
                            arr_45 [i_0] [i_0] [i_8] [i_9] [i_11] [i_0] = ((/* implicit */int) ((_Bool) arr_29 [i_13 + 3]));
                            arr_46 [i_0] [i_8] [(signed char)8] [i_0] [(signed char)0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) > (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_7)))));
                        }
                        for (unsigned char i_14 = 0; i_14 < 14; i_14 += 4) 
                        {
                            var_29 = ((/* implicit */signed char) ((unsigned long long int) arr_24 [i_0] [2] [i_9] [(signed char)13] [6ULL]));
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) 7911058874449511165LL))));
                            arr_49 [i_14] [i_0] [12ULL] = ((/* implicit */int) 3852300048U);
                            var_31 = ((/* implicit */unsigned int) ((signed char) arr_23 [i_0] [13ULL] [i_9] [i_11] [i_14] [(unsigned short)4]));
                            var_32 ^= ((/* implicit */int) arr_42 [i_0]);
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_33 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0] [i_8] [i_9] [i_11] [i_15])) < (((/* implicit */int) (unsigned char)31))));
                            arr_52 [(signed char)8] [i_8] [i_9] [i_0] = ((/* implicit */_Bool) (unsigned char)255);
                        }
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            arr_55 [i_0] [i_0] [i_0] [i_9] [i_11] [7U] = ((/* implicit */signed char) ((long long int) (_Bool)1));
                            var_34 &= ((/* implicit */short) var_0);
                            var_35 *= var_8;
                            var_36 = ((/* implicit */unsigned char) var_10);
                        }
                    }
                    var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) var_1))));
                    arr_56 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2444237176U)) ? (((/* implicit */int) (short)-2992)) : (((/* implicit */int) (unsigned char)23))))), (min((1850730111U), (2447759865U)))));
                }
            } 
        } 
        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((unsigned long long int) 588965757)))));
        var_39 |= ((/* implicit */unsigned int) (signed char)(-127 - 1));
    }
}
