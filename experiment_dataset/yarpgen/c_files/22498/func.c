/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22498
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 255)) : (var_9)))) ? (((/* implicit */unsigned long long int) var_10)) : (18080227623241733533ULL)))) ? ((~(var_11))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_4), (var_15)))) ? (((/* implicit */int) ((signed char) var_1))) : (503316480))))));
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_1))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? ((-(((/* implicit */int) arr_2 [(unsigned char)4])))) : (((int) var_13))));
        var_19 = ((/* implicit */short) max((((/* implicit */unsigned int) var_6)), (var_3)));
        arr_3 [i_0] [5U] = ((((/* implicit */int) var_14)) / (((((((/* implicit */_Bool) (signed char)62)) ? (var_2) : (((/* implicit */int) arr_2 [i_0])))) + ((+(((/* implicit */int) arr_1 [(unsigned short)0])))))));
        arr_4 [i_0 + 1] = var_15;
    }
    var_20 = ((/* implicit */signed char) var_6);
}
