/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197991
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
    var_14 = (!(((/* implicit */_Bool) var_8)));
    var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)4092)) ? (((/* implicit */int) (unsigned short)15299)) : (((/* implicit */int) (unsigned char)209)))) != (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))) < (((((/* implicit */_Bool) (unsigned short)36018)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((short) ((_Bool) (short)-30028)));
        var_16 &= ((/* implicit */unsigned short) ((unsigned long long int) (-(var_8))));
        var_17 = ((((/* implicit */_Bool) ((short) var_6))) ? (arr_0 [i_0]) : (((((/* implicit */_Bool) 1032192U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [8U]))) : (arr_0 [(unsigned char)7]))));
    }
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (+(((/* implicit */int) ((short) ((unsigned int) var_12)))))))));
}
