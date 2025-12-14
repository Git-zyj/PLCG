/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202220
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_0)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_13 = ((_Bool) (!(((/* implicit */_Bool) (short)6358))));
        arr_2 [i_0] = ((/* implicit */short) var_9);
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (short)232))) ? (((arr_3 [i_1]) - (arr_3 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) var_1))))))));
        var_15 = ((unsigned long long int) ((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))));
        var_16 = ((/* implicit */int) (unsigned short)4);
    }
    var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_7)) * (((/* implicit */int) var_3))))));
}
