/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_13;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_2] = (arr_2 [i_1] [i_1] [i_1]);
                    var_20 *= (arr_3 [i_1]);
                }
            }
        }
    }
    var_21 = var_6;

    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_22 *= ((((max((arr_7 [i_3] [i_3]), (arr_7 [i_3] [i_3])))) ? (arr_9 [i_3] [i_3]) : var_0));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                {
                    var_23 = (arr_14 [i_3] [i_5 - 1]);
                    var_24 = (min(var_13, (arr_8 [i_5 - 1])));
                    var_25 = (arr_12 [i_5 + 1]);
                }
            }
        }
        arr_18 [i_3] [i_3] = (~3187121966);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_26 *= 1107845336;
        var_27 = (arr_20 [i_6]);
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        var_28 = (arr_15 [i_6] [i_6]);
                        var_29 = var_2;
                        var_30 = 3187121966;
                    }
                }
            }
        }

        for (int i_10 = 3; i_10 < 24;i_10 += 1)
        {
            var_31 = (max(var_31, (((~(1892634988 ^ var_10))))));
            var_32 = (((((var_12 ? (arr_20 [i_6]) : (arr_24 [i_6] [i_6] [i_6] [i_10])))) ? (var_4 + var_8) : (arr_25 [i_10] [i_10 + 1])));
            arr_31 [i_10] [i_10 + 1] = (((arr_9 [i_6] [i_10 - 2]) ^ (arr_22 [i_10] [i_10 - 1])));
            var_33 = (arr_8 [i_6]);
        }
        for (int i_11 = 1; i_11 < 21;i_11 += 1) /* same iter space */
        {
            var_34 = (((arr_30 [i_11 + 4] [i_11 + 2]) ? (arr_22 [i_11 + 3] [i_11 + 4]) : (arr_24 [i_11 + 3] [i_11 + 2] [i_11 + 2] [i_11 - 1])));
            arr_34 [i_11] [i_11 + 3] = (((arr_32 [i_11 + 1] [i_11 + 2] [i_11 - 1]) ? (arr_32 [i_11 + 1] [i_11 + 2] [i_11 - 1]) : 368179531));
        }
        for (int i_12 = 1; i_12 < 21;i_12 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 21;i_14 += 1)
                {
                    {
                        var_35 = (((((-27525 ? (arr_7 [i_6] [i_13]) : (arr_28 [i_14 + 2] [i_12] [i_6])))) | (((arr_22 [i_6] [i_13]) - var_9))));
                        var_36 = (((arr_7 [i_12 + 2] [i_14]) ? (arr_29 [i_12 + 3] [i_12] [i_14 + 1]) : (arr_39 [i_6] [i_12 + 1] [i_13] [i_12 + 1])));
                        var_37 &= 2962;
                        var_38 = -65535;
                    }
                }
            }
            var_39 = ((!((548450030 && (arr_26 [i_6] [i_12] [i_12 + 2])))));
            /* LoopNest 3 */
            for (int i_15 = 1; i_15 < 21;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        {
                            var_40 *= (arr_37 [i_6] [i_16] [i_17]);
                            var_41 &= (arr_43 [i_12] [i_16]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
