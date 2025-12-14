/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51664
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
    var_17 = ((/* implicit */short) min((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) 4137339479U)) : (max((((/* implicit */long long int) 4137339493U)), ((-9223372036854775807LL - 1LL)))))), (min((((/* implicit */long long int) (_Bool)1)), (0LL)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0 - 1] [i_0] = max((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0 - 1])) : (arr_3 [i_0 - 1] [i_0 - 1] [i_1 - 2]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_0]))))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) << (((var_8) - (3031126113U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_1)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((short) arr_2 [i_0 - 1])))))) : (1143914305352105984LL))))));
                var_19 = ((/* implicit */unsigned int) max((var_19), (var_1)));
                var_20 ^= ((/* implicit */signed char) arr_0 [i_1 + 1] [i_1 - 1]);
            }
        } 
    } 
}
