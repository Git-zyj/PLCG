/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200654
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
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) max(((signed char)120), ((signed char)-120)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))) : (((4064U) % (((/* implicit */unsigned int) var_4))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) var_1)))));
        var_17 = ((_Bool) (~((+(5LL)))));
        arr_2 [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))), (arr_1 [i_0])));
    }
}
