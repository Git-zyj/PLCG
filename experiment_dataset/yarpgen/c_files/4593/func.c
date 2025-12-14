/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4593
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-321171315), (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_11)) : ((-(((/* implicit */int) (unsigned char)35))))))) ? (((long long int) (unsigned short)0)) : (((/* implicit */long long int) var_10))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) min((var_2), (arr_2 [i_0] [(signed char)6] [i_1 + 1])));
                var_15 = ((/* implicit */_Bool) var_0);
            }
        } 
    } 
}
