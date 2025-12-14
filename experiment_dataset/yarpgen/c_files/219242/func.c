/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219242
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
    var_10 |= var_2;
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)204))) : (var_8)))), ((+(766787326982955696ULL)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 24; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((signed char) min((var_1), (9675397406129309739ULL))));
                    var_13 = var_5;
                }
            } 
        } 
    } 
}
