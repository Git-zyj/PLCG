/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40596
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((((2911884461U) / (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) - (((/* implicit */int) var_11)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (((var_19) << (((var_5) - (142765093)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_7 [(short)10] [i_0] [i_1] = ((((/* implicit */int) var_14)) <= (((int) var_1)));
                var_21 = arr_1 [i_1];
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) > (var_10))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (max((((/* implicit */unsigned long long int) (short)8)), (arr_5 [i_0]))))))));
            }
        } 
    } 
}
