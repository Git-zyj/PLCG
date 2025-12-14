/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249740
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0 + 1] [i_0] = ((/* implicit */_Bool) var_17);
        var_20 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) max((((/* implicit */short) arr_0 [i_0])), (var_7))))))));
        var_21 = ((/* implicit */signed char) 18014397435740160LL);
        var_22 = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_18))))))));
        arr_3 [i_0] [i_0 - 2] |= ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) max((var_17), (var_6)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) & (arr_1 [i_0] [i_0 + 1]))))), (((/* implicit */unsigned long long int) ((_Bool) (-(8186905341048668759ULL)))))));
    }
    var_23 = (signed char)55;
}
