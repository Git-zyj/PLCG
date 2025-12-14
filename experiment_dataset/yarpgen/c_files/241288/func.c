/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241288
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_15))));
        var_19 = ((/* implicit */long long int) arr_1 [0ULL] [i_0]);
        var_20 = ((((/* implicit */int) (unsigned char)162)) ^ (-931235488));
    }
    var_21 = var_2;
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */_Bool) var_1)) ? ((-(var_10))) : (((/* implicit */unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) var_2))));
}
