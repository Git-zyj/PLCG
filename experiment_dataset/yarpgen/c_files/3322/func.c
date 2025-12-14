/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3322
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
    for (signed char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        var_19 = ((/* implicit */signed char) max(((unsigned char)9), ((unsigned char)247)));
        var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22912)) ? (((/* implicit */int) (short)30638)) : (((/* implicit */int) (unsigned char)9))))) ? ((~((~(arr_1 [(unsigned char)13]))))) : (((/* implicit */long long int) arr_0 [i_0 - 2] [i_0]))));
    }
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_18)))))) ? ((~(((/* implicit */int) var_17)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? (((((/* implicit */_Bool) min(((unsigned char)8), (((/* implicit */unsigned char) var_17))))) ? ((~(((/* implicit */int) var_17)))) : (((/* implicit */int) var_18)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 301332448)) ? (678019087801375330LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247)))))))))));
}
