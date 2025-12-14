/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 7489568269365558393;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_11 = (min(var_11, var_1));
        var_12 = arr_1 [i_0] [i_0];
        var_13 = (arr_0 [i_0 + 1] [i_0]);
        var_14 &= (min((~var_4), var_0));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = 126;
        var_15 = (min((min(((max(-127, var_3))), 2612986710)), ((((arr_1 [i_1 - 3] [i_1]) ? ((max(-126, (arr_3 [i_1])))) : -121)))));
    }
    for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_16 = (arr_9 [i_2]);
            var_17 = (min((arr_9 [10]), -8340505999834125107));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_18 = ((~((var_4 + (arr_12 [i_2] [i_2] [i_4])))));
            var_19 = var_8;
        }
        var_20 = var_2;

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_21 = (((((var_2 ? (arr_8 [i_2 - 3]) : (arr_6 [i_2])))) ? (((arr_5 [i_2 - 3]) ? (arr_6 [i_2]) : (arr_8 [i_2 + 4]))) : 227));
            var_22 ^= (max(((((arr_5 [i_2]) <= (arr_5 [i_2 - 3])))), (-120 != -3996108756887691555)));
            var_23 = ((((((((arr_3 [i_2]) ? var_1 : 4375192434710406325)) | (var_3 - 18446744073709551606)))) ? ((min(var_7, (((arr_2 [i_2]) ? var_4 : (arr_13 [i_5])))))) : (arr_7 [i_2 + 2])));

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_24 = 3996108756887691560;
                var_25 = (min(var_25, (((((max(((-1006255372 ^ (arr_20 [i_6] [i_2]))), 125))) - 17)))));
            }
        }
        for (int i_7 = 2; i_7 < 10;i_7 += 1)
        {
            var_26 = (max(var_26, (((var_1 ? (arr_1 [i_7 - 2] [2]) : (((arr_1 [i_7 + 3] [2]) / var_3)))))));
            arr_25 [i_2] [i_7] = (min((!var_5), (((!(arr_13 [i_2]))))));
        }
        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            var_27 = (max(var_8, var_7));

            /* vectorizable */
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                arr_30 [i_2] = (((arr_22 [i_2 + 4] [i_2]) / -17605));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        {
                            arr_37 [i_2] [i_2] = -176;
                            arr_38 [i_11] [i_2] [i_9] [7] [i_2] [i_2] = (arr_6 [i_2]);
                            var_28 = (arr_9 [12]);
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_12 = 1; i_12 < 12;i_12 += 1)
            {
                arr_41 [i_2] [i_2] [i_2 + 4] [i_2] = (((arr_15 [i_2] [i_8 - 2] [i_2]) - 18));
                var_29 = ((65 ? (arr_1 [i_2] [i_2]) : (0 - -48)));
                var_30 = (arr_31 [i_12 - 1] [11] [i_12] [i_12] [i_2 + 4]);
            }

            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 1;i_15 += 1)
                    {
                        {
                            arr_51 [i_2] [i_14] [3] [i_2] = ((2737492271 ? 120 : 3056782865));
                            var_31 -= (max((arr_27 [i_8]), (!1595375727)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        {
                            var_32 = (((-(arr_5 [i_2 + 3]))) | var_1);
                            arr_58 [i_2] [i_2] [i_13] [i_8] [i_2] [i_2] = (arr_12 [i_13] [i_13] [i_2]);
                            var_33 = ((-524772120635540198 ? -26089 : 1184679697));
                            arr_59 [2] [i_2] = (((max(var_4, (!1023)))) ? ((min(var_3, 3464849693))) : ((((2116567091521930916 ? var_1 : var_7)) & var_8)));
                        }
                    }
                }
            }
        }
        var_34 = ((~(arr_29 [12] [i_2] [12] [i_2])));
    }
    var_35 = 0;
    var_36 = (~var_7);
    var_37 = (~-34);
    #pragma endscop
}
