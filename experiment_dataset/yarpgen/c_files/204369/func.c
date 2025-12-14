/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204369
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))));
                arr_5 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((int) (~(((((/* implicit */int) var_5)) - (((/* implicit */int) (_Bool)1)))))));
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) % (max((var_2), (var_3))))), (((/* implicit */unsigned long long int) ((var_10) * (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_4))))))))))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 4606910399682122737LL))));
}
