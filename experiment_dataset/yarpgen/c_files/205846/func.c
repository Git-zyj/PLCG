/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205846
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
    var_10 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (3549320865U)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) max((var_6), (((/* implicit */unsigned char) var_9)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) 3549320865U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 745646406U))))));
                    arr_9 [i_2] [i_2] [i_1] [i_0] |= ((((/* implicit */unsigned int) 2147483635)) ^ (745646431U));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_3) : (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (_Bool)1))))), (((var_5) >> (((-2147483635) + (2147483645))))))))));
}
