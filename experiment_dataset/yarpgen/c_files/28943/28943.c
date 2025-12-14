/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = (max((((arr_0 [12] [i_0]) + var_10)), (arr_1 [i_0] [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_15 = (((arr_2 [i_1]) < (arr_2 [i_0])));
            var_16 = (((255 * 88) + -var_4));
            var_17 = (((arr_2 [i_1]) + (arr_3 [i_0])));

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_18 = -112;
                arr_6 [i_0] [6] [18] = -26;
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_19 = var_9;
                            var_20 = (arr_1 [3] [i_1]);
                            arr_12 [i_0] [i_3] [0] [10] [i_0] [3] = ((((arr_4 [i_0] [19] [i_4]) ? (arr_1 [i_1] [i_3]) : var_7)));
                        }
                    }
                }
                arr_13 [i_1] = (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])));
            }
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                var_21 = (26114 + -112);
                arr_17 [i_0] [i_5] [i_0] = 127;
                var_22 = (!0);
                var_23 = (((arr_1 [4] [i_0]) ? (~-114) : (arr_4 [i_1] [19] [19])));
                var_24 += (((!-1511352753289191396) ? ((~(arr_7 [i_0] [i_1] [i_5] [1]))) : 1));
            }
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                var_25 = -26115;
                var_26 = ((max((arr_11 [i_7] [i_6] [i_6] [i_0] [i_0] [i_0] [i_7]), var_4)));
                var_27 *= var_2;
                arr_24 [i_0] [4] [20] [i_0] = (((~(arr_7 [i_0] [i_0] [i_0] [i_0]))));
            }
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {

                for (int i_9 = 2; i_9 < 21;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_28 = (arr_25 [2]);
                        arr_31 [1] [17] [22] [1] [22] [i_10] = (~-6);
                        var_29 = -1;
                    }
                    var_30 = ((((2733405035169373399 ? ((((var_11 && (arr_2 [i_0]))))) : var_4)) < (((296453836 ? (arr_23 [22]) : ((var_3 ? 7316 : var_12)))))));
                    var_31 *= ((-var_10 >= (((65535 ? ((max((arr_14 [i_0] [i_0] [i_0] [i_0]), (arr_30 [10] [i_6] [11])))) : var_12)))));
                    var_32 = (((16327360870081802592 & 1) >= (((((12 == (arr_30 [i_0] [i_6] [17]))) ? (arr_5 [i_9 - 1] [i_6] [i_0]) : (~3752044573))))));
                    arr_32 [i_0] [i_0] [i_0] [3] [i_0] = -1;
                }
                /* vectorizable */
                for (int i_11 = 2; i_11 < 21;i_11 += 1) /* same iter space */
                {
                    var_33 = (((((((arr_30 [i_0] [18] [i_8]) == var_10)))) - (arr_29 [12] [12] [22] [i_8] [i_6])));
                    var_34 += ((((((arr_27 [i_11] [i_8] [i_6] [i_0]) > var_13))) % (arr_14 [i_11] [i_11 - 1] [i_11 + 2] [i_11 + 2])));
                }
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    arr_39 [i_0] = var_7;
                    arr_40 [i_0] [i_0] [i_0] = var_1;
                    var_35 = (max((max((max(-296453845, 978674961164594783)), 2842496387775440092)), 5225609627327460107));
                }
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    arr_45 [i_0] = 0;
                    var_36 = (~221);
                    var_37 = (((max((((arr_44 [3] [i_6] [20] [i_6] [i_6]) ? 1 : (arr_8 [i_6] [i_13]))), 65522)) & var_9));
                }
                var_38 = (arr_21 [i_0] [i_6] [i_8]);
            }
            var_39 = arr_37 [i_0] [i_0] [i_6] [i_6] [18];
            arr_46 [i_6] [i_6] = min(((((arr_29 [i_0] [i_0] [i_0] [22] [i_0]) > (arr_37 [1] [i_6] [2] [0] [i_6])))), var_8);
            arr_47 [i_0] = ((-(max(((-123 | (arr_15 [22]))), (251 | var_11)))));

            for (int i_14 = 1; i_14 < 21;i_14 += 1)
            {
                var_40 &= ((1 % (min((min((arr_35 [i_0] [i_0] [i_0]), (arr_34 [21] [9] [9] [9]))), 96))));
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 21;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        {
                            var_41 = (min(var_41, var_6));
                            var_42 = (max(var_42, (((((((arr_16 [i_0] [19]) - (arr_16 [i_15 + 1] [i_0])))) * (((!(arr_41 [i_0] [19] [i_0])))))))));
                        }
                    }
                }
            }
        }
        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {
            arr_58 [i_17] [22] [i_0] = (((((((!(arr_2 [i_0])))))) > (((~var_4) ? 47 : (arr_9 [i_0] [i_0] [i_0] [6] [i_17] [i_17] [i_0])))));
            arr_59 [i_17] [17] = (arr_4 [i_0] [9] [i_17]);
            var_43 -= (arr_49 [18] [i_17] [i_17] [i_0]);
        }
    }
    var_44 = (min(var_44, ((min(var_12, var_10)))));
    #pragma endscop
}
