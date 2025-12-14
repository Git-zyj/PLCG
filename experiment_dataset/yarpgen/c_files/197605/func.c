/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197605
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */int) var_8);
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)32767)), (1159132194)))) >= (0ULL)));
            }
        } 
    } 
    var_21 ^= ((/* implicit */unsigned char) var_4);
}
