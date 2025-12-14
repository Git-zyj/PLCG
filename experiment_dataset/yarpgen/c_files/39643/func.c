/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39643
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
    var_19 = ((/* implicit */long long int) var_7);
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_15) ? (((/* implicit */unsigned long long int) 4143733573U)) : (min((((/* implicit */unsigned long long int) var_11)), (var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20701))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */unsigned long long int) var_16))))) ? (((long long int) 198733106037874618LL)) : (((/* implicit */long long int) ((unsigned int) var_13)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) arr_1 [(unsigned char)7] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)141))))), (arr_1 [2U] [i_0 - 1]))), (((/* implicit */unsigned int) ((signed char) arr_1 [i_0] [i_0 - 2])))));
        var_21 *= ((/* implicit */int) min((((/* implicit */long long int) (-(1672839092U)))), (max((((/* implicit */long long int) ((arr_0 [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) var_12)))))), (-198733106037874618LL)))));
    }
    var_22 -= ((/* implicit */long long int) var_18);
    var_23 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
}
