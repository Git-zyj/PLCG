/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191167
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
    var_11 = ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned short) var_5)))))) : (var_1));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) ((unsigned char) (unsigned short)16958)))))));
    var_13 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)190))) % (max((((unsigned int) 355276804U)), (3939690491U))));
    var_14 &= ((/* implicit */unsigned char) 784954023U);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [(unsigned char)2] |= ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) (unsigned char)124)));
        var_15 = arr_2 [i_0] [i_0];
    }
}
