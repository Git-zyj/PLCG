/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214549
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
    var_10 = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) max((var_0), (((/* implicit */unsigned long long int) -1LL)))))), (var_1)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_11 = (+(((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) arr_0 [i_0]))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1]))))));
        arr_4 [i_0] = ((/* implicit */_Bool) var_2);
    }
}
