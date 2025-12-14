/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237444
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
    var_18 = ((((var_4) + (((/* implicit */long long int) ((/* implicit */int) var_11))))) + (((((var_15) >= (((/* implicit */long long int) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_5))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((signed char) var_15)))));
        var_20 += ((/* implicit */signed char) min((((793225360U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 793225350U)))))), (((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (max((arr_0 [i_0]), (((/* implicit */unsigned int) var_11))))))));
    }
    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) (signed char)-57)))), (((/* implicit */int) ((signed char) var_5))))))));
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((long long int) ((signed char) (!(((/* implicit */_Bool) (short)19797)))))))));
    var_23 &= ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) 647568193U))), (max((((/* implicit */unsigned int) (short)31577)), (793225350U)))))), (-8999984623071376106LL)));
}
