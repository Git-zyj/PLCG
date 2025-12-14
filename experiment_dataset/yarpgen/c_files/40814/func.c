/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40814
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) max((((var_14) * (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_16)), (var_4))))));
                var_20 = ((/* implicit */short) ((4294967290U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))));
                var_21 = ((/* implicit */unsigned int) var_0);
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (min(((-(var_9))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12)))))))));
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) (-(var_8)))) ? (var_7) : (((/* implicit */long long int) var_8))))));
}
