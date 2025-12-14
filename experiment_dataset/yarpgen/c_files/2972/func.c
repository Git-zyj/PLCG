/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2972
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
    for (int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) ((var_11) >= (min((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) (~(9223372036854775807LL))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((min((9223372036854775807LL), (2776506157836959651LL))) % (((/* implicit */long long int) ((((/* implicit */int) var_7)) & (((int) var_17)))))));
        var_20 += ((/* implicit */long long int) ((-3676377394536573888LL) >= (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
    }
    var_21 = ((/* implicit */short) var_0);
    var_22 = ((/* implicit */_Bool) min((4446293625910986471ULL), (((/* implicit */unsigned long long int) var_15))));
}
