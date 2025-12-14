/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22811
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 |= ((/* implicit */short) min((((unsigned char) arr_2 [i_2])), (((/* implicit */unsigned char) var_4))));
                    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((var_9), (var_7)))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (((((/* implicit */int) var_3)) >> (((685936603U) - (685936602U))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_8);
    var_22 = ((/* implicit */unsigned long long int) var_16);
    var_23 = ((/* implicit */_Bool) max((min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)0)))), (((/* implicit */unsigned short) (_Bool)1))));
    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
}
