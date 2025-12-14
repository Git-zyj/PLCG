/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39131
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
    for (long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_0 [i_0])), (min((-4290360119468482340LL), (((((/* implicit */_Bool) arr_2 [i_1])) ? (3589126321809139871LL) : (4290360119468482340LL)))))));
                var_15 *= (+(max((((/* implicit */long long int) ((arr_5 [i_0 - 1] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) var_5)))))), ((-(arr_5 [8LL] [i_1]))))));
            }
        } 
    } 
    var_16 = -6023799133062644200LL;
    var_17 = ((((/* implicit */_Bool) var_12)) ? (var_7) : (((((/* implicit */_Bool) 2251799813684736LL)) ? (9223372036854775807LL) : (9223372036854775805LL))));
}
