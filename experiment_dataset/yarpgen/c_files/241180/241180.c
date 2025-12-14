/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(233, ((max(121, 15))));
    var_21 = (((((-16 ? 8359294162844283663 : (min(var_8, var_1))))) ? -27 : var_19));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1 + 2] [i_0] = max(27, 68);

                for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_1] [17] [9] [5] = (min((arr_7 [i_1]), -5));

                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [18] [i_0] &= (-16 ? (((arr_5 [i_0] [i_1 + 1] [i_1 + 1]) ? (arr_5 [i_3] [i_1 + 1] [i_3 + 2]) : (arr_5 [i_3] [i_1 + 1] [14]))) : (arr_5 [i_3] [i_1 + 1] [i_3]));
                        var_22 = (max(var_22, (arr_11 [i_0] [i_1 - 1] [i_0] [i_0])));
                    }
                }
                for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_23 = 4294967295;
                        arr_20 [i_5] [11] [10] [i_5] [14] [i_1] = (arr_5 [i_1] [11] [14]);

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_24 [i_1] [i_1] [i_1] [i_1 + 2] [i_1 + 1] = (arr_15 [i_5] [i_1 + 2] [1]);
                            var_24 = 8359294162844283649;
                        }
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_25 -= ((((min((arr_23 [6] [i_4] [i_1] [2] [i_0] [i_0] [i_0]), (arr_17 [i_1] [i_1 + 1] [18] [i_1] [i_1 + 1])))) ? (arr_17 [i_1] [i_1] [i_4] [i_7] [i_7]) : (arr_4 [i_1])));
                        var_26 = (arr_21 [i_1 - 1] [5] [i_1] [i_7] [0] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_31 [i_1] [i_1] [8] [i_8] [7] = ((((((arr_17 [i_0] [i_1 - 1] [i_4] [i_4] [i_8]) ? 12966 : 0))) ? 24163 : 26));
                        arr_32 [i_1] [i_1] [i_1] [i_8] = arr_25 [i_0] [i_1];
                    }
                    for (int i_9 = 3; i_9 < 17;i_9 += 1)
                    {
                        arr_37 [i_0] [i_4] |= ((min(1, 15070946665949016421)));
                        var_27 = (arr_11 [i_1] [i_1 - 1] [i_9 + 2] [i_9 + 2]);

                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            arr_42 [i_0] [i_1] = (arr_30 [i_10]);
                            var_28 = (((arr_8 [i_9 - 3] [7] [1] [i_9]) ? (((arr_18 [i_1] [i_9 + 2] [i_9 - 1]) ? (arr_8 [i_9 + 2] [i_9 + 2] [i_0] [14]) : (arr_8 [i_9 - 2] [0] [0] [i_0]))) : (arr_4 [i_9 + 1])));
                            var_29 *= ((max((arr_15 [i_9 + 1] [i_9 - 1] [i_1 + 1]), 19733)));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_30 = (+(((arr_21 [i_0] [9] [i_1] [0] [i_0] [i_1]) ? (arr_33 [i_9] [i_9]) : 1401269890)));
                            arr_45 [i_11] [i_1] [i_4] [i_9 - 1] [7] = 7;
                        }
                        var_31 = (max(var_31, (arr_43 [i_0] [i_0] [i_0] [i_0])));
                    }

                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        arr_49 [i_1] [i_1] = (max((arr_2 [i_1 - 1]), (arr_11 [i_1] [i_4] [i_4] [i_12])));
                        var_32 = -10;
                        var_33 = ((((arr_36 [i_1] [i_1] [i_1 + 2]) ? (arr_2 [i_1 + 2]) : (arr_2 [i_1 + 2]))));
                        arr_50 [i_0] [i_0] [i_1] [14] [i_0] = -1060780385;
                        arr_51 [i_1] [14] [i_1] [i_12] = ((1432031180 ? 8191 : 187));
                    }
                    var_34 = 11;
                    var_35 ^= (arr_41 [4] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1]);
                    arr_52 [i_1] [i_1] = (+-32766);
                }
                for (int i_13 = 1; i_13 < 18;i_13 += 1)
                {
                    var_36 = (max(var_36, 235));
                    arr_56 [i_1] [i_1] [13] [i_1] = 4294967291;
                }
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    arr_59 [i_0] [i_0] |= ((max(3741348070, (arr_26 [i_0] [i_0] [i_14]))));
                    arr_60 [i_1 + 1] [i_1] = 32340;
                }
                arr_61 [i_1] = (((arr_57 [i_1]) ? -26536 : (-32767 - 1)));
                var_37 = (arr_48 [i_1 + 2] [i_1 + 2] [i_0] [i_0] [i_1 - 1]);
            }
        }
    }
    #pragma endscop
}
