/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4082
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
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_5))));
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) & (var_1)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [15U] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((arr_1 [(short)17] [i_0 - 1]) + (((/* implicit */unsigned long long int) var_0)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1866415339U))))))))) + (-1423404971)));
                    var_18 = ((/* implicit */short) (-(((2428551965U) - (2428551975U)))));
                    arr_9 [i_2] [i_1] [(unsigned short)17] [i_2] = (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) arr_3 [i_0]))))) && (((/* implicit */_Bool) 1866415339U))))));
                }
            } 
        } 
    } 
}
