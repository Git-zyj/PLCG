/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32738
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))), ((-(9223372036854775807LL))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) min((((unsigned long long int) arr_1 [i_0] [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_1 [i_0] [i_0])))) ? (((((/* implicit */int) (unsigned char)27)) / (((/* implicit */int) (short)2517)))) : (((/* implicit */int) arr_2 [i_0]))));
        arr_4 [(_Bool)1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (1482742291U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))));
    }
}
