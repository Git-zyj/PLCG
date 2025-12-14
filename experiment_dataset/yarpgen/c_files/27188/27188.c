/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    {
                        var_11 = (-((1 ? 1 : (arr_5 [i_0] [i_0] [i_0] [i_0]))));
                        var_12 = (max(var_12, ((((!13) ? (!255) : (arr_2 [i_0]))))));
                        arr_10 [i_0] [i_0] [i_0] = (((((59 ? 81 : (arr_1 [i_1])))) ? 26 : 2622448088517408549));
                    }
                }
            }
            arr_11 [i_0] [i_1] = ((!(~29666)));
            var_13 = 1;
        }
        arr_12 [i_0] [i_0] = 7;
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_15 [i_4] = (min((min((max((arr_5 [i_4] [i_4] [i_4] [i_4]), (arr_7 [i_4] [i_4] [i_4] [7]))), -3243949848)), (min(((min((arr_0 [i_4]), 1))), (arr_14 [20] [i_4])))));
        var_14 &= ((((max(((min((arr_3 [i_4] [18]), (arr_9 [i_4] [i_4] [i_4])))), (arr_13 [i_4] [i_4])))) ? (min(((18446744073709551594 ? (arr_7 [i_4] [i_4] [i_4] [i_4]) : (arr_5 [2] [i_4] [10] [18]))), (!65532))) : (max((min(0, -108)), (min(56416, (arr_5 [i_4] [i_4] [9] [i_4])))))));
        arr_16 [i_4] = (arr_9 [i_4] [i_4] [i_4]);
        arr_17 [i_4] [2] &= (max((min(((max(1, (arr_3 [i_4] [14])))), (~-1739))), (max(((min(-1, -116))), (max((arr_7 [i_4] [i_4] [2] [i_4]), (arr_13 [i_4] [i_4])))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 16;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((min((!-49), 1)))));
                                arr_30 [i_6] [i_7 + 3] [i_5] [i_6] [i_9] [i_5] [i_5] = -3;
                            }
                        }
                    }
                    var_16 = 65531;
                }
            }
        }
        arr_31 [i_5] = (arr_8 [i_5] [i_5] [i_5]);
        arr_32 [i_5] = (min(((max((min(99, -652913140)), (((arr_1 [i_5]) ? (arr_9 [6] [i_5] [i_5]) : (arr_8 [i_5] [i_5] [i_5])))))), (min(((min(1, (arr_27 [i_5])))), (min(726525866292022511, (arr_27 [i_5])))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_35 [i_10] [i_10] = arr_0 [i_10];
        arr_36 [i_10] = 726525866292022524;
        var_17 = (min(var_17, 17720218207417529096));

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            arr_39 [i_10] [i_11] = (arr_1 [i_10]);
            arr_40 [i_10] [i_10] = (((arr_7 [i_10] [i_10] [i_10] [21]) ? -3243949859 : (arr_24 [i_10] [i_10])));
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_18 *= 24333;
            arr_43 [1] |= ((726525866292022529 ? -47 : (arr_9 [i_12] [i_12] [9])));
        }
        arr_44 [i_10] = (arr_6 [i_10] [i_10] [i_10]);
    }
    var_19 = (max((max(8849563496411965743, -var_7)), (((((max(1, 750496112))) ? ((min(5226, 1))) : var_1)))));
    #pragma endscop
}
