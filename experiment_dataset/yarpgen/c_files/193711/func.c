/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193711
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
    var_17 = var_7;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_2 [i_1]))));
                arr_4 [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(min((arr_2 [i_0]), (((/* implicit */unsigned int) (_Bool)1))))))), (max((max((((/* implicit */unsigned long long int) arr_1 [i_1])), (18302628885633695744ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1])))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_16))))) : (var_14)))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-16525)) : (((/* implicit */int) (short)13600)))))))));
}
