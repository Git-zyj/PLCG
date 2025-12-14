/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((max((min(((min(var_1, var_2))), -var_1)), (max(var_11, (min(var_11, 0)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (~var_0);
            var_13 = 142;
            arr_6 [i_0] = (var_8 || (((var_5 | (arr_3 [i_0] [i_1])))));
        }

        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            var_14 = (min(var_14, 20));
            var_15 = (max(var_15, (((var_11 || (arr_1 [i_2 + 2] [i_2 - 1]))))));

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_16 = (min(var_16, var_0));
                var_17 = (1873619591191535612 / 2510733338);
                var_18 |= (arr_4 [i_2 - 1] [i_2 + 1] [i_2 + 2]);
            }
            var_19 |= (var_10 || var_1);
        }
        for (int i_4 = 4; i_4 < 19;i_4 += 1)
        {
            arr_16 [i_0] |= ((-1560682529 ? -var_2 : (arr_7 [i_0] [i_4])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        arr_21 [i_0] [i_4 + 4] [i_4 + 4] = (((arr_4 [i_4 - 2] [i_4 - 2] [i_4 + 2]) >> (arr_4 [i_4 - 2] [i_4 - 2] [i_4 + 1])));
                        var_20 -= -77;
                        var_21 = -1873619591191535612;
                        arr_22 [i_0] [i_0] [i_4] [i_5] [i_6] = (--1);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    arr_28 [16] [16] [i_8] [1] |= 143;
                    var_22 = (max(var_22, (arr_23 [i_0] [i_7])));
                    var_23 += (((arr_15 [8] [i_8]) && (arr_26 [i_0] [i_7])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        arr_32 [i_9] &= 16;
        var_24 += (arr_29 [i_9] [i_9]);
        var_25 ^= 6583856871936714599;
    }
    #pragma endscop
}
