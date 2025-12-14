/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((-105 + 2147483647) << (1760748255 - 1760748255))) % var_8));
    var_11 += (!-var_5);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_12 = (arr_1 [i_0] [i_1]);
            var_13 = -78;
            arr_4 [i_0] [i_0 - 2] [i_1] = (!var_3);
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_14 = 65523;
            var_15 = var_2;
        }
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_16 = (((arr_12 [i_4] [i_3] [i_0]) - -61));

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_17 = (arr_16 [i_0] [i_3 - 1] [i_3 - 1] [i_3 - 1]);
                        var_18 = ((((-29869 ^ (arr_1 [i_0 + 1] [i_0 - 1]))) + (arr_0 [14] [i_3 - 3])));
                        arr_18 [i_0] [i_0] [15] [i_3] [i_3] [i_3] = (arr_8 [3] [i_3] [i_5]);
                    }

                    for (int i_6 = 4; i_6 < 15;i_6 += 1)
                    {
                        arr_21 [i_3] [i_4] = (arr_20 [i_0] [i_3 - 2] [7] [i_6] [i_6]);
                        var_19 = (((((!(arr_12 [1] [i_4] [i_6 - 4])))) <= (((arr_2 [i_3 - 3]) ? (arr_9 [i_3]) : (arr_0 [i_3] [i_3])))));
                        arr_22 [i_0] [i_4] [i_4] [i_3 - 3] = ((~(arr_1 [i_3] [i_6])));
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_20 = (min(var_20, (((arr_1 [11] [i_7 - 1]) ^ (((arr_0 [i_0] [i_0]) * -59))))));
                        arr_27 [10] [10] [i_0] = (arr_7 [i_0 - 2]);
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_21 = var_6;

                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_22 = (arr_9 [i_0]);
                            var_23 = var_8;
                        }
                        for (int i_10 = 2; i_10 < 13;i_10 += 1)
                        {
                            arr_35 [i_8] = (((var_5 <= 14366205685525633608) % (arr_34 [i_8] [i_3] [i_3] [i_3] [10] [i_3])));
                            arr_36 [i_8] [i_0] [9] [1] [i_10] = 14366205685525633585;
                            var_24 += (arr_6 [i_3] [i_3] [i_10 + 1]);
                            var_25 = (min(var_25, (arr_20 [5] [i_8] [i_3 - 1] [i_3 - 1] [i_0])));
                        }
                        var_26 *= (((((((arr_13 [i_3] [i_3] [i_3]) != (arr_6 [i_0] [i_3] [i_3]))))) ^ (var_4 | var_2)));
                    }
                    for (int i_11 = 1; i_11 < 15;i_11 += 1)
                    {
                        var_27 = (((((arr_16 [i_0 - 2] [i_3] [i_4] [i_11]) % (arr_37 [i_3] [i_3] [i_3] [i_3]))) + (arr_31 [i_11] [i_0] [i_3 + 1] [i_0] [2])));
                        var_28 = (!((!(arr_33 [i_0]))));
                        var_29 = (max(var_29, (arr_20 [i_0 + 1] [i_0 + 1] [15] [i_0] [i_0])));
                        var_30 = ((arr_37 [i_0] [i_3] [i_3] [12]) > (arr_13 [1] [i_3] [i_3]));
                    }
                    var_31 = ((arr_1 [i_3 - 3] [i_4]) ? (arr_5 [i_4]) : var_2);
                }
            }
        }
        var_32 = var_2;
    }
    var_33 = (var_5 + -8788213438626767568);
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 24;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 24;i_14 += 1)
            {
                {
                    var_34 -= (((((arr_46 [i_12] [i_14]) && (arr_45 [i_12] [i_12]))) ? (((arr_47 [i_12] [6] [24]) | (min((arr_40 [i_13]), (arr_39 [i_14 - 1]))))) : (arr_46 [11] [4])));
                    var_35 = (arr_47 [i_12] [i_13] [i_12]);
                    var_36 ^= ((var_0 - (((((18446744073709551604 ? 73 : 1))) ? (((((arr_41 [i_12] [i_12]) && var_2)))) : (((arr_46 [i_12] [i_12]) | (arr_42 [i_12])))))));
                }
            }
        }
    }
    #pragma endscop
}
