/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235866
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
    var_14 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((+((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */int) var_8)), (var_5))) != (((/* implicit */int) var_4)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_15 = ((/* implicit */int) var_8);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
    }
    var_16 = ((/* implicit */long long int) min((((/* implicit */int) ((9223372036854775802LL) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)64)) > (((/* implicit */int) (signed char)64))))))))), (((int) var_12))));
}
