/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19288
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
    var_17 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), (var_8)))) || (((/* implicit */_Bool) 11982482130636516096ULL)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) var_1);
        var_18 = -790179547550982871LL;
    }
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((790179547550982893LL), (-790179547550982873LL)))) ? (min((((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_6))))), (-2039033072))) : (((int) ((((/* implicit */_Bool) -790179547550982881LL)) ? (-790179547550982882LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
}
