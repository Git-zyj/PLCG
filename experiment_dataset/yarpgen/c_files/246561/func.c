/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246561
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
    var_18 = ((/* implicit */_Bool) min((min((min((595400887U), (var_7))), (((0U) % (((/* implicit */unsigned int) 1517623184)))))), ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_1)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */int) (_Bool)1)), (arr_3 [i_0] [i_1 + 1] [i_0]))) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 2])))), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_0 [i_0 + 2])))))));
                var_20 *= ((/* implicit */unsigned short) ((_Bool) (+(1517623182))));
                var_21 -= min((min((max((((/* implicit */int) arr_0 [i_0])), (-1517623183))), (((arr_3 [i_0 - 2] [i_1] [i_1]) & (((/* implicit */int) arr_2 [i_1])))))), (((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_4 [i_1] [(unsigned short)2] [i_0 - 2])) : (((/* implicit */int) (short)28026)))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)-10168)) : (var_14))))));
            }
        } 
    } 
    var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1517623182)))))) : (var_7)))) ? ((+((+(3575469367U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
}
