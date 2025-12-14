/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194672
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) arr_0 [(unsigned short)1]);
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_0 [i_0]))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_1 [i_0]))));
        var_19 += ((/* implicit */unsigned char) ((((arr_0 [i_0]) != (min((arr_0 [i_0]), (arr_0 [i_0]))))) && ((_Bool)0)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_4 [5U] [(_Bool)1] [i_1] = ((/* implicit */int) arr_2 [i_0] [i_1] [i_1]);
            arr_5 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_1 [i_1]);
            var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2U)))) != (arr_2 [i_0] [i_0] [(unsigned char)5])));
        }
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)60)) : (((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */int) (short)512)) : (((/* implicit */int) (unsigned short)127))))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                {
                    arr_12 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)48)))) ? (((arr_7 [i_4]) / (((/* implicit */int) var_15)))) : (((arr_7 [i_4]) % (arr_7 [i_2])))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) var_14);
                                var_23 = ((/* implicit */unsigned char) ((int) arr_15 [i_3] [i_5] [i_4] [i_3] [i_3]));
                                arr_17 [i_5] [i_3] [i_4] [(_Bool)1] [i_6] [0ULL] = ((/* implicit */unsigned char) ((max((arr_7 [i_6]), (((((arr_7 [i_2]) + (2147483647))) << (((((var_8) + (2110148401))) - (23))))))) / ((+(min((arr_13 [i_6] [i_3] [i_3] [i_2]), (arr_8 [i_5] [i_4])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((21ULL), (((/* implicit */unsigned long long int) var_8)))) % (arr_21 [(_Bool)1] [4] [4] [i_2] [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) arr_11 [i_2] [i_3] [i_2])), (arr_14 [i_7] [i_7] [i_2] [i_7])))))) : (((unsigned int) ((((/* implicit */_Bool) (unsigned char)67)) && (((/* implicit */_Bool) var_1))))))))));
                        var_25 = ((/* implicit */int) max((((/* implicit */long long int) arr_11 [i_3] [i_4] [i_3])), (((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2]))) * (min((((/* implicit */long long int) arr_19 [i_4] [i_4] [i_4] [(unsigned short)9])), (var_13)))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
                    {
                        arr_25 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */_Bool) var_2);
                        var_26 = ((/* implicit */long long int) min((var_3), (((/* implicit */short) ((unsigned char) ((arr_7 [i_8]) % (((/* implicit */int) arr_9 [i_3]))))))));
                        arr_26 [i_2] [i_3] [i_8] = ((/* implicit */short) min((((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)202)), (((unsigned short) arr_9 [i_3]))))), (min((((long long int) arr_16 [12LL])), (((((/* implicit */_Bool) (unsigned char)22)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)53)))))))));
                        arr_27 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) >= (((/* implicit */int) arr_18 [i_2] [i_2] [(unsigned char)9] [i_4] [i_4] [i_8]))));
                        arr_28 [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
                    {
                        var_27 ^= ((/* implicit */unsigned short) ((_Bool) max((min((((/* implicit */unsigned int) 2)), (var_4))), (((/* implicit */unsigned int) var_0)))));
                        /* LoopSeq 3 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_35 [i_2] [i_2] [i_4] [i_3] [i_10] [i_4] = ((/* implicit */unsigned long long int) ((4294967290U) << (0)));
                            var_28 = ((/* implicit */long long int) min((min((((/* implicit */int) arr_18 [i_10] [i_10] [i_9] [i_4] [i_3] [i_2])), ((-2147483647 - 1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_4] [i_4] [i_9] [(short)12])))))));
                            var_29 -= ((/* implicit */unsigned long long int) min((((arr_6 [i_2]) / (arr_6 [i_2]))), (((((/* implicit */_Bool) arr_32 [i_3] [i_3] [12ULL] [(unsigned short)2])) ? (arr_7 [i_2]) : (((/* implicit */int) arr_9 [i_2]))))));
                        }
                        for (short i_11 = 0; i_11 < 13; i_11 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned char) ((((arr_20 [i_11] [i_9] [i_4] [i_3] [i_2]) / (arr_20 [i_2] [i_3] [i_4] [i_9] [i_11]))) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 9223372036854775789LL))))));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (min((1040187392), (((/* implicit */int) (unsigned char)62))))));
                            arr_39 [i_3] [i_9] [i_4] [i_3] [i_3] = ((/* implicit */unsigned long long int) 480756174U);
                            var_32 -= ((/* implicit */_Bool) arr_15 [i_9] [i_9] [i_4] [i_3] [i_9]);
                        }
                        /* vectorizable */
                        for (short i_12 = 0; i_12 < 13; i_12 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)48)) >> (((((/* implicit */int) (unsigned short)692)) - (661)))));
                            arr_42 [i_3] [i_12] [i_9] [(short)9] [7U] [7U] [i_3] = ((/* implicit */unsigned long long int) (unsigned char)233);
                            arr_43 [i_2] [i_3] [i_3] = ((/* implicit */long long int) arr_6 [i_2]);
                            arr_44 [i_2] [i_2] [i_2] [i_2] [i_3] [i_2] [(signed char)1] = ((/* implicit */unsigned long long int) arr_11 [i_4] [i_3] [i_3]);
                            var_34 = (i_3 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((arr_30 [i_3] [i_9] [i_4] [i_2] [i_2] [i_3]) + (4619604368646025712LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((arr_30 [i_3] [i_9] [i_4] [i_2] [i_2] [i_3]) + (4619604368646025712LL))) - (2220649281196170153LL))))));
                        }
                    }
                    var_35 = ((/* implicit */int) max((arr_9 [i_3]), (((/* implicit */unsigned char) ((((/* implicit */long long int) arr_15 [i_3] [i_3] [i_3] [i_2] [i_3])) > (((long long int) arr_7 [i_2])))))));
                }
            } 
        } 
    } 
}
