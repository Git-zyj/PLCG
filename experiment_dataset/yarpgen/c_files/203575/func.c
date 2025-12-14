/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203575
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_9)));
    var_17 -= ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_8)))))))));
                var_19 = ((/* implicit */long long int) max((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_2 [i_0])))), ((+(((/* implicit */int) arr_1 [i_1]))))));
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) arr_1 [i_1]))))) ? (((/* implicit */int) ((var_9) != (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) : ((-(((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)1))))))) : (3852877275U)));
                arr_4 [i_1] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) (signed char)105))));
                arr_5 [i_1] = ((/* implicit */int) var_3);
            }
        } 
    } 
}
