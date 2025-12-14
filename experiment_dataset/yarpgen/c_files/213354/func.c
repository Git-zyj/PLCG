/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213354
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned short) var_2)), (arr_1 [i_0]))), (((/* implicit */unsigned short) ((short) 783334776)))))) ? ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_2 [(short)1] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_1 [9])))) ? (var_10) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) -737347156)) ? (((/* implicit */int) (unsigned short)29144)) : (((/* implicit */int) (signed char)84)))), (((/* implicit */int) var_7)))))));
    }
    var_21 = ((/* implicit */signed char) -2147483645);
    var_22 = ((/* implicit */short) var_14);
}
