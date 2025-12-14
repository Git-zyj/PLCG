/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28629
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
    var_12 = ((/* implicit */int) ((min((((/* implicit */long long int) ((var_3) / (((/* implicit */unsigned int) -801683168))))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? ((-9223372036854775807LL - 1LL)) : (-9223372036854775807LL))))) + (((/* implicit */long long int) 502927068))));
    var_13 = ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)50942)), (9223372036854775801LL)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) arr_0 [0LL]))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10U)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7772)))));
            }
        } 
    } 
}
