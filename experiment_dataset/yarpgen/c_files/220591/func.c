/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220591
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
    var_15 = var_5;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1 - 2]))) + ((+(var_11))))), (var_12)));
                var_17 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_11)))) ? ((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)244)), (2111691209U)))) : (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 242453313U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26862)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) 3362170938U)), ((~(var_6)))))));
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1243201401U))));
}
