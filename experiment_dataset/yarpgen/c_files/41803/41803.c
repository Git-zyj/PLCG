/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_9, (((~(~var_11))))));
    var_14 = (16383 | -564949087);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (arr_0 [1])));
        var_16 = (!15);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_17 = ((~((~(!4294967295)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_18 = ((((!(55761 > 28))) ? ((min(7, (arr_8 [i_1 - 1] [i_1 - 1] [i_1])))) : (arr_2 [i_2] [i_2])));

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_19 = 1423101855;

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_20 = ((((~(max((arr_3 [i_1] [i_1]), (arr_7 [i_4] [i_1] [i_1] [i_1]))))) <= (~8)));
                            var_21 = -1205886036;
                            var_22 = ((~(2215533246 || var_2)));
                            var_23 = ((((max((max(65535, -1)), 9709))) * 4885469502983027868));
                        }
                    }
                    arr_13 [i_1] [i_3] [i_1 - 1] [i_1] = -1;
                    var_24 = var_7;
                }
            }
        }
        var_25 = 22891;
        var_26 = 3206089571;
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            {
                var_27 &= (~-1);
                arr_21 [i_7] &= ((7 ? ((146 ? 31 : -29452)) : 6624));
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        var_28 = var_1;

        for (int i_9 = 3; i_9 < 18;i_9 += 1)
        {
            arr_27 [i_8] = var_0;

            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                var_29 = 1;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 18;i_12 += 1)
                    {
                        {
                            arr_39 [i_8] [i_9 - 3] [i_8] [i_9 - 3] [i_8] = ((arr_6 [i_8 - 1] [14] [i_9 - 3]) ? -881368180 : 1);
                            var_30 ^= var_12;
                        }
                    }
                }
                var_31 = (max(var_31, var_5));
            }
            arr_40 [i_8] [i_8] [3] = var_12;
        }
        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            var_32 = (((arr_5 [i_8 - 1] [i_8]) ? -31 : (-475 * 89)));
            var_33 = ((0 ? 1865 : 274877906943));
        }
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            var_34 = (!-5688363664251111417);
            var_35 = var_1;
            var_36 = (max(var_36, ((((arr_45 [8]) + 3206089571)))));
        }
        arr_47 [i_8] = (((var_5 != var_11) ? (arr_24 [i_8 - 1] [i_8 - 1]) : 130));
        var_37 = (((var_1 < 202) ? (arr_31 [i_8 - 1] [i_8 - 1] [i_8 - 1]) : ((107775657 / (arr_10 [16] [i_8])))));
    }
    #pragma endscop
}
