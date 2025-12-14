/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28350
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) (unsigned char)218);
                var_10 += ((/* implicit */_Bool) ((arr_4 [0U] [6ULL]) << (((var_0) - (10659127163034207171ULL)))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) (((+(max((((/* implicit */unsigned long long int) var_4)), (var_5))))) - (min((((/* implicit */unsigned long long int) ((var_3) / (((/* implicit */int) (signed char)119))))), (var_0)))));
            }
        } 
    } 
    var_11 = min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */long long int) var_3)) & (var_4)))))));
    var_12 = (((_Bool)1) ? (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_8)))) | (min((((/* implicit */int) (unsigned char)46)), (var_3)))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) & (var_1)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_5))))));
}
