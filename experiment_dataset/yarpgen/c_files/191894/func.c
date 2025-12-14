/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191894
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
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 11)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)22733)))) : (((((/* implicit */int) var_7)) + (((/* implicit */int) (short)32767))))))) : (var_8));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) 1467983613U)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */int) arr_1 [i_0] [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_5) ? (arr_0 [i_0]) : (var_13))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_6))));
        arr_6 [i_0] [i_0] = ((/* implicit */signed char) var_14);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 22; i_2 += 3) 
        {
            var_16 = ((((/* implicit */_Bool) arr_8 [i_2] [i_1])) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) (short)-22715)));
            arr_12 [i_1] [i_1] [i_1] = (~(((/* implicit */int) (signed char)-66)));
            arr_13 [i_1] [i_2 + 1] = ((/* implicit */int) (-(arr_8 [i_1] [i_2 - 2])));
        }
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_9))));
    }
    var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)0), (((/* implicit */short) var_4)))))) : (var_10))), (((/* implicit */unsigned long long int) (-(((var_5) ? (var_8) : (2826983697U))))))));
}
