/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30528
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
    var_15 = ((/* implicit */short) max((var_1), (((/* implicit */unsigned short) var_8))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_1] [i_0])) ^ (((/* implicit */int) (unsigned short)45184))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min((((unsigned long long int) arr_0 [i_1 + 1])), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) arr_0 [i_1 - 1])))))));
            }
        } 
    } 
}
