/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24437
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
    var_15 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((0) << (((2147483647) - (2147483644))))))));
                arr_5 [i_0] = ((/* implicit */short) (unsigned char)122);
            }
        } 
    } 
}
