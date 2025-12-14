/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_14 += (arr_0 [i_0 + 1]);
        var_15 &= (arr_1 [12]);
        var_16 -= (arr_0 [i_0 + 1]);
        var_17 -= (arr_1 [2]);
        arr_2 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_18 ^= (arr_4 [i_1] [i_1]);

        /* vectorizable */
        for (int i_2 = 4; i_2 < 9;i_2 += 1)
        {
            var_19 = (arr_7 [i_2] [i_1] [i_2]);
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        {
                            arr_17 [i_2] = 8796093022207;
                            var_20 = (max(var_20, (arr_10 [i_5 + 2] [8] [i_1])));
                            var_21 |= (arr_14 [i_2 - 2] [i_5 + 3] [i_5] [3]);
                        }
                    }
                }
            }
            var_22 = (arr_4 [i_2 - 2] [i_2 - 2]);
            var_23 *= (arr_7 [i_1] [i_2 + 3] [i_2 + 3]);
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                var_24 = 30633;
                var_25 = (arr_21 [i_7] [i_6 + 1] [i_7 + 2]);
                var_26 = (arr_20 [i_7 + 2] [i_6 - 1] [i_6 + 1]);
            }
            var_27 = (min(var_27, (arr_20 [i_1] [i_1] [i_1])));
            var_28 = (max(var_28, (arr_0 [i_1])));
        }
        var_29 = 32;
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 10;i_9 += 1)
            {
                {
                    var_30 += (arr_30 [i_9 - 2] [i_9 + 1] [i_9 - 1] [i_1]);
                    var_31 |= (arr_15 [i_1] [i_1] [i_1] [i_9] [i_9] [i_9]);
                    var_32 = 1104442419;
                }
            }
        }
    }
    var_33 = var_10;
    var_34 = var_10;
    #pragma endscop
}
