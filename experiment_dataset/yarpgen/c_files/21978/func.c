/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21978
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
    var_16 = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) (_Bool)1)), ((~(-1))))), (((/* implicit */int) var_0))));
    var_17 = ((/* implicit */signed char) max((((/* implicit */long long int) (~(-1779723808)))), (max((((/* implicit */long long int) var_11)), (var_5)))));
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_9))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((arr_3 [i_0] [i_1]), (548682072064ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [(short)10])))))))) ? (((((/* implicit */_Bool) var_9)) ? (min((arr_3 [i_1] [i_0]), (((/* implicit */unsigned long long int) 637611896U)))) : (((/* implicit */unsigned long long int) 637611896U)))) : (((/* implicit */unsigned long long int) min(((+(3657355399U))), (((/* implicit */unsigned int) (short)1920)))))));
                arr_5 [i_1] [i_1] = var_8;
            }
        } 
    } 
}
