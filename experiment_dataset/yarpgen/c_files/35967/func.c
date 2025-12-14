/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35967
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) var_14))))));
        arr_4 [i_0 + 2] [i_0] = ((/* implicit */short) max((min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0]))))), (min((((/* implicit */unsigned int) (_Bool)0)), (4294967295U))))), (max((((arr_2 [i_0]) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) var_6))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) max((((/* implicit */signed char) arr_2 [i_0 + 2])), (var_3)))), (((arr_2 [i_0 - 1]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))));
        var_17 = ((/* implicit */unsigned short) (-(max((var_6), (((/* implicit */int) var_2))))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0 + 2]))))) ? (((/* implicit */int) min((arr_2 [i_0 - 1]), (var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)57)))))));
    }
    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_12))));
}
