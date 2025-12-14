/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190796
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
    var_18 ^= ((/* implicit */signed char) (~((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)71))) > (var_15))))))));
    var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) var_12)) - (((/* implicit */int) var_1)))))), ((~(((/* implicit */int) var_12))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_12))))))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [(unsigned short)9] [i_0]))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21))) : (var_4)))))));
        var_21 += ((/* implicit */unsigned long long int) var_3);
    }
}
