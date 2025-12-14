/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_2;
    var_12 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [1] = (((-9223372036854775807 - 1) ? (arr_2 [0]) : (arr_2 [2])));
        arr_4 [i_0] [i_0] = (arr_2 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 6;i_2 += 1)
            {
                {
                    arr_9 [1] [i_1 + 1] [i_0] [0] = var_4;
                    arr_10 [8] [i_1] [4] [2] &= (!var_7);
                    arr_11 [i_0] [i_1] [i_0] = (((var_2 >> (((arr_6 [i_2]) - 61156)))) != (arr_7 [i_1 - 2] [i_1 - 1] [i_2 - 3]));
                    arr_12 [i_0] [i_0] [i_2] = (arr_7 [i_1 + 1] [i_2 - 2] [i_2]);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 7;i_5 += 1)
                {
                    {
                        arr_20 [i_0] [i_0] [i_3] [i_4] [i_5] = ((~((var_6 ? (arr_17 [i_0] [i_3] [i_4] [i_3]) : var_0))));
                        arr_21 [i_5] [i_3] [i_0] [4] [i_5] = -4559689964220984702;
                    }
                }
            }
        }
    }
    #pragma endscop
}
