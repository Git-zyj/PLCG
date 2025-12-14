/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202582
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = (~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))));
        arr_3 [11U] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [(unsigned short)1]))))), (((((/* implicit */_Bool) var_14)) ? (4294967292U) : (((/* implicit */unsigned int) arr_0 [i_0] [16LL])))))) ^ (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((var_6) >> (((var_13) - (3159069906U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
    }
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_11))));
    var_16 += var_5;
    var_17 = ((/* implicit */unsigned char) var_14);
    var_18 = ((/* implicit */int) var_1);
}
