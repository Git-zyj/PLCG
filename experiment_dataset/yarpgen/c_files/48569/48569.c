/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 *= (max((((arr_1 [20]) / (arr_0 [18] [18]))), ((1792 ? (arr_1 [1]) : var_9))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_12 = (i_0 % 2 == zero) ? ((((((arr_1 [i_0]) / (arr_1 [i_0]))) << (((arr_1 [i_0]) - 7083810333274538255))))) : ((((((arr_1 [i_0]) / (arr_1 [i_0]))) << (((((arr_1 [i_0]) - 7083810333274538255)) + 7743679300428001958)))));
            var_13 = var_4;
            arr_6 [i_0] [i_0] [i_1] = (+(max((((-75 ? (arr_0 [i_0] [i_0]) : -863748981))), var_7)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 21;i_3 += 1)
                {
                    {
                        var_14 = (max((!var_5), (((arr_4 [i_3 - 4] [i_3 - 3]) ? (arr_8 [i_3 - 2] [i_3 - 2] [i_3 - 4] [i_3 - 2]) : (arr_8 [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_3 - 2])))));
                        var_15 = ((((((arr_12 [i_0]) < (arr_12 [i_0])))) <= (((arr_2 [i_1] [i_1]) ? (arr_5 [i_0]) : (arr_12 [i_3])))));
                        var_16 = (var_2 ? (((var_5 < (var_10 && var_7)))) : (max(1843, (((arr_12 [i_0]) | (arr_8 [i_0] [i_0] [i_2] [i_3]))))));
                        arr_14 [i_0] [i_0] = (max(((((var_10 ? 25777 : var_9)) << (((var_5 & -77) + 25504)))), var_9));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_17 = (max(var_17, (((((var_8 > (((arr_7 [i_0] [i_0] [i_4]) ? (arr_11 [i_0] [i_4]) : var_7)))) ? (max(-87, (arr_3 [14]))) : (((-(arr_0 [12] [12])))))))));
            var_18 = max(((1171473386837657515 % ((((arr_5 [i_0]) + var_4))))), (~-103));
            var_19 = ((((((arr_12 [i_0]) ? var_1 : var_4))) && ((!(arr_13 [i_0] [i_0] [i_0] [i_4])))));
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_20 &= (!(((-32746 ? (arr_16 [1]) : (arr_16 [0])))));
            var_21 = (min(var_21, (((((((arr_10 [1] [i_5] [1] [i_5]) / (arr_10 [i_0] [i_5] [i_5] [i_5])))) && (arr_8 [i_0] [i_0] [i_5] [i_5]))))));
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                var_22 = arr_7 [i_0] [i_6] [i_7];
                arr_25 [i_0] = ((~((max((arr_4 [i_0] [5]), var_3)))));

                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    arr_28 [i_0] [i_0] [17] = 84;
                    arr_29 [i_0] [i_6] [i_6] [1] |= (arr_4 [i_7] [i_8]);
                    var_23 = (min(var_23, (~var_4)));
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    var_24 += (arr_9 [10]);
                    arr_34 [i_0] [i_0] [i_7] [i_9] = (max(((((arr_5 [i_0]) % (arr_5 [i_0])))), (max(var_6, (arr_5 [i_0])))));
                    arr_35 [i_0] [i_6] [i_6] [14] = (((((~(arr_22 [i_0])))) ? (((arr_11 [i_7] [i_9]) % var_0)) : (((arr_26 [i_0] [i_0] [9] [i_7] [i_9]) ^ (arr_15 [i_0])))));
                    var_25 = (min(var_25, (((((((arr_31 [18] [18] [i_6] [i_6] [0] [i_9]) ? var_9 : (arr_31 [1] [i_6] [i_7] [i_9] [i_7] [i_6])))) ? (max(var_2, (arr_0 [10] [10]))) : ((max(var_0, (arr_0 [2] [0])))))))));
                }
                arr_36 [i_0] [i_0] [i_0] = -785669487;
            }
            for (int i_10 = 3; i_10 < 21;i_10 += 1)
            {
                arr_39 [i_0] [i_0] = ((((!((((arr_27 [14] [14] [i_10 - 1]) * (arr_22 [i_0])))))) ? (((arr_7 [i_10 + 1] [i_10 - 3] [i_10 + 1]) + (arr_8 [i_10 + 1] [i_10 - 3] [11] [i_10]))) : ((max((arr_21 [i_0]), var_4)))));
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        {
                            var_26 = (min(var_26, (((~((var_10 ? (arr_38 [i_12] [i_10 - 2] [i_11] [12]) : (arr_19 [i_12]))))))));
                            arr_46 [i_0] [20] [i_6] [i_6] [i_11] [i_12] = (max((max(var_0, (arr_2 [i_11 + 1] [i_11 + 2]))), ((max((arr_2 [i_11 - 1] [i_11 + 1]), (arr_2 [i_11 - 1] [i_11 - 1]))))));
                        }
                    }
                }
            }
            var_27 = ((((max((arr_33 [i_0] [i_6] [i_0] [i_0]), var_0))) ? (~var_4) : (((36 % (arr_33 [i_6] [i_0] [i_0] [i_0]))))));
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            {
                arr_52 [i_13] = ((~(((arr_40 [i_14] [i_13] [i_14] [i_14]) / var_2))));
                arr_53 [17] [i_14] [i_14] = ((((((max(var_5, var_5)))) != var_9)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        for (int i_16 = 2; i_16 < 9;i_16 += 1)
        {
            {
                var_28 += (arr_1 [0]);
                arr_59 [i_15] = (max((~var_4), (max(var_8, var_10))));
                arr_60 [4] [4] = ((((((((-1853 + 2147483647) << (((arr_5 [16]) - 37)))) != 480))) <= ((((var_1 != var_1) < (max((arr_26 [12] [1] [1] [i_15] [i_16 + 1]), var_9)))))));
            }
        }
    }
    #pragma endscop
}
