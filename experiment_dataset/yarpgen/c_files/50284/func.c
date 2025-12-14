/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50284
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-66)) - (((/* implicit */int) (signed char)65))))) ? (((/* implicit */long long int) 2147483647)) : (((-7860592424242847578LL) % (((/* implicit */long long int) 8388607U))))));
        var_17 *= ((/* implicit */_Bool) (signed char)-67);
    }
    var_18 -= ((((((/* implicit */_Bool) var_10)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) | (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_5)))))))));
    var_19 *= var_16;
    var_20 = ((/* implicit */unsigned int) max((((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_12)))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) max((((/* implicit */short) var_15)), (var_4)))) : (((/* implicit */int) ((short) var_2))))))));
}
