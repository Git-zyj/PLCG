/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231375
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        var_20 -= ((/* implicit */unsigned int) arr_2 [i_0 - 3]);
        var_21 ^= ((/* implicit */int) arr_1 [i_0]);
        var_22 = ((/* implicit */signed char) min((var_22), (arr_2 [i_0 + 1])));
    }
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (-(1466644909)))) : (max((((/* implicit */long long int) var_2)), (var_7)))))) ? (((/* implicit */long long int) (((+(((/* implicit */int) var_0)))) + ((+(var_12)))))) : (((((/* implicit */_Bool) var_19)) ? ((-(var_7))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_7)))))));
    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4100072200U)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 34359721984LL)))))))) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34884))) : (var_8))))))))));
}
