/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215864
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
    var_10 = ((/* implicit */long long int) var_3);
    var_11 = ((/* implicit */signed char) (~(var_2)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) arr_6 [i_0] [i_0 + 3] [i_0]))));
                    var_13 |= (~((~(max((((/* implicit */unsigned long long int) arr_3 [i_1])), (arr_4 [i_0] [i_1]))))));
                }
            } 
        } 
    } 
}
