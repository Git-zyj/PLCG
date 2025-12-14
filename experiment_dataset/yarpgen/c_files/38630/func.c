/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38630
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)0))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)64))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [(unsigned short)6])) : (((/* implicit */int) var_13)))))))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) >= (((((((/* implicit */_Bool) 7864320)) ? (var_15) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_1])))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))), (max((((/* implicit */unsigned long long int) var_0)), (var_15))))))));
}
