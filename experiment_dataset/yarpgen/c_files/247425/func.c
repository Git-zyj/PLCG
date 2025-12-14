/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247425
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
    var_17 ^= ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned short) var_5))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_18 = ((((/* implicit */_Bool) min((var_14), (var_10)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)));
                var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (var_0)))) ? (max((var_12), (((int) var_15)))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)40254)) : (((/* implicit */int) (unsigned short)25282))))))));
                var_20 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (var_4) : (var_0))));
            }
        } 
    } 
}
