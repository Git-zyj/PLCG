/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40585
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_1))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1 - 1]))) + (arr_1 [i_0]))) * (((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1])) ? (((((/* implicit */unsigned long long int) var_9)) | (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1 - 2])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) * (((/* implicit */int) (!(((_Bool) var_10)))))));
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_11))));
    var_21 = ((/* implicit */unsigned int) var_6);
}
