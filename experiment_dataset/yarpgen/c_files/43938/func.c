/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43938
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_17)) : (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_17)))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((unsigned char) var_12)))));
        var_22 = ((/* implicit */_Bool) var_15);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_6 [0LL] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */int) (_Bool)1)) : (-300139703)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (var_19)))) : (((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
        var_23 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((min((var_10), (((/* implicit */long long int) var_17)))), (var_19)))), (min((var_2), (((/* implicit */unsigned long long int) var_14))))));
        var_24 = ((/* implicit */signed char) var_16);
    }
}
