/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42563
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_15 -= ((8713131567930698189LL) > (((/* implicit */long long int) ((int) var_10))));
                arr_6 [i_0] [(signed char)15] [i_1] = min(((~((-(((/* implicit */int) var_0)))))), ((+(arr_0 [i_1] [i_0]))));
            }
        } 
    } 
    var_16 -= ((/* implicit */int) ((long long int) (+(((/* implicit */int) var_1)))));
    var_17 = ((/* implicit */int) (+(((unsigned long long int) var_9))));
    var_18 = min((((/* implicit */long long int) min((var_7), (var_7)))), (((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (max((((/* implicit */long long int) 281629168)), (var_6))))));
}
