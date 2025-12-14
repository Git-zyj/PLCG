/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203898
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
    var_12 |= ((/* implicit */signed char) (((~(((/* implicit */int) var_1)))) - (((/* implicit */int) var_2))));
    var_13 = ((/* implicit */short) var_1);
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 20; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] [i_0] |= ((/* implicit */signed char) var_10);
        var_14 = ((/* implicit */_Bool) min((((/* implicit */long long int) max((var_8), (var_1)))), (((long long int) var_2))));
        arr_5 [i_0] = ((/* implicit */long long int) var_11);
    }
    for (int i_1 = 4; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_1))));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [15ULL] [i_1 - 3])))))) > (((unsigned long long int) arr_2 [i_1 + 1])))))));
    }
}
