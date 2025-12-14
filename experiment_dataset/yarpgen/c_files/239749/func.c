/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239749
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
    var_12 = ((/* implicit */signed char) (unsigned short)63305);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned short)59452)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20666))) : (6802107371622319670LL))) : (arr_1 [i_0])));
        var_14 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (-(((/* implicit */int) var_5)))))));
        arr_2 [i_0] = ((((/* implicit */_Bool) 6802107371622319680LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32))) : ((-(15475342765307125051ULL))));
    }
    var_16 = ((/* implicit */signed char) 4575657221408423936LL);
}
