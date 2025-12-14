/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34363
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)131)) ? (0ULL) : (((/* implicit */unsigned long long int) 5LL))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-2489))))) : (262143U));
        var_17 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) 4294705153U)))) ? (((/* implicit */int) max((var_10), (((/* implicit */short) var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        arr_2 [i_0] = var_1;
    }
    var_18 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (~(var_14)))) ? (((/* implicit */int) min((((/* implicit */short) var_13)), (var_7)))) : (var_9)))));
}
