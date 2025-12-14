/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39148
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
    var_18 &= ((/* implicit */int) (+(((((((/* implicit */unsigned int) ((/* implicit */int) (short)28176))) & (var_13))) * ((~(var_1)))))));
    var_19 = ((/* implicit */long long int) var_17);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(min((var_13), (((/* implicit */unsigned int) (unsigned short)35226)))))))));
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) & ((~((~(((/* implicit */int) arr_3 [i_0 - 2]))))))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_7 [i_1] [15] &= ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) (~(arr_5 [i_1])))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -226268924)) ? (((/* implicit */int) var_11)) : (-226268919)))) ? (((((/* implicit */_Bool) -226268924)) ? (293775255U) : (((/* implicit */unsigned int) 226268924)))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) -824969012)) : (var_15))))));
        var_21 = ((/* implicit */signed char) ((2870453906U) | (((/* implicit */unsigned int) (~(arr_6 [i_1]))))));
        arr_9 [i_1] = (+(((((/* implicit */unsigned int) arr_6 [i_1])) - (0U))));
    }
}
