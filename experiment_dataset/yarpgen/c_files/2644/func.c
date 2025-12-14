/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2644
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
    var_19 += ((/* implicit */_Bool) (-(((/* implicit */int) var_3))));
    var_20 += ((/* implicit */int) var_14);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_21 += ((/* implicit */_Bool) max((max((((/* implicit */long long int) max((((/* implicit */unsigned char) var_0)), (var_9)))), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) max((arr_4 [i_0 - 2] [i_0 + 1]), (((/* implicit */short) (_Bool)1)))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_1 [i_1])), (((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */unsigned int) 2096128))))))), (min((min((((/* implicit */long long int) var_3)), (9223372036854775807LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0])))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_3);
}
