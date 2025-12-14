/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234624
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
    var_12 = (+(((unsigned int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_2))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((unsigned short) arr_1 [0LL] [0LL])))));
        arr_2 [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) var_1))))))));
        var_14 = ((/* implicit */int) min((var_14), (var_11)));
    }
    var_15 = ((/* implicit */int) var_5);
}
