/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241459
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */short) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-91)), (var_1)))))) ? (((min((var_10), (arr_2 [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)511))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-91)))))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((849661332842615383ULL) >> (((arr_10 [i_0] [i_1] [i_2] [i_1]) - (2950799255495532144ULL)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 4; i_4 < 10; i_4 += 2) 
                    {
                        var_12 = ((arr_7 [i_0] [i_0] [i_2]) / (var_1));
                        arr_16 [i_0] [(short)10] [i_0] = ((/* implicit */short) ((arr_12 [i_4 - 1] [i_0 + 1] [i_2] [(short)11]) / (arr_12 [i_4 - 3] [i_0 - 2] [i_2] [(signed char)10])));
                    }
                    for (short i_5 = 4; i_5 < 9; i_5 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (short i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            var_13 = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) var_10)))));
                            var_14 -= ((/* implicit */signed char) ((short) max((arr_14 [i_5] [i_5]), (arr_14 [i_5] [i_1]))));
                            var_15 = ((((min((var_10), (((/* implicit */unsigned long long int) var_2)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)94))))) ? (arr_11 [i_6] [0ULL] [i_2] [(short)10] [i_0]) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) - (9205357638345293824ULL))) - (((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                            arr_23 [(signed char)1] [(short)3] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108))) > (var_1)))) : (((/* implicit */int) arr_5 [i_5 + 2] [i_0 - 2])))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            arr_28 [(short)7] [i_1] [i_2] [i_5] [i_0] [i_5] [i_7] = ((/* implicit */short) ((signed char) arr_20 [i_5] [i_5] [10ULL] [i_5] [i_5 - 1] [i_7] [i_0]));
                            var_16 -= ((/* implicit */short) (-(((/* implicit */int) var_0))));
                            var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_7] [i_0 - 1] [i_5 + 1] [i_0 + 3] [i_0 - 1])) ? (arr_11 [i_7] [i_5] [i_5 + 2] [i_0 + 3] [i_0 + 3]) : (arr_11 [i_7] [i_7] [i_5 + 3] [i_0 - 1] [i_0 - 2])));
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_15 [i_0] [1ULL] [i_2] [i_5]);
                        }
                        for (short i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            var_18 = ((/* implicit */signed char) arr_10 [i_0] [i_1] [i_2] [i_0 + 2]);
                            arr_32 [i_0] [i_1] [i_2] [i_0] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (var_1) : (arr_6 [i_0]))) >> (((/* implicit */int) ((var_1) < (var_10))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (849661332842615383ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_1] [6ULL] [i_5] [i_8]))) : (((((/* implicit */_Bool) var_1)) ? (arr_14 [i_0] [i_1]) : (var_8))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_27 [i_8] [i_5] [i_2] [(signed char)1] [i_0])))) : (min((arr_12 [(short)3] [i_1] [8ULL] [i_8]), (var_5)))))));
                        }
                        arr_33 [i_0] [i_1] [i_2] [i_5] [(short)9] = ((/* implicit */short) min((arr_24 [i_0] [(signed char)6] [i_2] [i_5 - 3] [i_1]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_0 + 3] [i_5 + 1] [i_0])))))));
                        var_19 *= ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_9 [i_0 + 4] [i_2] [i_5])), (arr_10 [i_0 + 1] [i_1] [i_2] [i_5 - 3]))) / ((-(arr_10 [i_5 + 2] [i_2] [i_1] [i_0 + 3])))));
                        arr_34 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5] = var_3;
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            {
                                arr_41 [i_0] = ((/* implicit */short) ((signed char) var_5));
                                arr_42 [i_0] [i_1] [i_0] [1ULL] [(short)2] = ((/* implicit */unsigned long long int) var_7);
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_8 [(short)2] [(short)1] [i_1])) ? (arr_37 [i_0] [i_0 + 4] [i_0] [i_0] [i_0] [i_0]) : (((((/* implicit */_Bool) var_10)) ? (12085928790902328535ULL) : (var_8))))), (((/* implicit */unsigned long long int) ((short) ((short) arr_26 [(signed char)6])))))))));
                                arr_43 [i_0] = ((/* implicit */short) 12085928790902328535ULL);
                                var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_36 [i_0] [i_0] [(signed char)0] [i_0] [i_10]))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_9), ((short)-25163)))) ? (((/* implicit */int) arr_31 [i_0])) : (((/* implicit */int) min((var_6), (var_2))))))), (var_8)));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) 365468234524344561ULL);
    var_24 = ((/* implicit */short) var_5);
    var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (var_10)))) ^ (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))))) >= (0ULL)));
    var_26 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (var_10))), (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : ((~(var_10)))))));
}
