/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190533
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10))))) ? ((~(((/* implicit */int) var_17)))) : (((/* implicit */int) ((short) var_9))))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) var_10))))))));
        var_20 += ((/* implicit */short) min((((var_9) ? (((/* implicit */int) max((var_4), (var_3)))) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_15))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_14), (var_14))))));
        arr_5 [i_1] = ((/* implicit */short) ((unsigned long long int) min((var_13), (((/* implicit */unsigned short) var_1)))));
    }
    var_21 = ((/* implicit */short) ((((_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))));
}
