/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241021
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) var_7);
        var_13 = ((/* implicit */short) ((int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_9)))));
        var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_8)) : (15326918166684727738ULL))) >> (((var_4) - (1469728442647316501ULL)))));
    }
    var_15 ^= ((/* implicit */unsigned short) max((((/* implicit */int) var_10)), ((~(((((/* implicit */_Bool) (unsigned short)20790)) ? (((/* implicit */int) var_2)) : (var_8)))))));
    var_16 = ((short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
}
