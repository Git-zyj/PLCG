/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_6 && var_6);

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_13 = ((arr_0 [i_0] [i_0]) & 0);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_0 - 2] [7] [i_2] [7] = ((max((((arr_8 [i_0] [i_0]) % (arr_9 [i_0 - 4] [i_1] [i_2] [i_3]))), (arr_1 [i_0]))));
                        var_14 += (arr_2 [i_0 - 3] [i_1] [i_2]);
                    }
                }
            }
        }
        var_15 -= (arr_8 [i_0] [2]);
        var_16 ^= (((arr_9 [i_0] [i_0 + 2] [i_0 - 3] [i_0]) << (((arr_2 [i_0 + 2] [i_0] [i_0]) + 2135472608))));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_17 = (((arr_12 [i_4]) < (arr_13 [i_4])));
        var_18 = (arr_12 [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                {
                    arr_20 [i_4] [i_6] = (arr_12 [i_4]);
                    var_19 ^= (arr_18 [i_6] [i_6] [1]);
                }
            }
        }
    }
    var_20 = var_3;
    #pragma endscop
}
