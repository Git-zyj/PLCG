/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213317
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (~(((/* implicit */int) (_Bool)1)));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+((-((+(((/* implicit */int) var_2))))))));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned long long int) var_17);
    var_19 = ((/* implicit */short) max((((/* implicit */unsigned int) var_15)), (max((var_17), (((/* implicit */unsigned int) var_15))))));
}
