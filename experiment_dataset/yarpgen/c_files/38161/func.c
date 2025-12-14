/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38161
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
    var_17 = ((/* implicit */short) max((min((((/* implicit */unsigned int) (_Bool)1)), (393890699U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) max((var_9), (var_2)))) : (((/* implicit */int) var_4)))))));
    var_18 = ((/* implicit */short) min((var_18), (var_0)));
    var_19 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (~(var_13)))))) ? (((/* implicit */int) var_9)) : (min(((+(((/* implicit */int) (signed char)54)))), (((/* implicit */int) var_1))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((3954397188U) % (((/* implicit */unsigned int) 1132805957))));
        var_20 = ((/* implicit */short) arr_1 [i_0]);
        var_21 = ((/* implicit */short) arr_0 [i_0] [i_0]);
    }
}
