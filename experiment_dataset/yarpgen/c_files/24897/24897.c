/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_11 ^= (((arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 2]) / (arr_1 [i_1 + 1])));
            var_12 = (arr_3 [i_1] [i_1] [i_1 - 2]);
            var_13 = 4349;
            arr_4 [i_0] [i_1] [i_0] = (~-1);
            var_14 -= ((~(arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 1])));
        }

        /* vectorizable */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            arr_8 [i_2] = (arr_6 [i_0] [i_0]);
            arr_9 [i_0] [i_2] = ((~(arr_7 [i_2] [7])));
        }
        var_15 = (((((~4294965248) ? (~3588005646) : (((min((arr_7 [6] [i_0]), 206)))))) <= (((~((~(arr_1 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_16 = (arr_5 [4] [i_3] [4]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_17 = ((17641612507514818506 ? (arr_16 [i_7 - 1] [11] [i_5] [i_7] [i_6 + 1]) : 805131566194733109));
                                arr_22 [i_3] [i_4] [i_5] [i_6] = var_7;
                                var_18 = (((arr_18 [i_3] [i_3] [i_4] [i_5] [i_6] [i_3]) % 51280));
                                var_19 = (~805131566194733137);
                            }
                        }
                    }
                    var_20 = -41;
                }
            }
        }
        var_21 = ((~(arr_6 [i_3] [i_3])));
    }
    var_22 = var_9;
    var_23 = var_5;
    #pragma endscop
}
