/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = (~(arr_2 [i_0]));
        var_21 = ((var_15 || (((var_12 ? (arr_1 [i_0] [i_0]) : var_11)))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_22 = 18446744073709551606;
            var_23 ^= (((arr_0 [i_1]) != var_9));
            var_24 = 9;
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_25 ^= (((arr_5 [i_0] [i_2] [i_2]) ? 18446744073709551606 : var_1));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_13 [i_4] [i_3 + 2] [0] [i_0] = (((arr_11 [i_3] [i_3 + 1] [4] [i_2]) > (arr_11 [i_4] [i_3 - 1] [22] [21])));
                        var_26 = (10 ? 18446744073709551605 : (arr_4 [i_0] [i_0] [i_0]));
                    }
                }
            }
            var_27 = 4;
            arr_14 [i_0] [i_2] [i_0] = ((!(((~(arr_9 [i_0] [i_2] [i_2] [i_0]))))));
            arr_15 [i_0] = (var_13 == var_4);
        }
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        arr_18 [i_5] = 17592186044415;
        arr_19 [i_5] = ((var_16 ? (((var_16 && ((max(2723149314, (arr_3 [i_5] [i_5]))))))) : (((!(~805953575))))));
        arr_20 [i_5] = (arr_7 [i_5] [i_5]);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        var_28 = (max(var_28, ((max((((8 ? (arr_22 [i_5]) : (((arr_17 [i_7] [i_8]) ? (arr_1 [i_6] [i_6]) : (arr_22 [i_5])))))), 18446744073709551611)))));
                        var_29 = (((((var_11 ? (arr_8 [i_5] [i_6]) : var_1))) & (arr_4 [i_8] [2] [i_5])));
                        var_30 = ((((((!(arr_9 [i_7] [i_7] [i_7] [i_8]))))) != ((((((arr_23 [i_5] [i_5] [i_5]) << (((arr_24 [i_8]) - 1904))))) * (var_3 ^ var_19)))));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        arr_31 [i_9] = -var_16;
        var_31 -= 8;
    }
    var_32 = (((~var_14) & ((var_1 ^ (min(var_6, var_13))))));
    var_33 = 797843050;
    #pragma endscop
}
