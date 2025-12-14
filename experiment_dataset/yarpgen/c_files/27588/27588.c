/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (1 + 1);
    var_14 = (max(var_14, -1));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (min(23, ((((arr_1 [i_0]) * var_2)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [9] [i_1] [i_2] = ((arr_6 [1] [i_1] [i_2] [8]) ? (((((arr_1 [i_0]) != (arr_1 [i_2]))))) : var_8);
                    var_15 = 1;

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_11 [4] [19] [i_2] [i_2] = ((33 ? 32752 : 0));
                        var_16 *= (arr_5 [i_3] [i_2] [i_1]);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_15 [i_0] [i_2] [20] [i_4] [i_4] [i_4] = var_9;
                        arr_16 [i_0] [i_0] [17] [i_0] |= ((((-48 > ((-43 ? 4 : 189))))) * (((arr_9 [i_0] [i_1] [10]) >> (!var_1))));
                        var_17 = (((arr_0 [i_4]) ? (!152690921) : var_6));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        var_18 = (((((~(arr_4 [i_2])))) & (-8126646572875383849 / var_7)));
                        var_19 = (max(var_19, 1));
                        arr_20 [i_0] [i_0] [12] [i_0] [i_0] [i_5] = ((7458595809809831144 ? (arr_18 [i_0] [i_5 - 1] [i_5 + 2] [i_5 + 3]) : (arr_17 [i_5 + 3] [i_5] [i_5 + 1] [i_5])));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_25 [i_1] [i_2] [i_6] = var_4;

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_20 &= var_8;
                            arr_28 [i_7] [i_7] [i_7] [i_0] = 11338;
                        }
                        for (int i_8 = 1; i_8 < 19;i_8 += 1)
                        {
                            var_21 = var_4;
                            arr_31 [i_0] [i_6] = var_12;
                            var_22 &= 0;
                            arr_32 [i_0] [i_2] [i_0] [i_6] [5] [i_6] [5] = ((-(min(var_10, -1788800770))));
                            var_23 = (min(var_23, -2177));
                        }
                    }
                }
            }
        }
        arr_33 [17] = (((((arr_21 [19]) || (arr_21 [11]))) ? (((arr_21 [i_0]) ? -1788800774 : (arr_21 [i_0]))) : (min(1, var_8))));
        arr_34 [0] = var_10;
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            arr_42 [i_9] [i_9] = ((min(var_12, (((1 >= (arr_9 [6] [i_9] [6])))))));
            arr_43 [i_9] [i_9] = (arr_18 [i_9] [i_9] [i_10] [i_10]);
            var_24 = 2147483626;
            var_25 = (min(var_25, (((!((((max(1, 1))) >= (((arr_0 [i_9]) ? 18693 : (arr_29 [i_9] [i_10] [i_9] [12]))))))))));
            arr_44 [i_9] = 1;
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_26 = -243;
            var_27 = (min((arr_41 [i_9] [i_11] [i_11]), (((((max(var_4, 46843)))) ^ var_8))));
            arr_49 [i_11] [i_9] = (arr_1 [i_9]);
        }
        var_28 |= (var_11 ^ 50);
        arr_50 [6] [i_9] = (min((((var_6 >= var_11) - ((1 ? var_0 : var_4)))), (((-16 != (arr_40 [i_9] [i_9] [i_9]))))));
    }
    for (int i_12 = 1; i_12 < 1;i_12 += 1)
    {
        arr_55 [i_12] = (max((((-116 % var_6) ? (max(-924209943, 1)) : (arr_53 [i_12]))), ((min(-1, 1)))));
        var_29 = (min(var_29, 9223372036854775807));
    }
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        var_30 = 23;
        var_31 = (arr_30 [13] [1] [i_13] [i_13] [i_13] [1]);
    }
    #pragma endscop
}
