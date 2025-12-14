/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49363
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
    var_11 = ((((/* implicit */_Bool) ((((/* implicit */int) ((short) var_4))) % (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_1))))))) : (((long long int) var_5)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) min((-7677511297265730267LL), (((/* implicit */long long int) (short)23733))));
                var_13 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_10)), ((~(min((var_2), (((/* implicit */unsigned long long int) var_4))))))));
            }
        } 
    } 
}
