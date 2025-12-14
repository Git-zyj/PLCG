/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 *= -1;
        var_16 = (min(var_16, (arr_1 [i_0] [i_0])));

        for (int i_1 = 4; i_1 < 12;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_17 = ((((-(arr_9 [i_3] [i_0] [i_0] [i_0])))) / (((arr_2 [i_3] [5] [i_0]) ? (arr_7 [i_3] [i_1] [i_0]) : (arr_2 [i_0] [i_1] [i_3]))));
                        var_18 = (127 - 2653807675);
                        var_19 = ((((!(arr_4 [i_3] [i_2 - 3] [i_1])))));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_12 [4] [i_1 + 1] [4] [i_1 + 1] [i_0] = 7715632284422580190;
                            var_20 = 64;
                            var_21 = -257156320157667138;
                            var_22 *= (!-787253793);
                            arr_13 [i_0] [i_0] [i_1 + 4] [i_2 + 4] [i_3] [i_0] = ((~(((arr_7 [i_1 - 3] [i_2] [i_4]) | (arr_2 [i_0] [i_1 + 1] [i_4])))));
                        }
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = 1090055718;
                    }
                }
            }

            for (int i_5 = 2; i_5 < 13;i_5 += 1)
            {
                arr_17 [i_0] [i_1] [i_0] [i_5] = 5;
                arr_18 [i_0] [i_0] [i_0] = ((2527807633 != (arr_15 [i_1 - 3] [i_5 + 3] [i_0] [i_1 - 3])));
                var_23 = 3921221878;
            }
            var_24 = 154334070;
        }
        for (int i_6 = 4; i_6 < 12;i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_25 = (max(var_25, -154334057));
                            var_26 = (arr_15 [i_9] [i_0] [i_0] [i_6]);
                        }
                    }
                }
            }
            var_27 = (~3930399175141590010);
            var_28 = (min(var_28, (((arr_6 [i_6 - 4] [i_6] [i_0] [i_0]) ? 3204911556 : (arr_27 [i_6 + 1] [i_6 - 3] [i_6] [i_6 - 2] [i_6] [i_6])))));
            var_29 = (arr_16 [i_6 - 3] [i_6 - 3] [i_6]);
        }
        for (int i_10 = 4; i_10 < 12;i_10 += 1) /* same iter space */
        {
            var_30 = (min(var_30, 112));
            arr_31 [i_0] = 6;
        }
        for (int i_11 = 2; i_11 < 13;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    {
                        var_31 = (arr_26 [11] [i_0] [i_0] [11] [i_12] [i_13]);
                        var_32 = ((((((arr_3 [i_0]) ? (arr_24 [i_0] [i_11] [i_0] [i_13] [i_13]) : 3204911556))) && -31));
                    }
                }
            }
            var_33 = (arr_4 [i_11 + 2] [i_11 + 2] [i_0]);
            var_34 = (((arr_35 [i_11 - 1] [i_0] [i_11 + 1] [i_11]) ? -127 : -115));
            var_35 += (((1090055740 ? (arr_32 [6]) : 7715632284422580190)));
        }
    }
    var_36 = (max(var_36, ((min(3, -var_2)))));
    #pragma endscop
}
