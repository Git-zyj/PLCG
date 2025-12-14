/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23985
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
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (((-(8727076366855022980LL))) > (-7404854734029055374LL)))), (7404854734029055382LL)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        arr_2 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) ((((((long long int) arr_1 [i_0 + 3])) != (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) + (arr_1 [i_0])))))) ? (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (var_3))) | (((/* implicit */int) (short)660)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))));
        arr_3 [i_0 + 3] = ((/* implicit */unsigned char) (+(7404854734029055388LL)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) ? (13688379767831459143ULL) : (((/* implicit */unsigned long long int) arr_5 [i_1])))) * (var_2)));
        arr_8 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1]))))) && (((/* implicit */_Bool) min((arr_6 [i_1] [i_1]), (((/* implicit */unsigned int) arr_4 [i_1])))))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    var_15 += ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28092))) | (var_2)));
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        arr_16 [i_3] [i_3] [i_3] = ((/* implicit */int) (((-(arr_5 [i_2 - 1]))) >> (((/* implicit */int) ((arr_9 [i_1] [i_1]) < ((+(arr_13 [i_1] [i_1] [i_4]))))))));
                        arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_12 [i_1] [i_4]), (((/* implicit */unsigned int) arr_9 [i_2] [i_2 + 1]))))) ? (((((/* implicit */_Bool) ((arr_11 [i_2 + 1] [i_3] [i_4]) / (((/* implicit */long long int) arr_12 [i_1] [i_1]))))) ? (10143191452199916705ULL) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) var_11))))))));
                        arr_18 [i_1] [i_1] [i_3] [i_2] [i_1] |= ((/* implicit */signed char) (((((!(((/* implicit */_Bool) -7404854734029055388LL)))) ? (((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */unsigned long long int) arr_9 [i_1] [i_3])) : (8303552621509634923ULL))) : (((/* implicit */unsigned long long int) var_0)))) - (var_10)));
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            arr_22 [i_1] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_2] [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_2])) ? (11419524908242856455ULL) : (((/* implicit */unsigned long long int) arr_20 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1] [i_2] [i_2 + 1]))))) ? ((-(var_10))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -6377286885909934832LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))))))));
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_15 [i_1] [i_3] [i_2 - 1] [i_3] [i_5] [i_2 - 1])) ? (((/* implicit */long long int) arr_13 [i_1] [i_3] [i_2 - 1])) : (-7404854734029055401LL))))))));
                        }
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_13 [i_2 + 1] [i_2] [i_4])) ? (arr_12 [i_2 - 1] [i_4]) : (((/* implicit */unsigned int) arr_13 [i_2 - 1] [i_3] [i_4])))));
                            arr_25 [i_1] [i_2 - 1] [i_2 - 1] [i_4] [i_6] = ((/* implicit */signed char) (+(((10755009910413483820ULL) << (((((10143191452199916708ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1] [i_2] [i_6] [i_6] [i_6]))))) - (1129886943530393955ULL)))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) var_8))))) ? (arr_12 [i_1] [i_2]) : (var_4)))) ? (((/* implicit */long long int) (+(0U)))) : (((((/* implicit */_Bool) arr_12 [i_1] [i_2 + 1])) ? (arr_11 [i_2] [i_2 + 1] [i_2 - 1]) : (7404854734029055403LL)))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_12))));
                        }
                        arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = min((13688379767831459142ULL), (((/* implicit */unsigned long long int) (+(-7404854734029055403LL)))));
                    }
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) arr_20 [i_1] [i_1] [i_1] [i_2] [i_3] [i_2] [i_7]);
                        arr_29 [i_7] [i_1] [i_1] = ((/* implicit */unsigned short) arr_4 [i_2 + 1]);
                    }
                }
            } 
        } 
        arr_30 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)29))))) ? (min((((/* implicit */unsigned long long int) -7404854734029055403LL)), (var_2))) : (((/* implicit */unsigned long long int) var_0)))))));
    }
    var_21 = ((/* implicit */unsigned int) var_11);
    var_22 = ((/* implicit */unsigned char) (+(var_5)));
}
