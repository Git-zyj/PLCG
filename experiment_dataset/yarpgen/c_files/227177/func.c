/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227177
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
    var_18 = var_13;
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) 866076978U);
                arr_4 [i_0] = min((var_9), (((/* implicit */unsigned int) ((arr_0 [i_1 - 1] [i_0 - 1]) | (arr_0 [i_1 + 1] [i_0 + 1])))));
            }
        } 
    } 
    var_20 &= ((/* implicit */long long int) var_9);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) & (max((var_3), (((/* implicit */unsigned int) var_0)))))))));
}
