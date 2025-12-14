/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232315
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
    var_11 = ((/* implicit */unsigned long long int) var_9);
    var_12 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((arr_0 [i_1]) - (4294967268U))), (((/* implicit */unsigned int) max((arr_4 [i_1] [i_0]), (((/* implicit */int) var_6)))))))) ? ((+(max((((/* implicit */unsigned long long int) var_0)), (var_7))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(var_9)))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (arr_3 [i_0]) : (((/* implicit */long long int) arr_4 [i_0] [i_1])))))))));
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned short) (short)10237))))) ? (((((((/* implicit */_Bool) (unsigned char)26)) && (((/* implicit */_Bool) arr_0 [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))) : (arr_3 [i_0]))) : (((/* implicit */long long int) (-(max((var_2), (((/* implicit */int) arr_1 [i_0])))))))));
            }
        } 
    } 
}
