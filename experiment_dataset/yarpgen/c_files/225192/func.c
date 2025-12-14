/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225192
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
    var_14 |= ((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : ((+(1695424063U)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) -2147483639))) ? ((-2147483647 - 1)) : (((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0])))));
        var_15 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-3955)) ? (2147483639) : (((/* implicit */int) (unsigned char)0)))) < (((/* implicit */int) arr_1 [i_0 + 1]))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) ((2147483639) == (((/* implicit */int) arr_5 [i_1]))))) < (((/* implicit */int) var_6))))))))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_5 [i_1])))))));
    }
}
