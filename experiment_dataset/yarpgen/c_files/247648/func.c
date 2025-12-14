/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247648
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
    var_20 = ((-4896779003401521458LL) | (((/* implicit */long long int) (-(((((/* implicit */int) var_1)) & (((/* implicit */int) var_5))))))));
    var_21 = var_13;
    var_22 = ((/* implicit */unsigned char) var_17);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (((_Bool)1) || ((_Bool)0))))));
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) min(((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))), (min((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775797LL))))), ((+(((/* implicit */int) var_1)))))))))));
                arr_9 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) arr_2 [i_1]))))));
            }
        } 
    } 
}
