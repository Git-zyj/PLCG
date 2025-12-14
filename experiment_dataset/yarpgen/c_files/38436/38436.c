/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_11 += (arr_2 [i_2]);
                    arr_8 [0] [1] [i_2] [i_0] = var_7;
                    var_12 = (max(1, (min(1432467600, (arr_1 [i_0 - 1])))));
                    arr_9 [i_0] = 1;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 8;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    arr_17 [i_3 - 1] [i_3] [i_3 + 2] [i_3] = (min((min(var_8, (arr_14 [i_3 - 1] [i_5] [i_5]))), ((min((arr_14 [i_3 - 2] [i_4] [i_5]), var_7)))));
                    var_13 ^= ((+(min((arr_10 [i_3 + 2] [i_4]), (max(var_3, 1))))));
                }
            }
        }
    }
    var_14 = var_0;
    #pragma endscop
}
