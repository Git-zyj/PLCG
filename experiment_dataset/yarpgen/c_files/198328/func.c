/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198328
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_18 -= ((/* implicit */_Bool) arr_1 [i_0]);
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (unsigned short)8432)), (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 872445630U)))) / (3422521677U)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((var_19), (var_3)));
}
