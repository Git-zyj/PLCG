/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239637
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((short) (_Bool)0));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : ((-(var_12)))));
    }
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) -2066310991337742390LL))));
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_15), (((/* implicit */long long int) (+(((/* implicit */int) var_14)))))))) ? ((~(var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7))))));
}
