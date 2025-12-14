/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_8, (((((var_4 ? 101 : var_9))) ? 258476678 : (max(var_8, var_6))))));

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_15 = ((var_7 ? var_10 : ((((arr_3 [i_3] [i_3]) ? (arr_10 [i_0] [i_1] [i_3] [i_4]) : -34)))));
                            var_16 += (arr_2 [3]);
                            var_17 &= var_4;
                        }
                    }
                }
            }

            for (int i_5 = 3; i_5 < 23;i_5 += 1)
            {
                arr_14 [19] [i_5] = (((!(arr_13 [i_0] [i_5] [i_0] [i_0 + 2]))));
                var_18 = (max(var_18, (((((((arr_8 [i_0] [i_1] [i_5] [i_0] [i_0] [i_0]) ? 116 : (arr_13 [i_0] [i_0] [i_1] [i_5 - 2])))) ? (arr_0 [i_5 + 2]) : (arr_0 [i_0]))))));
                var_19 = (max(var_19, (arr_3 [i_0 - 4] [i_0 + 2])));
            }
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_20 -= (((((18128 ? var_12 : (arr_0 [i_6])))) ? (88 && -101) : (arr_16 [i_6 - 1])));
                            var_21 = (((0 * 0) ? (arr_19 [i_8 - 1] [i_6 - 1] [i_6 + 1] [i_1] [i_1] [i_0 - 4]) : 109));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
        {
            var_22 = (min(var_22, ((max(((((max(var_11, (arr_9 [i_0] [i_9] [i_9] [18] [22] [i_0])))) ? (arr_15 [i_0 - 4] [i_9] [i_9]) : (var_10 & var_10))), (((((0 ? var_5 : var_2))) ? (arr_9 [i_0 + 2] [i_0] [i_0] [4] [i_9] [i_9]) : -6)))))));
            var_23 -= ((((((arr_24 [i_0 + 3]) ? (arr_24 [i_0 - 1]) : (arr_24 [i_0 - 4])))) ? ((max((~33669), (var_4 && -14)))) : var_10));
            var_24 = ((((!((12841350394139092400 != (arr_19 [i_9] [i_9] [i_9] [i_0 - 4] [i_0 - 4] [i_9])))))));
        }
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 24;i_11 += 1)
            {
                {
                    arr_32 [1] [i_10] = ((-((((arr_27 [i_0] [i_0 - 4] [i_10]) <= (arr_31 [i_11] [i_11 - 1] [i_11 + 1] [i_10]))))));
                    arr_33 [i_0] [i_10] [i_11] = -77;
                }
            }
        }
        arr_34 [2] = (min(47408, -258476679));
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            {
                var_25 = ((((+((12841350394139092400 ? (arr_1 [i_12] [i_13]) : -101))))) == (((((arr_13 [i_13] [i_13] [i_13] [i_12]) && 149)) ? (((~(arr_19 [i_12] [i_12] [i_12] [i_12] [i_13] [i_13])))) : (arr_17 [i_12] [i_13] [i_13] [i_13]))));
                var_26 -= 47423;
            }
        }
    }

    for (int i_14 = 3; i_14 < 16;i_14 += 1)
    {
        var_27 |= ((((((arr_6 [i_14] [i_14] [i_14 - 3]) == 2109518781))) != ((~((var_4 ? var_2 : (arr_18 [i_14] [9] [19])))))));
        var_28 = (arr_6 [i_14] [i_14] [i_14 - 3]);
    }
    #pragma endscop
}
