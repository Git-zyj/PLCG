/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46143
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
    var_15 = ((/* implicit */signed char) (_Bool)0);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) arr_1 [(_Bool)1]);
        var_17 *= ((/* implicit */unsigned int) var_2);
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) var_5);
        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 5120921033238064534LL)) ? (((/* implicit */unsigned int) 661120731)) : (973488165U))), (((/* implicit */unsigned int) (unsigned short)2880)))))));
    }
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) 1765910891354187501LL)) ? (741825880U) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
    var_20 = ((/* implicit */long long int) ((var_0) * (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    var_21 = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))), (((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))))), (var_0)));
}
