/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236356
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
    var_10 = ((/* implicit */unsigned int) max((max((min((var_5), (var_0))), (var_5))), ((+(max((((/* implicit */unsigned long long int) var_8)), (var_0)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 -= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), ((-((~(var_7)))))));
        arr_3 [13] [i_0] = max((((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_6)) & (((/* implicit */int) var_6))))))), (max((((var_9) % (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) max((var_2), (var_2)))))));
        var_12 = ((/* implicit */_Bool) var_4);
        arr_4 [i_0] = max((4099290113207574045LL), (((/* implicit */long long int) 2719898528U)));
        var_13 &= ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) var_2)), (var_0)))));
    }
    var_14 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(max((var_2), (var_2)))))), (var_1)));
}
