/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24923
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
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) arr_1 [(_Bool)1]);
                var_16 = ((/* implicit */unsigned int) arr_0 [(unsigned char)5]);
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_13);
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-9419)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (2136692199U)))), (4218421141917473199ULL)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (!(var_7)))), (((((/* implicit */int) var_7)) << (((var_6) - (10416956673110900023ULL)))))))) : (var_11)));
}
