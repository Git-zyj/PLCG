/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214091
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        arr_3 [3LL] = ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_7) : (((/* implicit */long long int) 2013289737))))) ? (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))) : (arr_0 [i_0 - 1] [i_0 + 1])));
        arr_4 [i_0] [i_0 + 1] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))));
    }
    var_14 = ((/* implicit */short) ((1234181268U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    var_15 -= ((/* implicit */unsigned char) ((unsigned long long int) var_5));
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */int) ((short) var_9))), ((+(((/* implicit */int) var_9))))))), (var_7)));
}
