/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201958
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
    var_15 = ((/* implicit */unsigned long long int) var_6);
    var_16 = ((/* implicit */short) var_13);
    var_17 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))))) << (((((/* implicit */int) arr_2 [(signed char)11] [i_0])) - (53994)))))) ? ((((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)1))))) : (((/* implicit */long long int) arr_1 [i_1] [i_0]))));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_3 [i_0])), (max((((/* implicit */short) arr_4 [i_0])), (var_2)))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_11);
}
