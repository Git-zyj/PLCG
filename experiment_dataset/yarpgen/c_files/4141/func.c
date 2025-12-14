/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4141
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
    var_20 = ((/* implicit */unsigned short) var_10);
    var_21 = max((((/* implicit */long long int) var_9)), (min((((/* implicit */long long int) var_18)), (var_5))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_22 = ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        var_23 = ((/* implicit */short) min((min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))))), (max((((/* implicit */unsigned int) var_18)), (var_12))))), (((/* implicit */unsigned int) max((arr_0 [(signed char)2]), (arr_0 [i_0]))))));
    }
}
