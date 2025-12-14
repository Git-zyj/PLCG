/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (max(((min(39213, 39207))), var_1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [14] [i_2] = ((39205 ? 4 : 26329));
                    arr_10 [i_2] [7] [i_2 + 2] = 40648;
                    var_15 = ((!(arr_4 [i_0] [i_1])));
                    var_16 ^= (arr_5 [i_0] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
