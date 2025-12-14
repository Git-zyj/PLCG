/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206571
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
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_17 = var_6;
                    arr_7 [i_0] = ((/* implicit */short) arr_4 [i_0] [i_1] [i_2]);
                    var_18 ^= ((/* implicit */unsigned int) 461863695);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_19 = ((/* implicit */int) arr_3 [i_3 + 1]);
                arr_14 [i_4] [11ULL] [i_4] = arr_9 [i_3] [i_3];
            }
        } 
    } 
}
