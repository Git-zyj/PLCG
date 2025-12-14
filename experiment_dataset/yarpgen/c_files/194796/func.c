/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194796
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
    var_17 = var_4;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = var_0;
        var_18 = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0] [i_0])))))));
    }
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
}
