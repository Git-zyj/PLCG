/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233582
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned int) max((-1415614384), (1415614383)));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])))));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) (+((-(1184084630)))));
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
        var_13 = ((/* implicit */int) min((arr_0 [i_1]), (arr_4 [i_1])));
    }
    var_14 = ((/* implicit */_Bool) (+(max((((((/* implicit */_Bool) (unsigned short)30808)) ? (((/* implicit */unsigned int) -1184084631)) : (4294967268U))), (((/* implicit */unsigned int) var_2))))));
    var_15 = ((/* implicit */long long int) var_8);
    var_16 = ((/* implicit */unsigned char) var_6);
}
