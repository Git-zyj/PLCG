/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200200
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
    var_10 = 62426060;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [1U] = ((/* implicit */short) arr_5 [(short)12] [i_0] [i_0]);
                var_11 = ((/* implicit */signed char) 62426060);
                var_12 = ((/* implicit */unsigned int) 62426062);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) -4459665150601527339LL)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)29625)) : (((/* implicit */int) var_8)))))));
    var_14 = ((/* implicit */unsigned char) ((signed char) ((unsigned long long int) ((((/* implicit */_Bool) -397431937)) ? (((/* implicit */unsigned long long int) -2147483622)) : (18095734163610440949ULL)))));
}
