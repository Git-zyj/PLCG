/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -3415997253;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((65521 ? 15 : 32767));
                arr_7 [i_0] = 65521;
                var_12 = ((0 ? 113 : (min(((-25565 ? -8084218438389432183 : 1)), (((50037 ? -1024 : 1)))))));
            }
        }
    }
    #pragma endscop
}
