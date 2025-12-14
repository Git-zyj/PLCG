/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] |= 2091952405786220231;
                arr_8 [i_1] [0] [i_0] = 47056;
            }
        }
    }
    var_10 = ((max(0, ((var_9 ? 1755111231 : (-32767 - 1))))));
    #pragma endscop
}
