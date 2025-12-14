/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215159
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
    var_10 = ((/* implicit */unsigned char) (+((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)40119)) : (-1870907044)))))));
    var_11 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) (!(var_1)))));
    var_12 = ((int) (~((~(4294967295U)))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2266822908U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((unsigned char) var_2))))) : ((-((-(1361640340U)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)47415)) : (((/* implicit */int) var_1))))) ? (((int) var_9)) : (((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0]) : (((/* implicit */int) var_6))))));
        var_14 = (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((((/* implicit */_Bool) 918130248)) ? (arr_1 [i_0 + 2]) : (arr_0 [i_0] [(unsigned short)1]))) : (((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0 - 2]))));
    }
}
