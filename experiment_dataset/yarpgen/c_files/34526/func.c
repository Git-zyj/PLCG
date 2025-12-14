/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34526
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
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_2 [i_1] [i_1 - 2])))))))));
                arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                var_20 = ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_7);
    var_22 = ((/* implicit */unsigned char) var_6);
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-4)))))));
}
