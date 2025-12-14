/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52658
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
    var_11 -= var_7;
    var_12 = ((/* implicit */signed char) ((var_1) + (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned int) var_8)))))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)31240))) >= (max((((/* implicit */unsigned long long int) max((4294967294U), (((/* implicit */unsigned int) (_Bool)1))))), (max((var_1), (((/* implicit */unsigned long long int) var_6))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) arr_5 [i_1] [i_2 - 2]);
                    arr_8 [i_0] [i_2] [i_0] [i_2 - 2] = ((/* implicit */signed char) max(((+(arr_0 [i_2 + 2]))), (((/* implicit */long long int) var_3))));
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0])), (((arr_3 [i_0]) ? (((arr_7 [i_0] [i_1] [i_1] [i_1]) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (max((23ULL), (((/* implicit */unsigned long long int) arr_3 [i_0]))))))));
                    var_15 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_0] [i_0]) == (12197578360929815539ULL)))), (((((/* implicit */_Bool) (short)-31245)) ? (((/* implicit */unsigned long long int) 576460752303422464LL)) : (16054437635106297019ULL))))) ^ (min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 576460752303422451LL)) : (arr_6 [i_1] [i_1]))), (arr_2 [i_0])))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((short) (-(arr_5 [i_3 - 2] [i_3 - 1]))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) arr_19 [i_4] [i_4]);
                        var_18 = ((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)31245))) & (min((((/* implicit */unsigned long long int) -576460752303422451LL)), (18446744073709551591ULL))))));
                        var_19 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)12))));
                    }
                } 
            } 
        } 
    }
}
