/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209340
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (var_1) : (((/* implicit */long long int) min((((/* implicit */int) var_10)), (arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (unsigned short)6873);
    }
    for (signed char i_1 = 3; i_1 < 12; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_4 [i_1 - 3])) ? (((/* implicit */int) (unsigned short)28518)) : (var_15)))));
        arr_7 [i_1] = (+(var_15));
        arr_8 [i_1] = ((/* implicit */signed char) var_7);
        var_18 += ((/* implicit */unsigned int) var_2);
    }
    var_19 ^= ((/* implicit */signed char) var_6);
}
