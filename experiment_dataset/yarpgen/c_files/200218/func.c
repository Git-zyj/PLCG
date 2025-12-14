/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200218
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) (~(((unsigned long long int) (signed char)(-127 - 1)))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)65)) / (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) (unsigned short)57623)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_1 [i_0 + 1]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [(unsigned char)11]))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_11))) / (var_1)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 11; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) (signed char)119);
        var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (-1)))) ? (arr_3 [5LL]) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_18))))));
        var_24 = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))));
    }
    var_25 = (!(((/* implicit */_Bool) (((((~(var_9))) + (9223372036854775807LL))) << (((var_0) - (4826253088970463848ULL)))))));
    var_26 &= ((/* implicit */short) var_13);
}
