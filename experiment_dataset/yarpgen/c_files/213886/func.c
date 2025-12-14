/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213886
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
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) max((((arr_5 [i_0 + 2]) ? (((/* implicit */int) arr_5 [i_0 + 2])) : (((/* implicit */int) arr_5 [i_1 - 1])))), (((/* implicit */int) arr_5 [i_1]))));
                var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)14372)) : (var_9)))) && (((/* implicit */_Bool) ((unsigned short) (unsigned char)2)))))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) var_1)))));
    var_12 -= min((((/* implicit */long long int) ((int) (~(var_3))))), ((+(((long long int) var_6)))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (2147483647) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))))) ? (var_3) : (((/* implicit */unsigned long long int) var_9))));
}
