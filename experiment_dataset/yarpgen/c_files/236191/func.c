/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236191
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) (signed char)0);
        var_20 = ((/* implicit */short) min((max((arr_2 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) arr_3 [i_0]))));
        var_21 = arr_1 [i_0];
        var_22 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)30429)))))) == (max((var_9), (((/* implicit */unsigned int) (short)-8192))))));
        arr_4 [i_0] = ((/* implicit */short) (~(max((arr_2 [(short)7] [i_0]), (var_11)))));
    }
    for (signed char i_1 = 2; i_1 < 17; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) arr_5 [i_1]);
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min(((short)4745), ((short)-8185))))));
    }
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 18; i_2 += 3) 
    {
        arr_11 [i_2 + 1] [i_2] = var_2;
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_2 + 2] [i_2 + 3])) : (((/* implicit */int) (short)-30429)))))));
    }
    var_24 += ((/* implicit */signed char) (-((-(((/* implicit */int) var_14))))));
}
