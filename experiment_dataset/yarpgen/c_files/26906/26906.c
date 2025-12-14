/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-9223372036854775807 - 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_8 [i_3] [i_1] [i_3] = ((((((arr_1 [i_3 - 1]) ^ (arr_1 [i_3 - 1])))) ? ((((arr_1 [i_3 - 1]) ? var_6 : (arr_1 [i_3 - 1])))) : (18446744073709551615 | var_9)));
                            arr_9 [14] [i_3] = (max((arr_0 [i_3 - 1] [i_3 - 1]), (arr_0 [i_3 - 1] [i_3 - 1])));
                            arr_10 [i_0] [i_3] [i_0] [i_3] = ((!((((arr_5 [i_2] [i_3 - 1]) & 0)))));
                        }
                    }
                }
                arr_11 [i_1] = (-(arr_4 [i_1] [i_0] [i_0] [i_0]));
            }
        }
    }
    var_11 = (max(var_0, (min((max(-153517702, 153517699)), var_1))));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 8;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {

                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        arr_21 [i_7] [i_5] [i_4] = -153517707;
                        arr_22 [i_4] [i_5] = (((arr_17 [i_4] [1] [i_4]) || (arr_12 [i_5 - 1])));
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_12 = ((!(arr_4 [i_5 - 1] [i_5 + 1] [i_5 + 2] [i_5 + 3])));
                        arr_26 [i_8] [i_5] [i_8] [i_8] = var_8;
                        var_13 = (arr_3 [i_5 + 2] [i_5]);
                    }
                    for (int i_9 = 2; i_9 < 10;i_9 += 1)
                    {
                        var_14 = 244;
                        var_15 = ((~(arr_24 [i_5 + 1] [i_5] [i_5] [i_5] [i_5 - 1] [i_5 - 1])));
                    }
                    arr_29 [i_4] [i_4] [6] = (((var_3 + -97) + (arr_17 [i_4] [i_5] [i_6])));

                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_16 = ((((((arr_0 [i_4] [i_5]) ? var_8 : (arr_31 [i_4])))) ? (arr_23 [i_5 + 3] [i_5] [i_5 + 3] [i_10]) : (arr_12 [i_4])));

                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            var_17 = (arr_14 [i_5 + 3] [i_5 + 1]);
                            arr_37 [i_11] [i_5] [i_11] = (((arr_2 [i_4] [i_5]) ? (((!(arr_5 [19] [i_11])))) : (!1250482682)));
                        }
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            arr_41 [i_4] [i_12] [i_4] [i_12] = -153517702;
                            arr_42 [i_4] [i_12] [i_5] [i_6] [7] [i_12] = ((3842999465459991945 ? 3842999465459991945 : (-2147483647 - 1)));
                        }
                    }
                }
            }
        }
        var_18 = -122;
    }
    for (int i_13 = 1; i_13 < 12;i_13 += 1)
    {
        arr_47 [i_13] [i_13] = (min(5143884092895148371, (((min(-153517702, 1))))));
        arr_48 [i_13] [i_13] = (max(-var_1, (((35632 / (arr_0 [i_13 + 1] [i_13 - 1]))))));
    }
    #pragma endscop
}
