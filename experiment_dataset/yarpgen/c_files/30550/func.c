/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30550
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) * (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) var_13)))), (((/* implicit */int) var_12))))));
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_0))));
    var_17 ^= ((/* implicit */long long int) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_18 += ((/* implicit */unsigned short) (~(var_1)));
        var_19 = ((((((/* implicit */_Bool) arr_0 [1])) ? (1316504169771166368LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) / (var_1)));
    }
    var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */int) var_7)) >> (((/* implicit */int) (((-(((/* implicit */int) var_4)))) <= (((/* implicit */int) var_5)))))))));
}
