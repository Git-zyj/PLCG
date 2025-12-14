/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49218
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
    var_12 -= ((/* implicit */unsigned long long int) (_Bool)0);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_4 [i_0] = 8985310680483126504LL;
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((unsigned char) ((7435932650897616488LL) != (var_3)))))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) 8985310680483126504LL)))));
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) && (min(((_Bool)1), ((_Bool)0)))));
                    arr_8 [3U] [7LL] [7LL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) >> (((var_0) + (1878408416)))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_11)))))))) || (((_Bool) 5433810960859657130ULL))));
                    var_15 += ((/* implicit */unsigned long long int) max((-2093094084), ((-((~(((/* implicit */int) var_5))))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] = ((/* implicit */_Bool) (((((!(((/* implicit */_Bool) 3222676630U)))) ? (3421174719870300046ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -8355048586196526747LL)))))))) >> (((max((max((((/* implicit */unsigned int) (_Bool)1)), (2021012902U))), (((/* implicit */unsigned int) var_5)))) - (2021012858U)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 2; i_4 < 23; i_4 += 1) 
                    {
                        var_16 -= ((/* implicit */_Bool) var_7);
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_5))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 4) 
                    {
                        var_18 = ((((/* implicit */_Bool) 3958567956611157947LL)) ? (((/* implicit */unsigned long long int) 2273954400U)) : (18446744073709551615ULL));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_6 = 1; i_6 < 23; i_6 += 3) 
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_3] [i_0] [i_6] = (-((+(arr_14 [5] [i_1] [5] [5]))));
                            var_19 = ((/* implicit */unsigned char) ((int) arr_16 [i_5 - 1] [i_0] [i_5 + 1] [i_5]));
                            var_20 = ((/* implicit */unsigned long long int) (-(arr_18 [i_5 + 1] [i_6 + 1] [i_6] [i_5 + 1] [i_5 + 2] [i_5])));
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_1) : (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_0]))))) ? (arr_16 [i_5] [i_0] [i_5 - 1] [i_5 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) < (var_2)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            var_22 += ((/* implicit */_Bool) (~(var_1)));
                            var_23 = ((/* implicit */long long int) ((5433810960859657118ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
                        }
                        var_24 = ((/* implicit */_Bool) (((((!(((/* implicit */_Bool) var_11)))) || (((/* implicit */_Bool) ((unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (arr_16 [i_0] [i_0] [(unsigned char)15] [(_Bool)1])))))) : ((((_Bool)1) ? (16435416680083244271ULL) : (5433810960859657130ULL)))));
                        var_25 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (var_8)))) ? (((long long int) 18446744073709551615ULL)) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (var_11))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) 1072290666U)) ? (((/* implicit */unsigned long long int) 1882688666)) : (var_1))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_2 [i_1] [i_1] [i_1])))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        arr_27 [i_0] = arr_3 [i_3] [i_3] [(_Bool)1];
                        arr_28 [i_0] [i_0] [i_0] = (~(((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */int) var_11)))));
                        arr_29 [i_0] = ((/* implicit */unsigned char) (+(1072290652U)));
                        var_26 += ((((/* implicit */unsigned long long int) 1072290666U)) < (var_1));
                    }
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_33 [i_0] [i_0] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) ((var_10) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_5))))), (((arr_25 [i_0] [(_Bool)1] [i_1] [i_1] [2]) & (var_3))))), (((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((var_2) + (((/* implicit */int) (_Bool)1)))))))));
                    arr_34 [i_0] [i_1] [i_1] [i_1] = (((((~(arr_14 [i_0] [i_0] [i_1] [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) var_5))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_2)) + (arr_14 [i_1] [i_1] [i_9] [i_0])))) ? (((/* implicit */long long int) max((((/* implicit */int) var_10)), (arr_0 [i_9])))) : (arr_31 [i_0] [i_1] [i_9])))));
                    arr_35 [i_0] [i_0] [i_1] [i_9] = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < ((~(444078763U))));
                }
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) var_2))), ((-(var_2)))))) ^ (arr_16 [i_0] [i_0] [i_0] [i_1])));
            }
        } 
    } 
    var_28 = min((var_2), (max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_4)) : (-1))))));
}
