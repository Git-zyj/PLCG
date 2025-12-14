/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24562
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
    var_18 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))), (((/* implicit */int) min(((unsigned short)65519), (var_15))))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (var_12) : (((((int) (_Bool)1)) ^ (((((/* implicit */int) (short)1761)) / (((/* implicit */int) (_Bool)1))))))));
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_7))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned char) (((((_Bool)1) || ((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) ? (11708288228744468023ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64)))));
                var_22 = ((/* implicit */unsigned int) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_2))));
            }
        } 
    } 
}
