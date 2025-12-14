/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31504
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
    var_12 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)26597)) * (((/* implicit */int) max(((unsigned short)38947), (((/* implicit */unsigned short) (_Bool)1)))))))) : (min((((/* implicit */unsigned long long int) min((1840924672U), (var_10)))), (max((((/* implicit */unsigned long long int) var_5)), (var_3)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_13 = 65535LL;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_13 [i_0] [(short)7] [i_2] [i_3] [i_0] [i_0] [i_3])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */_Bool) 1840924672U)) && (((/* implicit */_Bool) (unsigned short)26589)))))));
                                var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (arr_3 [i_0] [(_Bool)1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26594)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-10026))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_2] [i_1] [i_5] &= ((/* implicit */unsigned char) arr_15 [i_1]);
                        var_16 = ((/* implicit */unsigned int) ((int) var_11));
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned char) 3567090379718946951LL);
                            arr_20 [i_0] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1982617588U)) && (((/* implicit */_Bool) var_10))));
                            var_18 = ((/* implicit */unsigned char) 2454042626U);
                        }
                        for (short i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            var_19 ^= ((/* implicit */unsigned char) ((unsigned short) var_2));
                            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
                            var_21 = ((/* implicit */unsigned long long int) var_11);
                            var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43665))) & (arr_18 [i_0] [i_1] [i_0] [i_7] [i_0])));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_8 = 1; i_8 < 9; i_8 += 1) 
                        {
                            arr_27 [i_0] [i_0] [i_0] [2LL] [i_5] [i_8 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_8 + 1] [i_1] [(_Bool)1] [i_8] [i_0])) ? (((/* implicit */unsigned int) arr_9 [i_8 + 2] [i_1] [i_2] [9U] [i_0])) : (var_0)));
                            var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2454042621U)) && (((/* implicit */_Bool) (unsigned char)112)))) && ((!(((/* implicit */_Bool) var_2))))));
                            var_24 = ((/* implicit */short) (unsigned char)0);
                        }
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_9] [3U] [i_2] [i_9] [i_2] [i_0] [i_1])) || (((/* implicit */_Bool) arr_13 [i_5] [i_1] [i_2] [i_5] [(signed char)2] [i_0] [i_2]))));
                            arr_30 [i_0] [9ULL] [i_0] [i_0] [(unsigned short)10] = ((/* implicit */long long int) ((12075710382588045063ULL) << (((((/* implicit */int) (short)14813)) - (14756)))));
                        }
                        for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) (+(var_0)));
                            arr_35 [i_0] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((short) arr_21 [(unsigned short)7] [i_1] [5] [i_5] [i_0] [i_10]));
                            var_27 = ((/* implicit */_Bool) var_7);
                            arr_36 [i_0] [i_1] [i_0] [i_5] [i_1] = ((/* implicit */int) (-(var_4)));
                        }
                    }
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        arr_40 [i_0] [i_11] [i_1] [i_2] [i_11] |= ((/* implicit */short) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_19 [i_0] [(short)4] [i_11] [10])) : (((/* implicit */int) (short)12893)))), (((/* implicit */int) (signed char)112))));
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_9))) ? (((6371033691121506553ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13186955984725032366ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_11] [i_2] [i_2]))) : (var_4)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)26597)) ? (arr_4 [i_1]) : (536870911LL)))), (var_3))))))));
                    }
                    for (int i_12 = 4; i_12 < 10; i_12 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_13 = 0; i_13 < 11; i_13 += 4) 
                        {
                            arr_48 [i_0] [i_0] [i_0] [i_2] [i_2] [i_12] [(short)8] = ((/* implicit */int) -9172354300986543083LL);
                            arr_49 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_43 [i_12 + 1] [i_0] [i_12 - 4] [i_13] [i_13]))));
                            var_29 = (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))));
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)63)) && ((_Bool)0)))) * (((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) arr_0 [i_13])) : (((/* implicit */int) (_Bool)1)))))))));
                            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) 6931497771674961365LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-59))) / (2450523843U)))) : (6371033691121506543ULL)));
                        }
                        /* vectorizable */
                        for (short i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_2] [(signed char)5] [i_12 + 1])) ? (12075710382588045072ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
                            var_33 = ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_0] [i_12] [i_0]);
                        }
                        var_34 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (short)-10041)), (6371033691121506545ULL))) | (var_7)));
                    }
                }
            } 
        } 
    } 
}
