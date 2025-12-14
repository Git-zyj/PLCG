/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_3 [i_0 - 1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [5] [i_0] = (((((0 ? var_3 : (arr_9 [i_0] [i_1] [i_0] [4])))) ? ((min((arr_8 [i_0 + 2]), (arr_3 [i_0])))) : ((((arr_7 [i_0] [i_3]) == (arr_7 [i_3] [i_1]))))));
                                var_15 = (((arr_11 [1] [i_1] [1] [i_0]) ? ((~(((!(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : var_4));
                                var_16 *= 1;
                            }
                        }
                    }
                }
                var_17 ^= (arr_12 [1] [i_1] [i_1] [4] [i_1] [i_1]);
                var_18 = arr_0 [i_0] [i_0];
            }
        }
    }

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
        {
            var_19 ^= ((!(arr_19 [i_5])));
            var_20 = var_5;
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {
                        var_21 = ((((max(1, (min((arr_25 [i_7] [4] [11]), var_5))))) ? (((((arr_17 [i_5]) - 764440085)) << (((arr_28 [1] [i_7] [4] [i_8] [i_9]) - 116)))) : (((((min(1, 1011215889))) ? (arr_26 [i_5] [i_5] [i_5]) : var_2)))));
                        var_22 = (((((1 ? ((((!(arr_23 [21] [5]))))) : (arr_19 [i_5])))) ? (arr_24 [i_5] [i_5] [i_5] [i_5]) : ((~(((arr_24 [i_5] [i_7] [i_8] [i_9]) & 1933724383))))));
                    }
                }
            }
            arr_29 [i_7] |= (arr_23 [i_5] [5]);
            arr_30 [i_5] = (!1);
        }
        arr_31 [i_5] [i_5] = (((((((arr_21 [i_5]) ? (arr_22 [i_5] [i_5]) : var_6)))) ? (arr_19 [i_5]) : ((min((((6786 >= (arr_22 [i_5] [i_5])))), ((529738214 ? 6786 : -22496)))))));
        var_23 = ((+((~((((arr_19 [i_5]) && (arr_24 [i_5] [i_5] [i_5] [1]))))))));
        var_24 = var_11;
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                {
                    arr_38 [i_10] [1] [i_10] [i_10] = (!1738059914);
                    arr_39 [i_10] = 22496;
                    var_25 = ((((min(0, 1))) % (((arr_4 [i_11] [i_10]) / (arr_4 [i_11] [i_10])))));
                }
            }
        }
        var_26 = (max((~-1), ((~((8021567746174437015 ? var_3 : (arr_8 [i_10])))))));
    }

    for (int i_13 = 1; i_13 < 16;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                {
                    var_27 = ((!((((!1011215889) << (((((arr_44 [i_13] [i_15] [i_15] [i_15]) ? var_3 : var_4)) - 141)))))));
                    var_28 -= (58749 ? (arr_22 [1] [i_15]) : ((~(arr_18 [i_13 + 1]))));
                }
            }
        }
        var_29 -= (~1);
    }
    #pragma endscop
}
