/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45209
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
    var_17 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_3 [i_0 - 1] [i_1]))));
                var_19 += ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0 - 1] [i_1 + 1]))))), (min((((/* implicit */long long int) arr_3 [i_0 - 2] [i_1 - 1])), (var_9)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_5))));
}
