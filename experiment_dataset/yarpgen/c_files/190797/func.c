/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190797
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
    var_20 = ((/* implicit */_Bool) ((var_18) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (5928842141437049869LL))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(3501570404U)))) | (min((var_16), (((/* implicit */long long int) (signed char)103))))))) ? (((long long int) ((var_18) ? (((/* implicit */unsigned int) var_6)) : (var_9)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        var_23 = ((((/* implicit */_Bool) 805306368U)) ? ((-(var_11))) : (((/* implicit */int) ((unsigned short) var_5))));
    }
    var_24 = ((/* implicit */signed char) (~(min(((((_Bool)1) ? (var_9) : (262143U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 4294705145U)) <= (var_4))))))));
}
