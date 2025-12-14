/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245448
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
    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned char)64)), (min((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) var_9))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((/* implicit */int) arr_3 [i_0 - 4] [i_0 - 4] [i_0 - 3])), ((-(((/* implicit */int) arr_3 [i_0 + 2] [i_0 - 3] [i_0 + 3])))))))));
                arr_6 [i_0] [i_0 - 4] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_1] [i_1] [i_0 + 2])) | ((~(((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))));
                arr_7 [i_1] [i_0 - 4] = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_0 - 1]))));
                var_22 ^= ((/* implicit */short) (-(((/* implicit */int) max((((((/* implicit */int) var_15)) >= (var_17))), (arr_3 [i_0 + 3] [i_0 - 2] [i_0 - 1]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_16);
}
