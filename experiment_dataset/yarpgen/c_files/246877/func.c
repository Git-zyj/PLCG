/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246877
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
    var_16 = ((/* implicit */_Bool) ((var_14) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-17))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)20)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((var_9) > (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : ((~(((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) ((short) var_3))) ? (((/* implicit */int) min((var_6), (((/* implicit */short) (signed char)6))))) : (((/* implicit */int) ((_Bool) var_12))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])))))));
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) (signed char)127)) | (-26035861))) : (((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12344))) & (7301338911824742693ULL))))));
                arr_7 [(short)6] [i_1] [(short)12] &= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((unsigned int) arr_3 [4] [4]))) || (((/* implicit */_Bool) ((short) arr_3 [6U] [6U]))))));
            }
        } 
    } 
}
