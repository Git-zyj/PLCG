/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51296
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (1333710060U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) ? (((/* implicit */int) var_14)) : (((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)1)))) >> (((var_19) - (1907694556U)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) -1461517229);
        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (arr_0 [14ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) * (arr_0 [i_0])));
        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-27778))));
    }
}
