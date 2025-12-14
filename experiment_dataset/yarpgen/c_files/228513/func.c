/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228513
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
    for (unsigned long long int i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)189)) ? (8791989333516819854LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63563))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)2)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) (unsigned short)65532))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0 - 2])))) : (max((((/* implicit */int) var_2)), (((var_0) ? (((/* implicit */int) var_5)) : (arr_0 [i_0])))))));
        var_11 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((arr_0 [i_0]) / (min((1599539976), (((/* implicit */int) var_5)))))) : (((/* implicit */int) var_2))));
    }
    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15)) % (((/* implicit */int) (unsigned short)2)))))));
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
}
