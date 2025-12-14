/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3317
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
    var_10 = ((/* implicit */int) var_7);
    var_11 = ((((/* implicit */_Bool) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_7))))) ? (((((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) / (((var_1) - (((/* implicit */long long int) ((/* implicit */int) var_6))))))) : (max((((/* implicit */long long int) (+(((/* implicit */int) var_2))))), (var_1))));
    var_12 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) * (((((/* implicit */_Bool) arr_7 [i_1 - 3] [i_1 + 2] [i_1 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 3] [i_1 + 1])))))))));
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1 + 2] [i_1 - 3] [i_1 - 4])) + (((/* implicit */int) arr_6 [i_1 - 2] [i_1 + 2] [i_1 - 4]))))) ? (((arr_6 [i_1 + 3] [i_1 - 1] [i_1 - 4]) ? (((/* implicit */long long int) arr_2 [i_1 + 2] [12])) : (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1])) ? (arr_2 [i_1 - 2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 + 2] [i_1 - 2] [i_1 - 1]))))))));
                    var_15 = ((/* implicit */unsigned int) (+((((+(((/* implicit */int) var_6)))) + (((/* implicit */int) ((unsigned short) arr_8 [i_2] [8LL] [22LL] [8LL])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
}
