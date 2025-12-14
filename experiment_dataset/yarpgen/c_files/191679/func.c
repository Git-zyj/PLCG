/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191679
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
                var_12 = ((/* implicit */signed char) var_6);
                var_13 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)82)), (var_9)));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (short)-21136)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */int) (short)10359))))) ? (((/* implicit */unsigned long long int) var_4)) : (max((var_9), (((/* implicit */unsigned long long int) var_5)))))))))));
}
