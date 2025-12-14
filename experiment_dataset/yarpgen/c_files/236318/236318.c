/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((!(((1781038407 ? 13057661422355612133 : 1347714971)))))), (((var_0 ? var_3 : var_13)))));
    var_15 = (max(var_15, -var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (var_13 != var_8);

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_16 = (min(var_16, (((1840652014 ? 39 : -1781038407)))));
                        var_17 = (!var_4);
                    }
                    var_18 = (((arr_2 [i_2] [i_2]) ? ((var_11 ? 2454315299 : 4904719341755965074)) : (((var_7 ? var_6 : var_12)))));
                }
            }
        }

        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            var_19 = (((((3 ? 1 : 2147483647))) ? ((-1057079445 ? var_2 : var_5)) : (arr_9 [i_0] [i_0] [i_0] [i_4])));
            arr_13 [i_0] [i_0] = var_8;
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_20 = (var_12 && 3093693693);
            var_21 = (var_11 >= var_5);
            arr_18 [i_0] [i_0] = -1057079456;
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_21 [8] [i_0] [i_6] = (!var_1);
            arr_22 [i_0] [i_0] = var_2;
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        var_22 = (min(var_22, (((6610113583953218759 / (arr_29 [i_7 + 1] [i_7 + 1] [i_7 + 1]))))));
                        var_23 = (min(var_23, (((var_8 && (~var_2))))));
                        arr_30 [i_0] [i_7] [6] [i_0] = ((var_8 * (arr_7 [i_7] [i_7 + 3] [i_7 + 3] [i_7 + 2])));
                        var_24 = ((var_10 > (!var_12)));
                        var_25 = ((~(arr_16 [i_7 - 3] [i_7 + 3] [i_0])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        arr_35 [i_9] = (arr_31 [i_9]);
        var_26 = (((~var_3) ? var_4 : var_7));
        arr_36 [i_9] = (5600140049747875945 ? 11 : 7);
        var_27 = var_1;
        var_28 ^= ((var_7 < ((((arr_31 [i_9]) != var_5)))));
    }
    var_29 = var_7;
    #pragma endscop
}
