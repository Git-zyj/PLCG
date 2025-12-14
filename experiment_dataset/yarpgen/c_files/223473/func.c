/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223473
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
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) arr_0 [14LL]))));
                arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_6)) < (((/* implicit */int) (short)-21769))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) max((((var_9) + (var_7))), (((/* implicit */long long int) max((3900003315U), (((/* implicit */unsigned int) (unsigned short)59663))))))))));
    var_12 = ((/* implicit */unsigned int) var_3);
}
