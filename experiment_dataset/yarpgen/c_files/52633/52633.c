/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((3383717509 && (((var_6 ? var_2 : 911249787))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0 + 1]) - (arr_1 [i_0 - 1])));
        var_21 = var_3;
        var_22 = ((-(arr_1 [i_0 - 1])));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_1] = (~var_13);
            var_23 = ((~(!3383717509)));
            var_24 = ((!(arr_3 [i_0 - 2] [i_1])));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_9 [i_0] [i_0 + 1] [i_2] = (((arr_1 [i_2]) != 32));
            var_25 = ((-(arr_4 [i_0 + 1] [i_2])));
            var_26 = 911249786;
            var_27 = 3383717510;
        }
        for (int i_3 = 4; i_3 < 16;i_3 += 1)
        {
            var_28 = (max(var_28, (arr_5 [i_0 - 2])));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_29 = (((arr_7 [i_0 - 1] [i_3 - 1] [i_4]) ? (~63) : ((((arr_7 [i_6] [i_3 - 4] [i_6]) ? var_5 : (arr_17 [i_0 - 2] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_6 + 1]))))));
                            arr_20 [i_0 - 1] [i_3 - 2] [i_3] [i_5] [i_6 - 2] = 911249786;
                        }
                    }
                }
            }
            arr_21 [i_3] [i_0] [i_3 - 3] = 3383717509;
            var_30 &= var_3;
        }
        var_31 = ((2884 == (~2884)));
    }
    for (int i_7 = 2; i_7 < 10;i_7 += 1)
    {
        var_32 = (arr_3 [i_7] [i_7 - 1]);
        var_33 = (arr_4 [i_7 + 1] [i_7 + 1]);
    }
    for (int i_8 = 1; i_8 < 12;i_8 += 1)
    {
        arr_26 [i_8] = (~(min(-911249786, -64)));

        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_31 [i_9] [i_8] = (!var_15);
            var_34 += (8821722549267341455 < 63);
            var_35 = ((((((arr_23 [i_8]) <= (arr_29 [i_8] [i_9])))) > (((arr_24 [i_9]) ? 460422933 : 18))));
            var_36 = ((((64 << (3383717509 - 3383717494))) & ((((!(-2147483647 - 1)))))));
        }
        var_37 = (632469433074568861 | -27037);
        arr_32 [i_8] = -2885;
        var_38 = 2733744912;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 2; i_11 < 9;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 8;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 6;i_13 += 1)
                {
                    {
                        var_39 = (!var_11);
                        arr_46 [i_10] [i_11] [i_12 + 1] [i_10] = ((-(arr_38 [i_11 - 1] [i_11 + 1] [i_11 + 1])));
                    }
                }
            }
        }
        arr_47 [i_10] [i_10] = (arr_28 [i_10] [i_10]);
        arr_48 [i_10] = var_17;
    }
    #pragma endscop
}
