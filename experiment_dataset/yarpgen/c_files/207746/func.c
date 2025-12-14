/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207746
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
    var_17 = ((/* implicit */short) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_7))));
    var_18 = (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-14066)), (var_10)))) ? (((var_5) + (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (min((((/* implicit */long long int) var_2)), (var_12))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_19 = arr_1 [i_0];
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (short)8527);
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_4))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)28338)))))));
    }
    var_21 = ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
}
