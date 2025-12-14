/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49133
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) max((var_1), (((/* implicit */unsigned short) (short)20830)))))) <= (((((/* implicit */_Bool) (short)-1)) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) min((var_2), ((short)-13))))))));
    var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_8)) & (((/* implicit */int) var_0)))) : (((/* implicit */int) min((var_2), ((short)-18013)))))) ^ (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_14 ^= ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-1)), ((unsigned short)49541))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (short)14460)) ? (((/* implicit */int) (short)27350)) : (((/* implicit */int) (unsigned short)13150)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_1))))))));
        arr_4 [i_0 + 1] = ((/* implicit */short) min((((/* implicit */int) var_10)), (((((/* implicit */int) (short)0)) - (((/* implicit */int) (short)-5965))))));
    }
}
