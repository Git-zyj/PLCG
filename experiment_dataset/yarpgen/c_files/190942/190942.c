/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_2 - 1] [i_3] [i_1] = ((var_10 != (arr_7 [i_0 + 1] [i_2 + 2] [i_2 - 1])));
                        var_13 ^= ((8501735821756763209 ? -1 : -1));
                    }
                }
            }
        }
        arr_12 [i_0 + 1] [i_0] = (((1 || -2) ? var_7 : (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 2])));
        arr_13 [i_0] = (arr_0 [i_0 + 1] [i_0 - 2]);
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 8;i_4 += 1)
    {
        arr_17 [i_4] = (((arr_6 [i_4] [i_4 + 1] [1]) ? 1 : (arr_6 [i_4] [i_4 - 2] [i_4])));
        var_14 = (min(var_14, 16007029910674138642));
        var_15 = (arr_2 [i_4] [i_4 - 1] [i_4 - 1]);
    }
    var_16 ^= 209;
    #pragma endscop
}
