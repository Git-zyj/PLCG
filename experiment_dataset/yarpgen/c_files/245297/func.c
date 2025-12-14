/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245297
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)2)) / (((/* implicit */int) arr_0 [i_0]))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)144)) + (((/* implicit */int) var_0)))))));
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)254)) + (((/* implicit */int) var_12))));
    }
    for (unsigned char i_1 = 2; i_1 < 12; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) max((((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) (unsigned char)72))))) << ((((~(((/* implicit */int) arr_4 [i_1])))) + (257))))), (((((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1])) + (((/* implicit */int) arr_5 [i_1 - 2] [i_1]))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_4 [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)251)) && (((/* implicit */_Bool) (unsigned char)168))))) : ((+(((/* implicit */int) arr_4 [(unsigned char)10]))))));
        arr_8 [i_1 + 1] = ((unsigned char) ((((/* implicit */int) arr_4 [i_1 + 1])) > (((/* implicit */int) arr_4 [i_1 - 2]))));
        arr_9 [i_1] [i_1] = (unsigned char)255;
        arr_10 [i_1] [i_1 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) arr_4 [i_1]))))))));
    }
    var_18 = var_7;
}
