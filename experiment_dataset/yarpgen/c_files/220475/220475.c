/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_14 [i_1] = var_1;
                                arr_15 [i_0] [i_1 + 4] [i_1] [i_1 + 4] [i_4] = ((max((arr_2 [i_0]), (arr_2 [i_0]))));
                            }
                            /* vectorizable */
                            for (int i_5 = 3; i_5 < 14;i_5 += 1)
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_1] [i_5 - 2] = (((~var_0) * ((-11 - (arr_10 [i_1] [i_1 - 1] [i_2] [i_2] [i_3] [i_5])))));
                                var_10 -= (((~2458544897) >= var_2));
                            }

                            for (int i_6 = 3; i_6 < 14;i_6 += 1)
                            {
                                arr_23 [i_0] [i_1 - 2] [i_2 - 1] [i_1] [i_6 - 1] = (max(37, 24));
                                arr_24 [i_0] [i_1] [i_1 + 3] [i_2 - 1] [6] [i_6 - 3] = (1 < -17);
                            }
                            for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
                            {
                                arr_27 [i_0] [i_0] [i_1] [4] [i_0] [14] [i_0] &= -28252;
                                arr_28 [i_0] [i_1] = 18303258053989595607;
                            }
                            for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                            {
                                var_11 = (((4028575593 != 18446744073709551612) - -28269));
                                arr_31 [i_0] [i_1] [i_1] [i_8 - 1] = ((~(~8)));
                            }
                            for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
                            {
                                var_12 = (((((arr_18 [i_1 + 4] [i_1 + 1] [i_1]) <= (arr_25 [i_9 + 1] [i_3 + 1] [i_2 - 1] [i_1 + 3] [i_0])))) << (((!var_2) & 32746)));
                                arr_35 [i_0] [i_1] = (((((~(1 & 1786930744)))) ? (arr_8 [i_9 + 1] [i_3 - 4] [i_2] [i_1 + 3]) : 2147483647));
                                arr_36 [i_0] [i_0] [i_2 - 1] [i_1] [i_2 - 1] = ((((~(arr_30 [i_1 + 2] [i_2 - 1] [i_3 - 1]))) & (((((4294967295 << (4294967295 - 4294967274))))))));
                                arr_37 [i_0] [i_1] [i_2] [i_3 - 4] [i_0] = (arr_18 [i_1] [i_2] [i_1]);
                            }

                            for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                            {
                                var_13 = ((-(((arr_39 [i_2 - 1] [i_3 - 4] [i_2 - 1] [i_3] [i_1 + 3] [10]) ? (arr_8 [i_2 - 1] [i_3 - 3] [i_2 - 1] [i_3 + 1]) : (arr_10 [i_1] [i_3 - 3] [i_2 - 1] [i_1] [i_1 + 4] [i_1 + 4])))));
                                arr_41 [i_1] [i_3 - 4] [i_2 - 1] [i_1] [i_1 + 1] [i_0] [i_1] = ((-((-(arr_39 [i_3 - 2] [i_1] [i_2] [i_3] [i_2 - 1] [i_1 - 2])))));
                                arr_42 [i_0] [i_1] [i_0] [i_0] [i_3 - 2] [i_10] = (max(var_7, (min(1, 5323))));
                            }
                            for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                            {
                                arr_47 [i_1] [i_2] [i_1] = (min((max((((-(arr_6 [i_0] [i_1 + 3] [i_1 + 3] [i_11])))), (min(var_0, (arr_34 [i_0] [i_3] [i_3 + 1] [i_2] [i_1 + 2] [i_1] [i_0]))))), (-2147483646 > 1130654466)));
                                arr_48 [i_1] [i_3 - 4] [i_3 - 4] [i_2] [i_1 - 2] [i_1] = ((-(~var_7)));
                            }
                            for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                            {
                                var_14 = (max(((max((arr_29 [i_1 + 4] [i_1 + 4] [i_2 - 1] [i_1 + 4] [i_0] [i_0]), (arr_22 [i_0] [i_1] [i_2] [i_3] [i_12])))), 2471204153496601013));
                                arr_51 [i_12] [2] [i_1] [i_1] [i_0] [i_0] = (!(arr_44 [i_1] [i_1] [i_2] [i_1] [0]));
                                var_15 -= (max(2962330307, ((1332636988 ? (781212779 % -6384853716873539386) : 1130654466))));
                                arr_52 [i_12] [i_3 - 4] [i_1] [i_1] [i_0] = ((~(!var_3)));
                            }
                        }
                    }
                }
                arr_53 [12] [i_1] = (((((~(arr_33 [i_0] [i_1] [i_0] [i_0] [10])))) ^ (max((0 - var_9), (var_5 < -1)))));
            }
        }
    }
    var_16 += 1934237383;
    #pragma endscop
}
