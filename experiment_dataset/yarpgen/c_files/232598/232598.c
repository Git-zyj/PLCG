/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += 149530081202161571;
    var_12 = var_5;
    var_13 &= (var_0 || var_3);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((((1842995504 ? var_7 : var_9)) ^ (!2451971815))) & 1325145829));

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0 - 2] [i_0 - 2] = ((1842995474 <= 1) != ((((arr_2 [i_0 + 1] [8] [i_1]) == -1))));
                    arr_9 [i_0] [i_0] [i_1] = (arr_2 [8] [i_1] [i_2]);
                    arr_10 [i_0 - 1] [i_0 - 1] = 1842995474;
                    var_14 = (arr_4 [i_0] [i_1]);
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_20 [i_0] [i_4] [i_3] [i_4] [i_0] = (max((((2451971815 >= var_1) ? (268435455 & 2451971820) : (~179))), var_1));
                                var_15 += (((((-((215 << (9668146356155661701 - 9668146356155661687)))))) % ((~((~(arr_7 [i_5] [i_1] [9])))))));
                            }
                        }
                    }
                    arr_21 [i_0] [2] [9] = ((((~(arr_19 [i_0 - 1] [i_1] [i_1] [i_0] [i_3] [i_3] [i_0 - 1]))) + (((-1 ? var_1 : var_3)))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    arr_24 [i_6] [i_1] [i_6] [i_1] = 3759425261;
                    var_16 ^= (((arr_19 [i_0] [2] [i_1] [i_0] [i_0 + 1] [5] [i_0]) > (120 || 4026531841)));
                    var_17 = ((~(arr_22 [i_0 + 1] [i_1] [i_6])));
                }
                var_18 ^= var_6;
            }
        }
    }
    #pragma endscop
}
