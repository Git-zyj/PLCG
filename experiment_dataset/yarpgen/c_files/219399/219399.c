/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_9 ? 186 : var_3));
    var_11 = var_5;
    var_12 *= 70;
    var_13 ^= (((~(~var_9))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = 69;
        var_15 = ((69 ? ((((arr_1 [i_0]) & var_4))) : (8369521666733820093 & 4294967295)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_16 = (min(var_16, (((((arr_3 [14] [17]) | var_2))))));
            arr_9 [i_1 + 1] [i_1] [i_2] = (187 || 187);
            var_17 = (var_6 < 643896011);
            arr_10 [i_1] [i_2] |= (arr_4 [i_1 + 1]);
        }
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                var_18 ^= (arr_1 [i_1]);
                var_19 -= 186;
                var_20 = (max(var_20, ((((4294967284 ? 1 : -87))))));
                var_21 = (30 | 42);
                arr_17 [i_1 - 2] [i_3 - 1] [i_4] = (arr_4 [i_1]);
            }
            arr_18 [i_3] = 203;
        }
        var_22 = ((68 / (arr_4 [i_1 + 1])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_23 &= 58;
        arr_21 [i_5] = ((var_9 ? (arr_20 [10] [i_5]) : 0));
        var_24 = ((+((4663837460584814813 ? (arr_14 [i_5] [i_5] [i_5]) : (arr_1 [10])))));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {

        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    {
                        var_25 = 15;
                        var_26 *= (arr_27 [12] [i_6 - 1] [i_7 + 1]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            var_27 = (((arr_12 [i_7 - 1] [i_6 - 1]) ? 2378068574 : (arr_12 [i_7 + 2] [i_6 - 1])));
                            var_28 *= (arr_37 [i_11]);
                        }
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            arr_43 [i_6] [i_6] [i_10] [i_6] [i_13] [i_6] = 0;
                            var_29 = (min(var_29, ((((((~(arr_41 [i_6 - 1] [i_6] [i_11] [i_6 - 2] [i_6 + 1] [i_6 - 1] [i_6])))) != (5527978214218412398 + 3))))));
                            arr_44 [i_6] [i_7 + 2] [i_7] [i_7] [i_7 + 1] = (((((203 ? var_8 : var_7))) ? 168 : (arr_3 [i_6 - 2] [i_6 - 2])));
                            var_30 = (max(var_30, (((~(arr_30 [i_6 - 2] [i_11]))))));
                            arr_45 [i_6] [i_6] [i_6 - 1] [i_6] = 4294967281;
                        }
                        var_31 = (arr_41 [i_6 + 1] [i_11] [i_11] [i_11] [i_6] [i_7] [i_7 - 1]);

                        for (int i_14 = 2; i_14 < 16;i_14 += 1)
                        {
                            var_32 = var_5;
                            var_33 = ((var_2 ? 4663837460584814813 : (arr_46 [i_6 - 1] [3] [i_7] [i_7] [i_7 - 1] [i_7 + 2] [i_14 - 2])));
                            arr_49 [i_14] [i_14] [i_14 - 2] [i_6] [i_14 + 2] = 0;
                        }
                    }
                }
            }
        }
        for (int i_15 = 1; i_15 < 15;i_15 += 1)
        {
            var_34 = (min(var_34, (((var_4 ? (((var_6 || (arr_12 [0] [i_15])))) : (!68))))));
            var_35 = (min(var_35, var_5));
        }
        var_36 = 9;
        var_37 = 18;
        var_38 = (-1 <= 901445832);
        var_39 = ((1 ? 174 : 123));
    }
    #pragma endscop
}
