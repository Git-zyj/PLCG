/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240411
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
    var_12 *= ((/* implicit */unsigned short) var_7);
    var_13 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_6)) == (((/* implicit */int) min((((/* implicit */short) var_0)), ((short)21641))))))), (((var_0) ? (576179277326712832LL) : (((/* implicit */long long int) (+(2378869525U))))))));
    var_14 += var_1;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_15 = ((/* implicit */unsigned short) (short)-13753);
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((signed char) (short)21637)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_17 ^= ((/* implicit */unsigned long long int) ((var_4) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13604)))));
                        arr_10 [i_2] = ((/* implicit */unsigned int) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) 2378869535U)) ? (((/* implicit */int) (short)-21627)) : (((/* implicit */int) (short)13584))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        arr_13 [i_2] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_0 [i_1 - 1] [(unsigned short)1]))))));
                        var_18 = ((/* implicit */_Bool) var_11);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            arr_16 [i_0] [i_0] [i_2] [i_2] [(signed char)5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (arr_7 [i_2]) : (((arr_2 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_8))));
                            var_20 = ((/* implicit */unsigned short) ((3569063315U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)21637)))));
                            var_21 = ((/* implicit */short) ((signed char) arr_8 [i_2] [(_Bool)1] [i_2] [(_Bool)1] [(short)2] [i_2]));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            arr_20 [i_0] [i_0] [(short)2] [i_2] [i_6] = ((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_4] [i_1 + 2]))));
                            var_22 *= var_8;
                            arr_21 [i_0] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                        }
                    }
                    arr_22 [i_2] [i_2] = ((/* implicit */unsigned short) arr_4 [i_0] [(_Bool)1]);
                }
                for (short i_7 = 1; i_7 < 10; i_7 += 3) 
                {
                    arr_26 [i_0] [i_7] [(signed char)0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8788))) == (18446744073709551615ULL));
                    var_23 = ((/* implicit */unsigned short) arr_18 [i_1] [i_1] [i_1] [i_1]);
                    var_24 = ((/* implicit */short) var_6);
                }
                for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        arr_31 [i_0] [i_1] [i_8] [i_9] = ((/* implicit */int) max((((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_2 [i_1 - 1]))), (min((arr_27 [i_1 - 2] [i_1] [i_0] [i_0]), (((/* implicit */unsigned int) ((_Bool) arr_3 [i_0])))))));
                        var_25 = ((/* implicit */int) max((min((((unsigned int) arr_4 [i_0] [i_0])), (((/* implicit */unsigned int) ((unsigned short) (short)13603))))), (arr_7 [i_0])));
                        arr_32 [i_0] [(_Bool)1] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) max(((unsigned short)48008), (((/* implicit */unsigned short) (short)-21647))));
                    }
                    var_26 *= ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) 13006987848148723268ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_8] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_5 [i_0] [i_0]))), (((/* implicit */long long int) min((arr_2 [i_1]), (1026284686U)))))), (((/* implicit */long long int) 1026284678U))));
                    var_27 += ((/* implicit */signed char) (unsigned short)65508);
                    arr_33 [i_1] = ((/* implicit */long long int) min((((/* implicit */int) arr_24 [2ULL] [2ULL] [i_8])), ((((+(((/* implicit */int) (short)-21559)))) ^ (((var_10) ? (((/* implicit */int) arr_25 [i_0])) : (((/* implicit */int) var_1))))))));
                }
                for (unsigned long long int i_10 = 2; i_10 < 11; i_10 += 2) 
                {
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_8 [i_1 - 1] [i_1] [i_1 + 1] [i_10] [i_10] [i_1]), (var_11)))) ? (((/* implicit */unsigned long long int) ((2378869505U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49602)))))) : ((-(max((((/* implicit */unsigned long long int) arr_14 [i_0] [i_1 + 2] [i_10] [i_10] [i_0])), (var_9))))))))));
                    var_29 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127))));
                    arr_36 [i_0] [i_0] = ((/* implicit */signed char) arr_6 [i_10 + 1] [i_1 + 2]);
                    var_30 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((short) (signed char)0))), (max((1916097788U), (1617123438U)))));
                    var_31 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_2 [i_10])), ((+(13779693583318036738ULL)))));
                }
                var_32 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))));
                var_33 = ((/* implicit */unsigned long long int) min((var_33), (min((((/* implicit */unsigned long long int) arr_35 [(unsigned short)12] [i_1] [i_1])), (((unsigned long long int) arr_9 [i_1 + 1] [i_0] [(short)8]))))));
            }
        } 
    } 
}
