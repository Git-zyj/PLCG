/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190539
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 + 3])) % (((/* implicit */int) arr_2 [i_0]))))) && (((/* implicit */_Bool) 7U))));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_0 - 3]), (((/* implicit */unsigned char) arr_0 [i_0 - 3]))))) ? (min((((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (0LL))), (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0 + 3]))))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [3U]))))) - (max((((/* implicit */unsigned int) var_12)), (2585642076U))))))));
        var_14 *= (~(((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) arr_0 [(unsigned short)14]))))) ? (var_8) : (max((arr_1 [i_0]), (92398078U))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        for (short i_2 = 2; i_2 < 23; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        arr_14 [i_1] [i_2] [i_4] = ((((/* implicit */_Bool) (-(((var_8) ^ (arr_9 [i_2 - 1] [i_2] [(short)8])))))) ? (((/* implicit */int) ((arr_11 [2LL] [2LL]) > (((/* implicit */unsigned int) var_0))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_1])) ? (var_7) : (((/* implicit */unsigned long long int) 125829120U)))))));
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-77))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_0)) % (var_8)))), (((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 - 2]))))))) : (((/* implicit */unsigned long long int) min((arr_12 [i_2 - 1] [i_2] [i_2] [i_2 + 1] [i_2 - 1]), (arr_5 [i_2 - 2])))))))));
                        arr_15 [16LL] [i_1] [i_1] [16LL] [i_1] = arr_6 [i_1];
                        var_16 = ((/* implicit */unsigned int) (-(var_7)));
                    }
                    arr_16 [i_1] [13LL] = ((/* implicit */unsigned short) (-((~((-(((/* implicit */int) (unsigned short)56534))))))));
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 1; i_6 < 21; i_6 += 2) 
                        {
                            arr_22 [i_1] [i_2 - 2] [i_3] [i_5] [i_6] [i_6 + 3] [i_6 - 1] = arr_11 [i_3] [i_2];
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)19)) ? (1023U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                        }
                        var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_20 [(short)8] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_12 [(unsigned char)6] [i_2] [i_2] [i_2] [i_2 - 2])) : (var_9))))), (max((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) arr_11 [i_2] [i_5]))))), (var_9)))));
                        var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2])))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)239))))) : (max((((/* implicit */unsigned long long int) arr_10 [(short)9] [i_2] [i_3])), (var_7)))))) ? (((((((/* implicit */_Bool) arr_11 [i_1] [i_1])) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) arr_7 [i_1] [i_1])))) ^ (((/* implicit */int) max((arr_4 [21ULL]), (arr_7 [i_2] [6U])))))) : ((+(((/* implicit */int) arr_18 [i_1] [i_2 - 1] [i_3] [i_5]))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 1; i_7 < 23; i_7 += 4) 
                        {
                            arr_25 [(short)5] [0ULL] [i_3] [3] [i_7 + 1] = ((/* implicit */unsigned char) arr_24 [i_1] [(signed char)17] [8] [i_7 + 1] [i_7] [i_5]);
                            arr_26 [i_2 - 1] [i_2] [i_2] [(signed char)16] [9] [i_2 + 1] = ((/* implicit */short) min((((/* implicit */unsigned char) (signed char)13)), ((unsigned char)146)));
                            var_20 = ((/* implicit */int) ((signed char) var_7));
                        }
                        for (signed char i_8 = 1; i_8 < 20; i_8 += 4) 
                        {
                            arr_31 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)511)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_8] [i_8 + 3] [i_8] [i_8 + 2] [i_2 + 1] [11LL])) ? (var_8) : (var_8)))) : (((long long int) arr_9 [i_8 - 1] [(short)0] [i_2 + 1]))));
                            arr_32 [15U] [i_8] [i_3] [i_3] [i_2 - 1] [i_8] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1419107203)) && (((/* implicit */_Bool) (signed char)-74))));
                        }
                        arr_33 [i_2] [i_1] [i_3] [i_1] [i_3] [i_1] = ((/* implicit */short) arr_28 [i_1] [8LL] [i_2]);
                    }
                    for (int i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) max((var_21), (min((((/* implicit */int) (signed char)66)), ((~(((/* implicit */int) arr_29 [i_2 - 2] [i_2] [i_2] [i_2] [i_2 - 1]))))))));
                        var_22 = ((/* implicit */int) min((min(((+(var_7))), (((((/* implicit */_Bool) var_5)) ? (6962152235310344199ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_9]))))))), (9626444336124312555ULL)));
                        arr_37 [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_18 [i_2 - 2] [i_2 - 2] [(unsigned char)3] [i_1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) : (var_7))), (var_9)));
                    }
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        arr_41 [i_1] [8] [8] [(signed char)1] = ((/* implicit */unsigned int) min((var_11), (((/* implicit */long long int) ((min((arr_23 [i_1] [i_1] [i_3]), (((/* implicit */unsigned int) arr_28 [i_1] [i_1] [i_10])))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_2] [i_2 - 2] [i_3] [(short)3] [i_3]))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 2; i_11 < 20; i_11 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) (~(min((max((((/* implicit */int) (signed char)-51)), (2147483647))), (((/* implicit */int) (unsigned char)146))))));
                            var_24 += ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(var_8)))) && (((/* implicit */_Bool) ((unsigned short) var_5))))) ? (var_2) : (((((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned char) arr_13 [i_1] [i_2] [i_1] [(signed char)22] [i_10] [i_11])))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) & (arr_20 [i_3] [(signed char)9] [i_3] [i_3] [i_3] [i_3])))))));
                        }
                        var_25 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_34 [i_3])), (arr_23 [i_1] [i_3] [i_10])))) ? (max((((/* implicit */long long int) var_0)), (arr_10 [i_1] [i_3] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)146)), (arr_45 [i_1] [7ULL] [(signed char)10] [i_1] [i_1])))))))));
                        var_26 = ((/* implicit */short) (-(((/* implicit */int) ((var_7) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_1] [i_1] [i_1] [i_2 - 2] [i_3] [i_10]))))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_12 = 1; i_12 < 22; i_12 += 4) 
                    {
                        for (int i_13 = 0; i_13 < 24; i_13 += 4) 
                        {
                            {
                                arr_52 [i_1] [i_2] [(signed char)21] [i_1] = ((unsigned int) arr_38 [(signed char)18] [13U] [i_3] [i_12] [i_13]);
                                arr_53 [i_1] [i_2] [i_2] [i_12 - 1] [i_13] = ((/* implicit */signed char) arr_38 [i_3] [(short)22] [i_3] [(short)22] [i_13]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned char) ((signed char) var_0));
    var_28 *= ((/* implicit */unsigned int) min((var_3), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) (short)-17374)))))))));
}
