/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236998
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
    var_12 &= ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 23; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) arr_3 [i_0 + 3])) : (((/* implicit */int) (_Bool)1)))) >> (((((arr_4 [i_0 - 3] [i_0 - 3] [i_0 - 2]) >> (((/* implicit */int) arr_3 [i_0 + 3])))) - (1154396ULL))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            var_14 = arr_12 [i_0] [i_2] [5U] [i_1 - 3] [i_4] [i_1];
                            arr_15 [i_0] [i_1 - 3] [i_2] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) arr_0 [i_4] [i_0]);
                            var_15 = ((/* implicit */unsigned short) var_7);
                            arr_16 [i_0 - 2] [i_0] [i_2] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */int) var_1);
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_4 [i_1 + 1] [i_1] [i_0 - 2])))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_17 = ((/* implicit */_Bool) var_11);
                            var_18 = (!((!(arr_1 [i_2]))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_1 - 3] [i_1] [i_1] [i_1] [i_1] [i_0] [i_0 + 3])) ? (arr_22 [i_1 + 1] [i_1] [i_1] [(signed char)4] [i_1] [(signed char)4] [i_0 - 2]) : (arr_22 [i_1 - 2] [i_1 - 4] [i_0 - 1] [i_0] [i_0] [2U] [i_0 - 2])));
                            var_20 = ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 528482304U))))) >= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_1] [i_6])) : (((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [i_2] [i_2] [i_6 - 1])))));
                            var_21 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_0 + 1] [i_0 + 1] [i_0] [20ULL] [i_6 - 1])) >= (((/* implicit */int) arr_18 [i_0] [i_0 - 4] [i_0] [i_0 - 1] [(_Bool)1]))));
                        }
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0 + 2] [i_0 - 2])) ? (2813138700U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0 - 4] [i_0 - 1]))))))));
                    }
                    arr_23 [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_6) ? (var_8) : (var_2)))) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_2] [i_2] [i_1] [i_2]))));
                    /* LoopSeq 3 */
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_2] [(_Bool)1] = ((/* implicit */int) arr_4 [(_Bool)1] [i_1] [i_2]);
                        var_23 = ((/* implicit */short) ((arr_14 [i_0] [i_1 - 4] [i_2] [i_7] [i_0 - 3]) >= (var_8)));
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_0 - 3] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) arr_7 [i_2]);
                        var_24 = ((((((/* implicit */int) var_7)) + (((/* implicit */int) (_Bool)1)))) - ((-(((/* implicit */int) arr_6 [i_8 - 1] [i_0] [i_1] [i_0])))));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0 - 4] [i_0] [i_0] [i_0])) * (((/* implicit */int) var_4))))) : (arr_14 [i_0 - 3] [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((((/* implicit */_Bool) arr_19 [i_1 - 2] [i_1])) ? (((/* implicit */unsigned int) -2147483646)) : (var_0)))));
                        arr_34 [i_0] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-99))));
                        var_27 -= ((/* implicit */unsigned short) (-((+(arr_2 [i_0] [i_1])))));
                    }
                    arr_35 [i_2] [i_2] = ((/* implicit */int) arr_20 [i_0] [i_2] [i_1] [i_2]);
                }
                arr_36 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)35393))))))) ? (((/* implicit */unsigned long long int) ((var_1) ? (min((4294967295U), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0] [i_1 + 1] [i_1] [19ULL])))))) : (((unsigned long long int) 1460759020))));
            }
        } 
    } 
}
