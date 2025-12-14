/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38103
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
    var_13 = ((/* implicit */unsigned char) (short)18843);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (short)18843)) >> (((/* implicit */int) arr_1 [i_0] [i_0]))))))) ? (((min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) 479933650)))) * (((/* implicit */unsigned int) arr_2 [i_0])))) : (arr_0 [i_0] [i_0])));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (short)18823)) ? (1867115050U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)165)))));
    }
    var_16 = (-(min(((-(var_9))), (((/* implicit */unsigned int) var_8)))));
}
