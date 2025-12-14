/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225901
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
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) / (var_4))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) ((int) ((arr_2 [i_1 - 1] [i_1 - 1]) % (((/* implicit */long long int) ((unsigned int) arr_1 [i_0] [i_1]))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (3815572630U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (signed char)-51))))) : (3815572630U)))) ? (((((/* implicit */_Bool) ((arr_2 [i_0] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_0 [i_0] [i_1])), (arr_2 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)9])) ? (arr_3 [i_1 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1 + 1]))))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_1 [(short)20] [12U])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1 - 1]))))), (((/* implicit */long long int) min((arr_0 [(short)18] [i_1]), (arr_0 [i_0] [i_0])))))))));
            }
        } 
    } 
}
