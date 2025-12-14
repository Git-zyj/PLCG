/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216547
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
    var_18 = ((/* implicit */unsigned int) ((var_1) + (((/* implicit */unsigned long long int) ((var_2) ? (max((1509210884900147252LL), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) var_15)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_19 = ((var_1) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
                var_20 &= ((/* implicit */int) arr_5 [i_0] [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_4);
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */long long int) -2049994858)))), (max((17LL), (((/* implicit */long long int) var_13)))))), (((/* implicit */long long int) (~(((/* implicit */int) var_11))))))))));
    var_23 *= ((/* implicit */unsigned int) 10069221755890363762ULL);
}
