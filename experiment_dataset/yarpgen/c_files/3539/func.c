/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3539
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
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) var_5))));
    var_13 ^= ((/* implicit */_Bool) var_11);
    var_14 = ((/* implicit */short) var_4);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)16706))) | (max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) arr_0 [i_0] [(unsigned short)5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16706))) : (2436344870U)))))));
        var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0] [0]))))) : (((30039784U) / (4264927512U)))));
    }
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)-16706)) + (16708))))), (var_6)))) ? (((/* implicit */int) (short)22259)) : ((~(((/* implicit */int) var_0))))));
}
