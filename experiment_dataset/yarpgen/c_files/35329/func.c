/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35329
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) var_8);
        var_13 = ((/* implicit */long long int) ((signed char) var_5));
        var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] = (-(var_8));
    }
    var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_11)) ? (((var_1) / (((/* implicit */int) var_6)))) : (((/* implicit */int) var_7))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_0))) != (((/* implicit */long long int) ((/* implicit */int) var_7)))))) <= (var_11)));
}
