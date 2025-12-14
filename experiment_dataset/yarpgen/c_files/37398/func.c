/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37398
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_2 [5U])) : (((/* implicit */int) (unsigned char)186))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [(short)18]))))) : (-7721739755792045101LL))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                arr_6 [i_1] [i_0] = ((/* implicit */int) max((max((((/* implicit */short) (unsigned char)176)), (arr_3 [i_1 - 1]))), (((/* implicit */short) ((((int) var_10)) != (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [12])) || (((/* implicit */_Bool) (unsigned char)49))))))))));
                var_13 = ((/* implicit */signed char) var_12);
                var_14 = ((/* implicit */unsigned int) min(((-((-(arr_4 [i_0]))))), (((long long int) ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
            }
        } 
    } 
    var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((var_6), (((/* implicit */short) var_2)))))));
    var_16 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((var_6), (var_9)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((((/* implicit */short) var_2)), (var_12)))))), (((/* implicit */int) max((var_9), (((/* implicit */short) (!(((/* implicit */_Bool) var_6))))))))));
}
