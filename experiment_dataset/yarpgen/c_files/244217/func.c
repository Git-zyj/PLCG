/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244217
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_10 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
                var_11 = var_7;
            }
        } 
    } 
    var_12 = var_0;
    var_13 = (~((~(min((var_0), (var_5))))));
    var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) 805306368))))), (((((/* implicit */int) var_7)) - (((/* implicit */int) var_2)))))) : ((+(var_1)))))));
}
