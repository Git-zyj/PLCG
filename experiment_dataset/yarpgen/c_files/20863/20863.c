/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((1 ? 1 : 1)))));
    var_11 = -1;
    var_12 = -128620467;
    var_13 = 3776219465211223919;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_14 ^= var_4;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (max((max(-var_0, -var_3)), (!var_1)));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_16 = (max(var_16, 65535));
                        var_17 = ((((min(192, ((1 ? 35235 : 45))))) ? ((min(554674788, -1))) : var_6));
                        var_18 += (max(((max((arr_8 [i_0] [i_1] [i_0]), (arr_8 [i_0] [i_2] [i_0])))), (arr_8 [i_0] [i_1] [i_0])));
                    }
                    var_19 += max((((((arr_0 [i_0]) ? 0 : (arr_10 [i_0]))) * ((max(1, 58))))), ((max((arr_11 [i_0] [10] [i_2] [i_2]), (arr_3 [i_2])))));
                }
            }
        }
        arr_12 [i_0] = (((var_3 | var_4) && ((((arr_9 [i_0]) ? (arr_9 [i_0]) : 0)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_20 = 1;
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                {
                    arr_19 [i_5] [12] [i_6] [i_6] = var_7;
                    arr_20 [i_4] [i_4] [i_4] = var_2;
                    var_21 = (min(var_21, ((((arr_11 [i_4] [i_5 - 4] [i_6 + 4] [i_4]) < 30301)))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    {
                        arr_31 [i_7] [i_7] [i_7] [i_9] [i_10] |= (((arr_7 [i_7] [i_7]) ? var_4 : (arr_7 [i_7] [i_8])));
                        arr_32 [i_8] [i_7] = (((!1) >= var_3));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    {
                        arr_39 [11] [i_8] [11] [i_12] = (~1);
                        arr_40 [i_8] = (((arr_18 [i_7] [i_8]) ? (arr_10 [i_11]) : (var_2 && 1882654908)));
                        var_22 = (((arr_30 [i_7] [i_7] [i_11] [i_11] [i_12] [i_7]) ? var_8 : var_6));
                    }
                }
            }
            var_23 = (max(var_23, (((-((30312 ? (arr_7 [i_7] [i_8]) : 2532758608761383788)))))));

            for (int i_13 = 1; i_13 < 16;i_13 += 1)
            {
                arr_43 [i_7] [i_8] [i_13 + 2] = (arr_36 [i_13]);
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        {
                            arr_48 [i_7] [i_8] [i_13] [i_14] [i_15] = ((1 ? var_2 : var_6));
                            var_24 = (~(arr_41 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1]));
                            var_25 = ((-((857403665 ? (arr_38 [i_7] [i_8] [i_13] [i_14] [i_7]) : 554674796))));
                            var_26 += 1654157236;
                        }
                    }
                }
            }
        }
        for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
        {
            var_27 = -var_7;
            arr_51 [i_7] = -3918728601224436688;
        }
        for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
        {
            var_28 = 205;
            arr_55 [15] [15] = (((((var_0 ? var_1 : (arr_47 [9] [9] [i_7] [i_7] [i_7] [i_7])))) ? (!-3) : -4294967295));
        }
        var_29 -= (-127 - 1);
        arr_56 [i_7] [i_7] &= (((var_7 ? var_2 : var_3)));
    }
    #pragma endscop
}
