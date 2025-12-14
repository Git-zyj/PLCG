/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214446
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
    for (signed char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) (_Bool)1);
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_13)))))));
                var_21 = ((/* implicit */unsigned int) (_Bool)1);
                arr_4 [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) arr_0 [i_1] [i_0 + 2]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_16);
}
