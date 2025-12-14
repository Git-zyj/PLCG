/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233756
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
    var_16 = min(((+(13835801530976031372ULL))), (4610942542733520244ULL));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = min((281474439839744ULL), (((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0]) : (0ULL))));
        var_17 = (-((~(3363269353386807260ULL))));
        arr_3 [i_0] [i_0 - 2] = var_9;
        var_18 -= ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) ((arr_1 [i_0 - 1]) <= (arr_0 [i_0 + 1]))))))));
    }
    var_19 = var_3;
    var_20 *= ((((/* implicit */_Bool) ((281474439839744ULL) | (min((4610942542733520244ULL), (var_15)))))) ? (((unsigned long long int) var_14)) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((var_13) - (16430871401441576847ULL))) : (((unsigned long long int) 18446744073709551615ULL)))));
}
