/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19538
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_17) : (((/* implicit */unsigned int) 2147483647)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)10273)) <= (((/* implicit */int) (unsigned char)64))));
    }
    for (signed char i_1 = 3; i_1 < 19; i_1 += 2) 
    {
        arr_10 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_9 [20LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191))) : (24ULL)))))) || (((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)32764))) < (4278190080U))) ? (-1) : (((/* implicit */int) var_5)))))));
        var_20 = ((/* implicit */int) 268435455U);
        var_21 -= ((((/* implicit */_Bool) ((unsigned int) arr_9 [i_1 - 3]))) ? (((((/* implicit */int) arr_9 [i_1 - 1])) + (((/* implicit */int) arr_9 [i_1 + 2])))) : (((((/* implicit */int) arr_9 [i_1 + 3])) + (((/* implicit */int) arr_9 [i_1 - 1])))));
        var_22 = ((/* implicit */unsigned int) 65535);
    }
    var_23 = ((/* implicit */unsigned int) var_6);
}
