/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216024
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
    var_10 = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((signed char) var_1))), (((unsigned short) (-(var_1))))));
    var_11 = ((/* implicit */unsigned short) var_4);
    var_12 = ((/* implicit */unsigned short) ((signed char) var_4));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_6))));
                var_14 = min((max((max((var_4), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (var_2)))))), (((/* implicit */unsigned long long int) ((unsigned int) max((var_4), (((/* implicit */unsigned long long int) var_5)))))));
            }
        } 
    } 
}
