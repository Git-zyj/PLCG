/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190802
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                var_14 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_1] [i_1 - 1] [i_1 - 1]) <= (var_9))))) > (((((/* implicit */_Bool) ((long long int) var_13))) ? (((arr_2 [i_0] [i_1] [i_1]) % (var_12))) : (var_1)))));
                var_15 = ((/* implicit */long long int) min((var_15), (-8852293397712128111LL)));
                var_16 = ((long long int) max((var_12), (6896946706106351825LL)));
                var_17 = ((/* implicit */long long int) max((var_17), (((long long int) ((((/* implicit */_Bool) -509521429404829422LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -509521429404829422LL)) || (((/* implicit */_Bool) -5423332041611091086LL)))))) : (-8852293397712128111LL))))));
                arr_4 [i_0] = ((long long int) ((8060614951173456035LL) < (var_8)));
            }
        } 
    } 
    var_18 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
    var_19 = ((((/* implicit */_Bool) var_9)) ? ((((((-(var_10))) + (9223372036854775807LL))) << (((var_13) - (5732684699651314993LL))))) : (((((/* implicit */_Bool) min((6892877268933781199LL), (var_10)))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_9) : (var_3))) : (((long long int) 7743889153071459689LL)))));
}
