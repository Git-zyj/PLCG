/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 5077052052363219141;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_0] [i_0] = ((-16131 ? ((16190 ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 1]))) : -16190));
                    var_18 ^= 77;
                }
            }
        }
    }
    #pragma endscop
}
