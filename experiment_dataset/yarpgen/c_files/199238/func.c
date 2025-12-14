/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199238
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
    var_14 = ((((-5850340325599109402LL) / (((/* implicit */long long int) var_1)))) | (((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_0))))));
    var_15 = ((/* implicit */int) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 5850340325599109402LL)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (6418019590131634607LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) var_13)))))));
    }
}
