/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218743
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) arr_3 [i_0] [i_0]);
                var_11 = arr_0 [i_0];
                var_12 = ((/* implicit */unsigned int) max((var_12), (((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) arr_0 [(unsigned short)0]))))) ? (((var_1) | (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) ((min((max((((/* implicit */unsigned long long int) var_9)), (var_1))), (((/* implicit */unsigned long long int) var_8)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_14 = ((/* implicit */short) var_7);
    var_15 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) max((var_6), (var_6))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_4))))), (((/* implicit */long long int) var_8))));
}
