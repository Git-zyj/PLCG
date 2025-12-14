/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (-10 / 27);
                var_17 = (max(var_17, ((max((max(((max(91, -10))), (-58 & 10))), (((200 < (228 + -38)))))))));
            }
        }
    }
    var_18 = 0;
    var_19 ^= max(-354731286, (min((57 ^ -590684013), (122 & 1359702196))));
    #pragma endscop
}
