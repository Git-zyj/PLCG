/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_10 = (arr_1 [i_0 - 1]);
                        var_11 = (arr_8 [i_1] [i_3]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                {
                    var_12 = (arr_9 [i_0 - 1] [9] [i_4 - 1] [i_5 + 1]);
                    var_13 = ((((arr_7 [i_0 - 1] [i_0 - 1]) ^ (arr_13 [1] [i_4] [1]))));
                    var_14 = ((var_1 & (arr_0 [i_0 - 2] [i_5 - 1])));
                }
            }
        }
        var_15 += (arr_5 [i_0 + 3] [i_0 - 2] [i_0 - 1]);
    }
    var_16 = (max((~var_6), ((max(var_4, var_2)))));
    #pragma endscop
}
