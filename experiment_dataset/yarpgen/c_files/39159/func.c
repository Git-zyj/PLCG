/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39159
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
    var_18 = (((_Bool)0) ? (((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned char) var_1)), ((unsigned char)5))))))) : (((max((var_10), (((/* implicit */unsigned int) (unsigned short)45250)))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32099))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_1] [2LL] &= ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_0 [i_0] [i_1]))))));
                arr_6 [i_1] |= ((/* implicit */long long int) var_9);
                arr_7 [i_0] = (-(arr_4 [i_1] [i_0] [i_1]));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_3 [i_0] [i_0]);
                    arr_12 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_9 [i_0] [i_0] [2LL] [(unsigned char)12]))));
                    arr_13 [3U] [i_1] [i_0] = ((/* implicit */unsigned char) var_1);
                }
                for (short i_3 = 4; i_3 < 12; i_3 += 2) 
                {
                    arr_16 [i_0] [i_3 - 3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_3 + 1] [i_3 + 1])) * (((/* implicit */int) (unsigned short)33448)))) == (((/* implicit */int) arr_1 [i_0] [i_0]))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        arr_19 [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))));
                        arr_20 [i_0] = ((/* implicit */_Bool) arr_14 [i_3 - 4] [i_3 - 4] [i_3 - 1]);
                        arr_21 [i_0] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)32758))))) ? (((((/* implicit */int) arr_10 [i_0] [i_0] [i_3] [i_4])) / (((/* implicit */int) (unsigned short)32087)))) : (((/* implicit */int) arr_10 [i_3 + 1] [i_0] [i_3 - 4] [i_3 + 1]))));
                        arr_22 [i_0] [i_0] [i_1] [i_3 - 4] [10U] [i_4] = ((/* implicit */unsigned long long int) arr_4 [i_3 - 4] [i_3 + 2] [i_3 - 1]);
                        arr_23 [i_0] [i_0] = (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_4 [i_0] [i_1] [i_0]) : (((/* implicit */int) var_1)))));
                    }
                    for (signed char i_5 = 3; i_5 < 13; i_5 += 2) 
                    {
                        arr_28 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) (((+(((/* implicit */int) arr_2 [i_5])))) * (((/* implicit */int) (_Bool)1)))));
                        arr_29 [i_3] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) (unsigned short)32092);
                        arr_30 [i_1] [i_1] [i_3 + 1] [i_3] [i_5 - 3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)27414)) : (((/* implicit */int) arr_25 [i_0] [(unsigned short)3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)192)) >> (((((/* implicit */int) (unsigned char)245)) - (235)))))) : (arr_24 [(unsigned char)2] [(unsigned char)2] [i_3] [1ULL]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_3]))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */int) ((((/* implicit */int) ((short) 4294967295U))) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32087)))))))) : (((/* implicit */int) arr_25 [i_0] [i_6]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 2; i_7 < 11; i_7 += 4) 
                        {
                            arr_36 [i_7] [i_7] [i_7] [i_1] |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_34 [i_7] [i_7 + 2] [i_7 - 2] [i_7] [i_7 + 2]))));
                            arr_37 [i_0] [i_0] [i_3] [i_6] [i_6] [i_3] = ((/* implicit */short) arr_8 [i_0] [i_0] [i_3]);
                            arr_38 [i_7] [(unsigned short)10] [i_7] [6U] [i_7 + 3] [i_7] [i_7] = ((/* implicit */unsigned long long int) (-(arr_18 [i_7 + 1] [i_7 + 3] [i_7 + 1] [i_7 - 2] [i_7])));
                        }
                        arr_39 [i_1] [i_1] [i_1] [i_1] [i_6] [(signed char)0] = ((/* implicit */short) ((((((((/* implicit */int) arr_1 [i_0] [i_3])) != (((/* implicit */int) var_14)))) ? (((/* implicit */int) (unsigned short)32092)) : ((~(arr_4 [i_0] [7U] [i_0]))))) / (((/* implicit */int) var_0))));
                    }
                }
                for (short i_8 = 2; i_8 < 13; i_8 += 4) 
                {
                    arr_42 [i_1] [(signed char)2] [(signed char)2] = ((/* implicit */unsigned char) var_3);
                    /* LoopSeq 2 */
                    for (long long int i_9 = 3; i_9 < 11; i_9 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_10 = 4; i_10 < 13; i_10 += 2) 
                        {
                            arr_48 [i_1] [i_10] = ((/* implicit */long long int) arr_18 [i_0] [i_9 - 2] [i_10 - 4] [i_9 + 1] [i_10]);
                            arr_49 [i_10 - 2] [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned short)45261);
                        }
                        for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                        {
                            arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = min((min((max((((/* implicit */long long int) (unsigned short)65528)), (var_15))), (((/* implicit */long long int) (signed char)-118)))), (((/* implicit */long long int) (+(((/* implicit */int) arr_43 [i_8] [i_8] [i_8 - 1] [i_8]))))));
                            arr_54 [i_8] [i_8] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)32099))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_1] [i_11] [i_9]))) : (var_10)))) : (var_8))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_8 - 2] [i_9] [i_9 + 1]))) <= (((((/* implicit */_Bool) arr_24 [i_1] [i_8] [(short)4] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_0] [i_1] [i_8] [i_8 - 2] [i_9] [(unsigned char)13] [i_11]))) : (arr_52 [i_0] [i_1] [i_11] [(_Bool)1] [i_11])))))))));
                            arr_55 [i_1] &= ((/* implicit */int) 4294967295U);
                        }
                        arr_56 [6U] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (short)32760);
                    }
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_59 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33432))) : (arr_46 [i_0] [i_0] [i_1] [i_0] [i_0]))) | ((-(var_8)))));
                        arr_60 [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) var_2);
                        arr_61 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)183)) ? (arr_44 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_0])))))));
                    }
                    arr_62 [i_0] [i_1] [(short)0] = ((/* implicit */long long int) ((unsigned char) max((((((var_3) + (2147483647))) >> (((/* implicit */int) (short)0)))), ((-(((/* implicit */int) arr_3 [i_8 + 1] [i_8 + 1])))))));
                    arr_63 [i_8] [i_8] = ((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1] [i_1] [i_8]);
                    arr_64 [i_8] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) arr_15 [i_0]);
                }
                for (int i_13 = 1; i_13 < 11; i_13 += 2) 
                {
                    arr_69 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_41 [i_0]);
                    arr_70 [i_1] = ((/* implicit */short) (+((+(-1837706886)))));
                    arr_71 [i_1] &= ((/* implicit */short) ((((/* implicit */int) (unsigned char)68)) ^ (((/* implicit */int) (unsigned short)32087))));
                    arr_72 [i_0] [i_1] [i_1] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? ((+(arr_46 [i_1] [i_0] [i_1] [i_13 + 1] [i_13]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_13 + 2] [i_1] [i_13 + 2] [i_13 + 1])))));
                    arr_73 [i_13] [i_1] [i_13 + 3] = ((/* implicit */int) (unsigned char)138);
                }
            }
        } 
    } 
    var_19 = (unsigned char)227;
    var_20 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) ((unsigned short) (_Bool)1)))))));
}
