/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48329
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
    var_13 &= ((/* implicit */short) var_11);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_6 [i_2] [i_1] [(short)3] = ((/* implicit */unsigned long long int) (-(min((((((/* implicit */int) arr_1 [i_1])) >> (((/* implicit */int) arr_3 [i_0] [i_0])))), (((/* implicit */int) arr_3 [i_2] [i_2]))))));
                    arr_7 [(unsigned char)24] [(unsigned char)24] [(unsigned char)24] [i_1] = ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) (signed char)-115))), (((((/* implicit */int) (signed char)112)) >> (((((/* implicit */int) arr_0 [(unsigned short)8])) - (45350)))))))) ? (((((long long int) (unsigned short)44679)) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)115))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_2]))))));
                    arr_8 [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)11042)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)64343)) - (arr_2 [i_0])))) : (((((/* implicit */_Bool) -9072025446900540216LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65470))) : ((-9223372036854775807LL - 1LL))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_14 = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_0 [i_0]))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) arr_2 [i_2]);
                            arr_14 [1ULL] [i_3] [i_3] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((-9072025446900540222LL) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)44667))))));
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_0] [(_Bool)1] [i_1] [i_5] [i_3] = ((/* implicit */int) ((_Bool) arr_3 [i_0] [i_0]));
                            var_15 = ((/* implicit */short) ((unsigned short) arr_3 [i_0] [i_5]));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 3; i_6 < 23; i_6 += 2) 
                        {
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (-(((((/* implicit */int) arr_10 [i_6 - 1] [6] [i_2] [6] [i_6])) - (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_2] [i_6])))))))));
                            var_17 *= ((/* implicit */unsigned char) arr_21 [i_0] [i_2] [i_2] [i_0] [i_1] [i_2] [i_6]);
                            var_18 -= ((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6 - 3] [i_6] [i_6 - 2])) ? (((/* implicit */int) arr_10 [i_6 + 1] [i_6] [i_6 + 1] [i_6 - 1] [i_6 + 2])) : (((/* implicit */int) arr_10 [i_6] [i_6] [i_6 - 3] [i_6 + 1] [i_6 - 3])));
                        }
                        arr_22 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((short) ((unsigned long long int) arr_15 [i_1] [i_1] [i_1])));
                        var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) ((min((4503599627370495LL), (((/* implicit */long long int) arr_1 [i_1])))) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) arr_16 [i_0] [(signed char)22] [(signed char)22] [i_3] [i_3] [(signed char)22])) - (21920))))))))) ? (((/* implicit */int) (short)27064)) : (((arr_1 [i_3]) ? (((/* implicit */int) arr_19 [i_2] [i_3] [i_2])) : (((/* implicit */int) arr_1 [i_2]))))));
                        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [(unsigned short)10] [i_0] [i_0] [i_0])) >= (((/* implicit */int) arr_21 [i_0] [15ULL] [i_2] [i_2] [(short)4] [i_3] [i_3]))));
                    }
                    for (unsigned char i_7 = 2; i_7 < 22; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_30 [i_0] [(unsigned char)12] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((-4503599627370493LL) % (9072025446900540215LL)));
                            arr_31 [22] [22] [i_2] [i_7] [i_8] [i_2] = ((/* implicit */unsigned int) (short)-21643);
                        }
                        for (int i_9 = 3; i_9 < 22; i_9 += 3) 
                        {
                            arr_36 [i_0] [i_1] [i_0] [i_1] [i_9 - 3] = ((short) min((((/* implicit */long long int) (+(((/* implicit */int) (short)-14192))))), (((((/* implicit */long long int) arr_29 [i_0] [i_0])) ^ ((-9223372036854775807LL - 1LL))))));
                            var_21 = ((/* implicit */int) min(((-(arr_12 [i_0] [22] [i_7 - 1] [i_0] [i_9 + 3] [i_9]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)1193)))))));
                        }
                        arr_37 [i_0] [i_1] [i_2] [i_7] |= ((/* implicit */unsigned short) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    /* LoopSeq 2 */
                    for (int i_10 = 2; i_10 < 21; i_10 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) -4503599627370496LL);
                        arr_40 [i_10] [i_10] [i_10] [i_2] [i_10] [i_10] = ((/* implicit */long long int) arr_3 [i_0] [i_1]);
                        var_23 ^= ((/* implicit */unsigned char) (~(((((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) (unsigned char)206)))) ? (((/* implicit */int) arr_16 [2] [i_10 + 3] [i_2] [i_10 + 3] [i_1] [i_2])) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_10])) >= (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_1] [(short)19] [i_1] [i_0])))))))));
                    }
                    /* vectorizable */
                    for (signed char i_11 = 1; i_11 < 24; i_11 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_12 = 2; i_12 < 22; i_12 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) arr_20 [i_0] [i_1] [i_2] [i_11] [i_11 - 1] [i_12] [i_12 - 1])))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_0] [i_11] [i_0])) << (((arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) - (10191327145141256007ULL)))))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_2])) || (((/* implicit */_Bool) arr_16 [i_2] [14ULL] [i_2] [i_11 - 1] [i_0] [i_11])))))));
                        }
                        for (unsigned int i_13 = 0; i_13 < 25; i_13 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) arr_44 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_50 [i_0] [i_0] [i_0] [i_13] [i_0] = ((/* implicit */unsigned int) -1);
                        }
                        arr_51 [i_0] [i_1] [i_1] [i_2] [17LL] = (unsigned short)32093;
                        var_27 = ((/* implicit */short) ((((/* implicit */int) (signed char)48)) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) arr_15 [i_0] [i_0] [i_0])))))));
                        arr_52 [i_0] [i_0] [i_1] [i_0] [i_2] [i_11] = ((/* implicit */int) ((arr_44 [i_0] [i_1] [i_2] [(short)19] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)23760)) < (((/* implicit */int) (unsigned char)253))))))));
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_41 [i_11 - 1] [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1])) || (((/* implicit */_Bool) arr_43 [i_2] [i_2]))));
                    }
                }
            } 
        } 
    } 
}
