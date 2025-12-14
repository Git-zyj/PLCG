/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52680
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (max((var_8), (((/* implicit */long long int) var_14))))))) ? (var_15) : (var_15)));
    var_19 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_14))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (unsigned short)49152)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_9)))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) var_11)), (var_7)))) && (((/* implicit */_Bool) (unsigned short)65535))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        var_20 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (unsigned short)127)) ^ (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)112))))) | (max((min((-1LL), (-7LL))), (((/* implicit */long long int) arr_1 [i_0 + 2]))))));
        var_21 |= ((/* implicit */long long int) var_5);
    }
}
