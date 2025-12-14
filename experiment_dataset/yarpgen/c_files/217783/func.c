/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217783
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [(unsigned short)2] &= ((/* implicit */unsigned long long int) (-(((((long long int) arr_0 [i_0 + 1] [i_1])) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
                var_17 *= ((/* implicit */short) max((((((/* implicit */int) (short)10472)) + (0))), (((/* implicit */int) ((short) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_4)) - (65)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (unsigned short)1834);
}
