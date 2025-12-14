/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47130
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_4))))))) == (((/* implicit */int) ((var_6) <= (((/* implicit */long long int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_4))))))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 24; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((var_10) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [(short)3] [i_1 + 1])) && (((/* implicit */_Bool) arr_0 [i_0]))))))))), (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 1610612736)) : (arr_2 [i_0]))) + (arr_5 [i_0 + 2] [i_0] [i_1] [i_2])))));
                    arr_7 [i_2] = var_3;
                    var_14 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1610612727)) ? (((/* implicit */long long int) -1610612736)) : (-1LL)))) ? ((-(arr_2 [(unsigned short)17]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (arr_2 [i_2 - 2]))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) != (var_10))))) < (((var_6) | (((/* implicit */long long int) -1610612726))))))))));
                    arr_8 [i_0] [i_0] [i_1] &= ((((arr_0 [i_2 + 1]) << (((18446744073709551615ULL) - (18446744073709551578ULL))))) - ((-((+(arr_6 [i_0] [i_1] [i_2]))))));
                }
            } 
        } 
    } 
}
