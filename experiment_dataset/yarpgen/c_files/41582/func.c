/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41582
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
    var_19 |= (-((-(((/* implicit */int) var_9)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_20 ^= ((var_10) == (((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) var_5))))));
        var_21 ^= (-(((((/* implicit */int) var_8)) + (((/* implicit */int) var_2)))));
        var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((var_1) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) : (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_1))))))))))));
    }
    var_24 &= (-(((/* implicit */int) (!(((/* implicit */_Bool) 4083560202U))))));
}
