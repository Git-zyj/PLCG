/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207524
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((1U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (var_6))))) : (max((var_13), (((/* implicit */unsigned int) var_12))))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-31816))) % (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4))) : (1U))), (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_13)))))));
    var_16 = (+((-(((/* implicit */int) min((((/* implicit */short) var_6)), (var_2)))))));
    var_17 -= ((/* implicit */signed char) max((var_7), (((/* implicit */short) (signed char)-98))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((((/* implicit */int) (signed char)120)) ^ (((/* implicit */int) arr_0 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))));
    }
}
