/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47083
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(4294967295U))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) (-(((-6494647874089579729LL) - (((/* implicit */long long int) var_6))))));
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)127)))))));
        var_12 = ((/* implicit */short) (_Bool)0);
    }
    var_13 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (~(4294967295U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))) : (((/* implicit */int) max(((_Bool)0), (var_2))))))));
}
