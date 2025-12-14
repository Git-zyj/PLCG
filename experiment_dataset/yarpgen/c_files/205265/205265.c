/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_11 [12] [i_1] = ((0 >> (18446744073709551615 - 18446744073709551601)));
                    arr_12 [i_1] = ((var_12 > (arr_4 [i_0] [i_0] [i_2])));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_15 [i_0] [i_1] [9] [i_3] = (max((18446744073709551615 * 61), var_6));
                        var_16 = ((15 + (929776854 - 18446744073709551614)));
                        arr_16 [12] [i_1] [i_2] [i_3] = 1;
                        var_17 = ((((min(3999979115137620399, 1))) ? (arr_3 [i_3]) : var_10));
                    }
                    arr_17 [i_1] [i_1] [i_2] [i_0] = 2;
                }
            }
        }
    }
    var_18 ^= 956656460379880496;

    /* vectorizable */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_19 += (((arr_21 [i_4]) ? 1 : (((119 >= (arr_21 [i_4]))))));
        arr_22 [i_4] = (((arr_19 [i_4]) ? (arr_20 [i_4]) : (arr_18 [i_4])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_20 = ((~(arr_27 [i_8])));
                                var_21 = ((-(((arr_7 [12] [i_7] [i_8] [12]) ? 3846956081275087920 : (arr_7 [i_9] [i_8] [i_7] [i_6])))));
                                arr_36 [i_6] [8] [i_7] [i_8] [i_9] |= (((arr_18 [i_5]) >= (((arr_14 [2] [i_6] [i_6] [i_7] [i_6]) ? 360629324 : -32748))));
                            }
                        }
                    }
                    var_22 = (max(var_22, (((arr_20 [i_5]) ? (arr_20 [i_6]) : (arr_7 [i_5] [i_6] [12] [12])))));
                }
            }
        }
        var_23 = ((!(arr_10 [i_5] [i_5] [i_5])));
        var_24 = ((1454901784 ? (arr_6 [i_5]) : 1));
    }
    #pragma endscop
}
