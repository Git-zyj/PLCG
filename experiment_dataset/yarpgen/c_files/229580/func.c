/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229580
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
    var_10 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) var_6)), (18446744073709551615ULL)))))) || (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) == (((long long int) 1789265324354207706LL))))));
    var_11 = ((/* implicit */long long int) ((((((unsigned long long int) var_0)) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) >> (((((/* implicit */int) var_8)) - (11982)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) var_6);
                var_13 = ((/* implicit */long long int) arr_2 [i_0]);
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775806LL))) + (28LL)))))) ? (max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 8957937522726020738ULL)))))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) max(((_Bool)1), (var_2)));
}
