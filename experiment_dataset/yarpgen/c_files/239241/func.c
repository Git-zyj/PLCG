/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239241
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) - (var_3)));
        var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) >= (var_1))))));
    }
    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1313419326540761458ULL)) ? (var_10) : (var_2)))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) % (var_1)));
    var_14 = ((/* implicit */short) var_6);
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((var_0) & (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) var_2))))) ? (var_6) : (min((((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) var_8))))), (var_5))));
    var_16 = ((/* implicit */long long int) var_9);
}
