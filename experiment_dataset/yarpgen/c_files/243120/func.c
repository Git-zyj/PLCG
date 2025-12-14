/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243120
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_15 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0 - 1])) && (((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1] [i_0 - 1])))), (((((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) var_14)))) && (((/* implicit */_Bool) min((var_3), (4294967266U))))))));
                var_16 = ((((/* implicit */_Bool) (+(arr_3 [i_1])))) ? ((+(arr_3 [i_0 + 3]))) : (((/* implicit */unsigned long long int) ((unsigned int) var_9))));
                var_17 -= 522240U;
            }
        } 
    } 
    var_18 *= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1097234404U)) ? (1097234404U) : (var_6))), (var_13)))) ? (((1097234395U) ^ (((((/* implicit */_Bool) 2970146712U)) ? (var_6) : (1097234404U))))) : (((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 1324820560U)) : (var_8)))));
    var_19 = ((/* implicit */unsigned long long int) var_6);
    var_20 &= max((var_14), (((unsigned long long int) 87259263485102039ULL)));
}
