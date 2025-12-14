/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (arr_1 [i_0]);
                    var_17 = (min(var_17, -var_13));
                    var_18 ^= (var_12 | var_9);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                var_19 = (3049551598 & 591829951);
                arr_14 [9] [i_4] = (((3049551616 | var_15) == (arr_13 [8] [i_3 - 2])));
            }
        }
    }
    #pragma endscop
}
