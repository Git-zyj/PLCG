/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27286
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
    var_12 = ((/* implicit */short) max((var_12), (var_11)));
    var_13 = ((int) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) ((min((((/* implicit */long long int) (_Bool)1)), (-9223372036854775796LL))) ^ (arr_2 [i_1] [i_1] [i_1])));
                var_15 *= ((/* implicit */short) ((arr_3 [i_1] [i_1] [i_0]) || (((((/* implicit */int) max((var_11), (((/* implicit */short) arr_3 [i_1] [i_1] [i_1]))))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_8)))))))));
            }
        } 
    } 
}
