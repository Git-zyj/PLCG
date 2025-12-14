/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216649
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
    var_10 = ((/* implicit */int) min((max((((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2))), (((/* implicit */long long int) max((var_8), (394553385U)))))), (min((((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)166))) : (var_7))), (var_2)))));
    var_11 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */int) arr_3 [i_0]);
                var_13 = ((/* implicit */long long int) (unsigned char)166);
            }
        } 
    } 
}
