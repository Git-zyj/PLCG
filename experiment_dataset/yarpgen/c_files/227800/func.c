/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227800
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
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        var_11 *= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0 + 3])), (arr_1 [i_0 - 1] [i_0 + 3]))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (18446744073709551615ULL)))));
        var_12 = max(((+(((6374849062239270133ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) min((-6700107697944069256LL), (((-4984452967277766741LL) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))));
    }
    var_13 -= ((/* implicit */unsigned long long int) var_6);
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_7))));
    var_15 = ((/* implicit */long long int) var_4);
}
