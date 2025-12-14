/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202644
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
    var_14 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_0))))), (((6028854319666290304LL) - (((/* implicit */long long int) ((/* implicit */int) var_0))))))) + (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    var_15 = ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_16 = ((/* implicit */_Bool) (-(((unsigned int) max((4026531840U), (3430467567U))))));
        var_17 = ((/* implicit */_Bool) min((((/* implicit */int) min((min((var_1), (var_13))), (((/* implicit */unsigned short) var_6))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 5ULL))));
    }
}
