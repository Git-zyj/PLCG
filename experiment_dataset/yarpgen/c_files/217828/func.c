/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217828
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
    var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_12))))))) / (((((/* implicit */_Bool) ((13136038241350152160ULL) & (18446744073709551586ULL)))) ? (var_17) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))))));
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551592ULL))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [(short)8] [(short)8])) & (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 4])))) & (((((/* implicit */int) arr_1 [i_0] [i_1 - 3])) ^ (((/* implicit */int) arr_1 [i_0 + 1] [i_1 + 2]))))));
                var_22 = ((/* implicit */signed char) var_17);
            }
        } 
    } 
}
