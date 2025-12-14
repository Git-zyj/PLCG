/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202034
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
    var_17 = ((/* implicit */long long int) var_6);
    var_18 *= ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (var_13)))) : (min((var_0), (var_1)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((int) 193789113)))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (+(((193789113) / (((/* implicit */int) (short)7075))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_7), (var_7)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_15))))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_5))))) / (((/* implicit */long long int) ((193789111) / (max((((/* implicit */int) (_Bool)1)), (193789100))))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_12))))) : (((unsigned int) var_9))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_12)))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_9))))))));
        var_21 ^= ((/* implicit */_Bool) ((signed char) (((!(((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) ((long long int) var_7))))));
    }
    var_22 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((var_16) >> (((((/* implicit */int) var_14)) + (94))))))));
}
