/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_7 [i_1] = 55895;
                arr_8 [i_0] [i_1] [2] = ((~((min((9641 < 16128), (max(0, (arr_0 [6]))))))));

                for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
                {
                    var_16 = (max(var_16, (((!(max((arr_9 [1] [i_1]), (arr_9 [4] [4]))))))));
                    var_17 = ((((((!(~158669821))))) == (((max(1, 158669808)) & ((((((-32767 - 1) + 2147483647)) >> (55894 - 55863))))))));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_13 [i_1] [i_1] = ((((((arr_12 [i_2 - 2] [i_2 + 1] [i_1]) | (((~(arr_0 [i_2]))))))) ? (arr_5 [i_0 + 1]) : (arr_1 [i_0] [i_3])));

                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            var_18 = (arr_5 [i_0]);
                            var_19 = (min(var_19, ((min(1, (min((max((arr_9 [4] [i_1 + 3]), (arr_3 [i_0] [0] [0]))), ((max(158669809, (arr_14 [i_1] [i_1] [i_2] [i_3] [i_4])))))))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_20 &= (62 != 3553247776);
                            var_21 = (arr_19 [i_0 - 3] [2] [2] [i_3] [i_5]);
                            var_22 += ((55915 * (((arr_14 [i_0] [i_3 - 1] [i_2] [i_2] [3]) ? var_3 : (arr_6 [4] [7])))));
                            var_23 ^= ((-(arr_4 [i_2] [i_5])));
                        }
                    }
                }
                /* vectorizable */
                for (int i_6 = 3; i_6 < 9;i_6 += 1) /* same iter space */
                {
                    var_24 = 55895;

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_25 = (min(var_25, ((158669821 ? 7 : 158669826))));

                        for (int i_8 = 3; i_8 < 8;i_8 += 1)
                        {
                            var_26 = (40294 | 6989792327041743897);
                            arr_29 [i_1] [i_0] [i_1 + 4] [i_6] [i_1 + 4] [i_1 + 4] = ((62130 ? var_12 : var_9));
                        }

                        for (int i_9 = 2; i_9 < 9;i_9 += 1)
                        {
                            var_27 = (((arr_0 [i_1 + 2]) ? (arr_24 [i_6 - 3] [i_9 - 1]) : (arr_24 [i_6 - 3] [i_9 + 2])));
                            var_28 += ((~(arr_28 [i_7] [i_0 + 2] [i_1 + 2] [i_9 + 2])));
                            var_29 = (((arr_16 [i_0 - 2] [i_0 - 2] [i_1 + 1] [i_0] [i_6 + 1] [i_6] [i_0]) ? (arr_27 [i_7] [i_6]) : (((arr_20 [i_0] [2] [7] [i_0]) ? 1 : (arr_15 [i_9 + 1] [i_6 - 2])))));
                            var_30 = (((arr_23 [i_9 + 2] [i_0 - 3] [i_6 - 3] [i_9] [i_1] [7]) || 35155));
                        }
                        for (int i_10 = 4; i_10 < 10;i_10 += 1)
                        {
                            arr_36 [i_1] [i_7] [i_6 + 1] [7] [i_1] = ((~(arr_27 [i_6 + 1] [i_1 + 4])));
                            arr_37 [i_6 - 2] [i_1] [i_1] [i_6 - 2] = (((arr_5 [i_10 - 1]) < var_2));
                            arr_38 [i_1] [i_6] [i_1] = (((arr_20 [i_0] [i_1 + 1] [i_10 - 4] [i_6 - 1]) ? (arr_20 [i_10] [i_1 + 1] [i_10 - 4] [i_6 - 1]) : var_7));
                        }
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            arr_43 [i_1] [i_1] [i_1] [i_0] = 0;
                            arr_44 [i_1] [i_1] [i_6] [i_6] [1] [i_7] [i_11] = (!12596205193243656033);
                        }
                        var_31 *= (arr_35 [0] [i_1] [i_1 + 1] [i_1 + 4] [i_1 + 1]);
                    }
                }
            }
        }
    }
    var_32 = (max(var_32, ((max((((max(var_1, var_14)))), var_13)))));
    #pragma endscop
}
