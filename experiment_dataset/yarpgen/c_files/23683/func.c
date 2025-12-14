/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23683
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
    var_10 = ((/* implicit */unsigned char) max((((((var_4) >= (var_7))) ? (((var_7) << (((((/* implicit */int) var_9)) - (68))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_7)))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_2)), ((~(((/* implicit */int) (signed char)31)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        var_11 = ((((/* implicit */_Bool) (unsigned char)60)) ? (arr_0 [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 3]))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)28221))))) : (((((/* implicit */_Bool) (short)28214)) ? (((/* implicit */int) (short)-1)) : (-208604355)))));
    }
    var_12 = ((/* implicit */long long int) min(((((((~(((/* implicit */int) var_2)))) + (2147483647))) >> (((208604363) - (208604349))))), (((((/* implicit */_Bool) (unsigned short)15090)) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) (short)-28199))))));
}
