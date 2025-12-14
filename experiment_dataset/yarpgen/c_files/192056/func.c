/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192056
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
    for (signed char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned int) max((arr_0 [i_0 - 3]), (((/* implicit */signed char) ((_Bool) arr_0 [i_0 + 1])))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) + (max((((/* implicit */int) max((var_2), (((/* implicit */unsigned char) (_Bool)1))))), (((((/* implicit */_Bool) var_6)) ? (2134526405) : (((/* implicit */int) (short)63))))))));
                var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) var_8))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) var_0);
}
