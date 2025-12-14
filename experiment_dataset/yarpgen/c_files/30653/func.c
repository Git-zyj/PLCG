/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30653
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
    var_19 = ((/* implicit */int) (short)-1185);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)-1178)) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)1186)))));
        var_21 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */int) ((unsigned int) arr_1 [i_0] [i_0]));
    }
    var_22 = ((/* implicit */unsigned short) ((signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) 6227552820960162342ULL))))), (var_5))));
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_10))));
}
