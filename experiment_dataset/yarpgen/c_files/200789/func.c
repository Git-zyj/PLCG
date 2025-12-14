/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200789
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
    for (short i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) var_5);
                var_16 = (!(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (var_0)))) > (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_10))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) >> (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) : (var_3)))) : (var_1)));
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_14)) ? (var_0) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_13)))))));
}
