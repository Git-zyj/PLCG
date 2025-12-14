/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3494
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
    var_15 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_3))))) != (max((var_6), (((/* implicit */unsigned long long int) var_5))))))), (max((var_6), (var_0)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_7 [i_0] [(unsigned short)9] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) var_3)), (((((long long int) var_0)) << (((((/* implicit */int) ((((/* implicit */int) var_1)) != (var_5)))) - (1)))))));
                var_16 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_6)) || (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_11)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_9);
    var_18 = ((/* implicit */unsigned short) max((((((long long int) var_5)) / (((/* implicit */long long int) ((/* implicit */int) min((var_2), (var_4))))))), (((/* implicit */long long int) max((var_8), (((unsigned char) var_6)))))));
}
