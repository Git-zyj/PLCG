/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_4 * ((var_10 ? 182 : var_13)))) & (((var_13 + 2147483647) >> (var_8 + 91)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 |= ((var_14 < ((((((arr_0 [i_0]) - var_9))) ? (((arr_0 [12]) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0]))) : ((max(-1, (arr_0 [i_0]))))))));
        var_17 = ((max((arr_2 [i_0] [i_0]), (!var_6))));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = min((-127 - 1), (arr_2 [i_1 - 2] [i_1 - 3]));
        arr_6 [i_1] = (((((((var_2 / (arr_3 [i_1]))) && var_12)))));
    }
    for (int i_2 = 3; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_18 = ((+((((max((arr_2 [i_2] [6]), (arr_2 [i_2] [i_2])))) ? (arr_7 [i_2 - 3]) : (!var_9)))));
        var_19 += (((+(((arr_8 [i_2]) - var_4)))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_20 = min(101, (min(var_5, (max(var_1, var_8)))));
                                arr_21 [i_2] [i_2] [i_3 - 1] [i_5] [i_5] [9] = var_14;
                            }
                        }
                    }
                    arr_22 [i_2] [i_2] = (((((180 != var_13) >> (-1 - 249))) <= (((arr_15 [i_2] [i_2] [i_2] [i_2]) * (var_1 ^ 98)))));
                }
            }
        }
        arr_23 [3] = ((91 && ((max(((101 ? var_11 : var_2)), var_2)))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    arr_29 [i_7] [i_7] [i_7] [i_7] = (max(var_4, (((arr_20 [i_7] [i_7]) % (((arr_4 [4] [4]) ? -4 : (arr_27 [7] [i_7] [i_7] [i_8])))))));
                    var_21 *= ((255 - (arr_3 [i_8])));
                }
            }
        }
    }
    for (int i_9 = 3; i_9 < 15;i_9 += 1) /* same iter space */
    {

        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            arr_35 [i_10] = (!var_10);
            arr_36 [i_9] [i_9] [i_10] = (arr_28 [i_10] [i_10] [i_10]);
            arr_37 [i_9] [i_10] [i_10] = (((117 ? (((-8 < (arr_3 [i_10]))) : (arr_13 [i_9] [i_9] [i_9])))));

            /* vectorizable */
            for (int i_11 = 3; i_11 < 15;i_11 += 1)
            {
                arr_41 [i_9 - 3] [4] [i_10] = ((!(arr_10 [i_9 - 3] [i_9] [i_9])));
                var_22 = (((arr_15 [i_11 - 2] [i_9 - 3] [1] [i_11 - 2]) != 119));
            }
            arr_42 [i_10] [i_9] [i_10] = (((arr_24 [i_9 + 1]) ? (((arr_19 [i_9] [i_9 + 1] [i_9 + 1] [i_9]) ? (arr_19 [i_9] [i_9 + 1] [i_9 - 2] [i_9]) : (arr_24 [i_9 - 3]))) : ((min(-72, (arr_19 [i_9] [i_9 - 3] [i_9 - 1] [2]))))));
        }
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            arr_45 [i_12] [0] [i_9] = ((!(!var_8)));
            var_23 -= 56;
            var_24 = ((!(arr_16 [i_9 - 2] [i_9] [14] [i_9 - 2])));
        }
        for (int i_13 = 1; i_13 < 15;i_13 += 1)
        {
            var_25 -= (((max((37 != 212), 134)) > ((max((arr_3 [i_9 + 1]), (arr_13 [i_9 - 1] [5] [i_9 - 1]))))));
            arr_49 [i_9] [i_13] [i_13] = (max(((-50 ? (((arr_38 [i_9] [i_9] [i_13 - 1]) * var_3)) : ((var_11 ? 249 : -84)))), (min(-1, ((var_8 ? 243 : 124))))));
        }
        var_26 ^= (((arr_44 [i_9 - 1] [i_9 - 1] [14]) & 113));
        var_27 &= (((-126 / var_3) ? var_2 : (((var_10 > (99 | -107))))));
        var_28 = (max(var_28, (((+((var_7 ? (95 != var_0) : 22)))))));
    }
    #pragma endscop
}
