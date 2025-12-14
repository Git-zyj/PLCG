/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247322
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((var_19) - (arr_0 [(unsigned short)14] [i_0]));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (short)32767);
    }
    var_20 = ((/* implicit */unsigned short) max((min((((long long int) var_10)), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))));
    var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))))), (((/* implicit */int) min((var_12), (var_6))))));
    var_22 |= ((/* implicit */unsigned int) var_16);
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)64)), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_5)))))) ? ((+(var_2))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))))));
}
