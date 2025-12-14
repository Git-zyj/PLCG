/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224241
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
    var_15 = ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_11))))));
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [10ULL])) ? (max((((/* implicit */unsigned long long int) (short)0)), (6467361554534495901ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1])))))))))));
                var_17 = ((/* implicit */short) (-(((arr_3 [i_0 - 1] [i_0 - 1] [i_1 + 3]) >> (((arr_2 [i_0 + 3]) - (215958993U)))))));
                arr_6 [i_1] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) arr_0 [i_0 + 4] [16])), (arr_3 [i_0 - 1] [i_1] [i_1 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_2 [i_0 - 1])) % (var_7))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((short) var_13))), (var_2))), (((/* implicit */unsigned long long int) (+(var_9))))));
    var_19 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((unsigned char) var_13))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
}
