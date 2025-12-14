/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_16 = (((0 <= var_13) ? (!8740110405830891704) : (var_7 == var_2)));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_17 ^= ((1 << (32704 - 32701)));
                        var_18 = ((arr_11 [10] [i_0] [i_2 + 1] [i_0] [16] [i_2 + 2]) | (arr_9 [i_2] [i_2 - 1] [i_2 + 2] [i_2]));
                    }
                }
            }
        }

        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_19 = (-8740110405830891701 > 9693432924595930998);
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_20 = (arr_5 [i_0] [i_4 + 1] [i_4 - 1]);
                            var_21 = ((8740110405830891677 ? (arr_10 [i_4 - 1] [i_6 - 1]) : (arr_8 [i_0] [7] [7] [i_0])));
                        }
                    }
                }
            }

            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                arr_28 [i_0] [i_4] = (!1);
                var_22 = (~((3173258161 >> (var_0 - 20877))));
            }
            arr_29 [i_4] [i_0] [3] = (var_7 + (arr_25 [9] [i_4 - 1] [13] [i_0] [i_0] [i_0]));
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            arr_32 [i_0] [i_0] = var_10;

            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                var_23 |= (var_9 ? (arr_25 [i_0] [i_0] [i_9] [i_9] [i_10] [8]) : var_12);
                var_24 += ((-8740110405830891692 ? -23604 : ((var_6 ? (arr_13 [1]) : 62718))));
            }
        }
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            var_25 = 25;

            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                var_26 |= (!32750);
                arr_42 [12] [i_11] [i_11] &= (~1);
            }
        }
    }
    var_27 = ((var_0 ? (min(var_4, (18446744073709551602 | var_2))) : (((min(32688, 32712))))));
    #pragma endscop
}
