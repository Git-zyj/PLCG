/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232179
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [7ULL] [i_0] = ((/* implicit */long long int) arr_4 [i_2] [i_1 - 4] [i_2]);
                    var_13 = max((min((-1LL), (-651388519593210650LL))), ((+((-9223372036854775807LL - 1LL)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) ((unsigned long long int) var_5));
}
