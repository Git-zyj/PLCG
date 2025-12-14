/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197457
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
    var_16 = ((/* implicit */int) ((var_1) != (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */signed char) 5898230921772786031ULL);
                    var_18 = ((/* implicit */int) 5898230921772786050ULL);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_9);
}
