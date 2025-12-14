/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229046
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
    var_19 = ((/* implicit */_Bool) ((int) var_15));
    var_20 ^= ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((int) ((unsigned long long int) 2029942839)));
                arr_7 [i_1 + 1] = ((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) -1137858003)), (11245818807810739670ULL))));
            }
        } 
    } 
    var_22 = min((var_11), ((unsigned char)41));
}
