/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191407
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
    var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_11)) ? (4064627431U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (var_6)))) : (var_10)));
    var_20 = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (var_6))), ((~(var_6)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((arr_1 [i_1]) ? (((/* implicit */int) (short)-32756)) : ((-(((/* implicit */int) var_2)))))))));
                    var_22 = ((/* implicit */signed char) ((unsigned long long int) max((1455031344U), (((/* implicit */unsigned int) arr_3 [i_0 + 1])))));
                }
            } 
        } 
    } 
    var_23 += ((/* implicit */unsigned int) (+(((/* implicit */int) var_13))));
}
