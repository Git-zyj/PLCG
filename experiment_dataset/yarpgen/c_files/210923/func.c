/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210923
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned int) (-2147483647 - 1)));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((-1119403466587620447LL), (1119403466587620434LL)))) || (((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)-10)) ? (1119403466587620420LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-17072)))))))) : (var_8))))));
}
