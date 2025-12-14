/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223839
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
    var_10 = ((/* implicit */_Bool) (-(((var_8) * (((/* implicit */unsigned int) ((int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1212218004)) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))) > (((arr_0 [i_1]) / (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]))))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) var_5);
            }
        } 
    } 
}
