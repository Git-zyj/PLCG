/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47960
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
    var_14 -= ((/* implicit */unsigned char) ((long long int) (unsigned char)213));
    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((13691384302351500770ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (var_4)))))) * (((/* implicit */int) var_4))));
    var_16 = ((/* implicit */short) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */int) arr_9 [i_0] [i_1 + 3]);
                        var_17 = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_0)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
                        {
                            arr_17 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(3065441550U)))) / (var_9)))) ? (min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */long long int) max(((~(arr_7 [i_0] [i_0]))), (((/* implicit */int) ((unsigned short) arr_2 [i_2]))))))));
                            arr_18 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_4 + 1] [i_2 - 4])) && (((/* implicit */_Bool) arr_4 [i_3 - 3] [i_0 - 1])))));
                            arr_19 [i_0] [i_0] [i_0] [(unsigned short)9] = ((/* implicit */unsigned long long int) (-(((var_9) - (var_9)))));
                        }
                        for (unsigned short i_5 = 1; i_5 < 21; i_5 += 2) /* same iter space */
                        {
                            arr_22 [i_3] [i_0] [i_1] [i_3 - 3] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_0]);
                            arr_23 [i_0 + 1] [i_0] [19] [(signed char)17] [i_0] = ((/* implicit */long long int) var_0);
                            var_18 = ((/* implicit */_Bool) var_13);
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? ((~(arr_21 [18] [i_0] [(unsigned char)14] [i_0] [i_0 + 1] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3 + 2] [i_2 - 1] [i_0 - 1]))))), (((unsigned long long int) (~(((/* implicit */int) arr_3 [i_5 + 1] [(short)0] [i_2]))))))))));
                            var_20 ^= ((/* implicit */_Bool) 3065441550U);
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */int) ((short) var_8));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((var_1) >= (var_9))))));
                    }
                    for (signed char i_7 = 2; i_7 < 20; i_7 += 4) 
                    {
                        arr_31 [i_0] [i_0] [i_0 - 1] = ((/* implicit */_Bool) (unsigned short)65535);
                        arr_32 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)5))));
                    }
                    arr_33 [i_0] [i_1] [i_2] [i_0] = min((((/* implicit */unsigned int) var_10)), (((unsigned int) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)5))))));
                    /* LoopSeq 2 */
                    for (int i_8 = 1; i_8 < 21; i_8 += 4) 
                    {
                        var_23 = ((/* implicit */_Bool) (((-(((/* implicit */int) ((short) var_4))))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_0 - 1] [i_0] [i_0])) || (var_4))))));
                        var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)96)) - (((/* implicit */int) (unsigned short)1))));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (-(((arr_30 [i_0] [i_0] [i_2] [i_0 - 1] [i_0 + 1]) ? (((/* implicit */int) arr_30 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_8])) : (((/* implicit */int) arr_11 [i_0 + 1] [i_8 - 1] [i_8] [i_8 + 1])))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_2 [i_1 + 2])) - (arr_36 [13LL] [i_2] [i_9] [i_8] [i_0] [i_9]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_8] [i_0] [i_2 - 2] [i_1] [4] [i_0] [i_1 + 2])))))));
                            var_27 = ((/* implicit */int) var_4);
                        }
                    }
                    for (int i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        arr_42 [i_0] [i_0] [i_2 - 3] [i_0 - 1] = ((/* implicit */int) ((17854622846312058311ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                        var_28 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_10 [i_0] [(_Bool)0] [i_2] [i_2] [i_10]) + (2147483647))) >> (((arr_36 [i_10] [i_2] [i_2] [i_2] [i_2] [i_0 - 1]) + (1150402880)))))))))));
                    }
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [(signed char)9] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (var_7)))) : ((~(((/* implicit */int) arr_5 [i_0] [i_0] [9LL]))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65535))))) : ((+(var_7)))));
                }
            } 
        } 
    } 
}
