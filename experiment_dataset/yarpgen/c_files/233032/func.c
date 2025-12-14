/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233032
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
    var_18 ^= ((/* implicit */long long int) ((signed char) (signed char)-13));
    var_19 = ((/* implicit */unsigned int) min((var_0), (((/* implicit */short) var_3))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_20 += ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_14)), (((8153868176152541681LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)13))))))) << (((var_2) + (728800244)))));
        var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (signed char)13))));
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((_Bool) var_14)))) || (((_Bool) var_10)))))));
    }
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((long long int) var_16)))));
}
