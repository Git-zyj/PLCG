/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 += (((((arr_7 [i_1]) ? (145 && 173) : (~var_10))) < (arr_5 [i_3] [i_2] [i_0] [i_0])));
                            arr_12 [i_0] [0] [i_2] [i_0] = (((!((max(-37, -77))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_18 = (((((!(arr_0 [3]))) ? 7 : 175)));
                            var_19 ^= 140;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 3; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_20 ^= ((~(arr_1 [i_6 - 1])));
                                arr_26 [i_6] = ((73 ? 65535 : 54978));
                                var_21 = (max(var_21, (((+(((arr_19 [i_8 + 2] [i_6 - 3] [i_0 + 2] [i_1 + 1]) ? 153 : (arr_19 [i_8 + 2] [i_6 - 3] [i_0 + 2] [i_1 + 1]))))))));
                            }
                        }
                    }
                }
                var_22 = ((((((-(arr_3 [i_0 - 4] [i_0 + 2] [i_1 + 2]))) + 2147483647)) >> ((((max((arr_3 [i_0 - 4] [i_0 + 2] [i_1 + 2]), (arr_6 [i_0 - 4])))) - 37755))));
            }
        }
    }
    var_23 = 81;
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 9;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 8;i_10 += 1)
        {
            {
                var_24 |= ((-((~(-127 - 1)))));

                /* vectorizable */
                for (int i_11 = 1; i_11 < 9;i_11 += 1) /* same iter space */
                {
                    arr_34 [i_11] = arr_29 [i_9];
                    var_25 -= (((arr_23 [21] [i_9] [i_9] [i_9 + 1] [i_9]) || (arr_23 [12] [i_9] [i_9] [i_9 + 1] [12])));
                    arr_35 [i_9] [i_10] [i_11] = ((26 > (arr_10 [i_9] [i_10] [i_10 - 2] [5] [22] [i_11 + 1])));
                }
                for (int i_12 = 1; i_12 < 9;i_12 += 1) /* same iter space */
                {
                    var_26 = (max((max(((max(var_8, var_16))), (26210 * 178))), ((((max((arr_18 [i_9] [i_9]), (arr_36 [i_9] [i_10] [7])))) ? (arr_21 [i_9] [10] [2] [i_9]) : ((var_9 ? var_3 : 52))))));
                    var_27 = (min(var_27, (((((((10010 * (arr_5 [i_12] [i_12] [17] [i_9]))) * ((67 ? 67 : (arr_31 [i_9] [i_10] [i_12 + 1] [i_9 - 1]))))) * (((!(~var_14)))))))));
                    var_28 = (min(var_28, (((((-(arr_2 [i_12 - 1]))) >= (((31097 > (arr_2 [i_12 - 1])))))))));
                }
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        arr_43 [i_9] = ((!((((!var_13) ? ((-(arr_42 [6] [i_10] [9] [i_10]))) : ((((arr_39 [i_9] [i_9] [i_9 + 1]) ? 44 : (arr_3 [i_9] [17] [16])))))))));
                        var_29 = (((((14 * (arr_7 [i_9 + 1])))) ? (((((max(26145, 14688))) * 215))) : (max(884920662, (arr_4 [i_9] [i_9 - 1] [i_10 + 1])))));
                    }
                    arr_44 [i_13] = (max(((((1073741823 + 31044) == 39861))), ((255 >> (var_3 - 37)))));
                }
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    var_30 = ((((!((max(18705, var_1))))) ? ((((arr_39 [i_9] [i_10 + 2] [i_9 + 1]) ? (-127 - 1) : (arr_39 [i_9 - 1] [i_10 + 2] [i_9 + 1])))) : (((((arr_28 [i_10 - 1]) && var_0)) ? (arr_0 [17]) : (((202 | (arr_9 [i_9] [4]))))))));
                    arr_47 [i_10] [i_10] [i_10] &= ((215 < (max(738, (((arr_36 [i_9] [i_9] [i_9]) >> (255 - 242)))))));
                }
                var_31 += ((((max(58, 183))) >= 0));
            }
        }
    }
    #pragma endscop
}
