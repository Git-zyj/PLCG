/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43389
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)46781))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)82)), ((unsigned short)14230)))) ? (((/* implicit */long long int) var_3)) : ((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (signed char)112)))))))));
    }
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) (((~(((/* implicit */int) var_10)))) ^ (((((-1663957413) + (2147483647))) >> (((((/* implicit */int) (signed char)126)) - (106)))))))) : (var_12)));
}
