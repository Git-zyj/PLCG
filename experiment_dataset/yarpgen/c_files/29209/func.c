/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29209
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
    var_13 -= var_0;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) arr_5 [i_1 + 1] [i_1 + 1]))), (((long long int) (unsigned char)255))));
                arr_6 [i_1 + 1] = ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) var_8)))));
                var_15 = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) arr_2 [i_1 + 1] [i_1 + 1])), (var_3)))));
                var_16 = ((/* implicit */int) (-(arr_1 [i_0])));
                arr_7 [i_1] = (~(1346745126U));
            }
        } 
    } 
}
