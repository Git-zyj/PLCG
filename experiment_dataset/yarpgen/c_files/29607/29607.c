/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_15);
    var_17 = ((~(~9223372036854775806)));
    var_18 = -11;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((var_8 ? var_15 : (arr_0 [i_0 - 1] [i_0 - 1])));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {

                for (int i_3 = 4; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_0] = ((-(arr_11 [i_0] [i_0])));
                    arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((17517 ? 36139 : ((((arr_12 [0] [i_1 + 2] [0] [0] [i_0]) <= (arr_12 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0]))))));
                }
                for (int i_4 = 4; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    arr_17 [i_0] = ((!(((var_5 ? (arr_2 [i_0]) : var_7)))));
                    var_19 = (!5);
                    arr_18 [1] [i_1] [i_0] [i_1] &= var_6;
                    arr_19 [i_0] [i_1] [i_1] [i_4 + 2] = (-((36130 ? 2272606639 : 17522)));
                }
                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((29394 ? 7895 : ((var_4 ? var_9 : (arr_11 [i_0 - 1] [i_0 - 1])))));
                    arr_25 [i_0] [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1] = (var_3 & 3398937351962806775);
                    arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_9 [i_0] [i_1 - 1] [i_1] [i_1]) ? (arr_9 [i_1] [i_1 - 1] [i_1] [i_2]) : var_0));
                }
                arr_27 [i_0] [i_0] [i_2] [i_2] = (arr_0 [i_0] [i_2]);
                arr_28 [10] [i_1] [i_0] = ((((var_12 ? var_2 : (arr_8 [i_0] [i_1]))) >= (((var_8 ? 374883408 : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0]))))));
            }
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                arr_31 [i_0] = (((arr_22 [i_1 - 2] [i_1 + 2] [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 1]) <= var_0));
                arr_32 [i_1] [i_0] [i_0] [i_0] = arr_8 [i_1 + 1] [i_1 + 1];
            }
            var_20 = ((1 ? ((((arr_30 [i_0 - 1] [i_0] [i_0]) ? var_10 : (arr_1 [i_0])))) : ((36140 ? 9223372036854775807 : var_10))));
            arr_33 [i_0] = (((arr_1 [i_0]) - var_13));
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    arr_41 [i_8] [i_8] [i_8] [i_8] = (arr_36 [i_8 - 1]);

                    for (int i_10 = 3; i_10 < 24;i_10 += 1)
                    {
                        arr_45 [i_7] [i_8 + 1] [i_8] [i_10 - 1] [i_10] [i_10 - 3] = var_2;
                        var_21 = (((arr_38 [i_8 + 1] [i_10 - 1]) ? (arr_36 [i_8 + 1]) : (((arr_44 [i_7] [i_7] [i_7]) ? -3043704252461195656 : (arr_37 [i_8])))));
                    }
                }
            }
        }
        arr_46 [i_7] [i_7] = ((((var_15 ? (arr_35 [i_7] [i_7]) : 2432671458057170653)) / (arr_39 [i_7] [i_7])));
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 22;i_12 += 1)
            {
                {
                    arr_51 [i_12 + 1] [21] [i_7] [i_7] = var_12;
                    arr_52 [23] [i_12] [23] [i_7] = ((!(arr_43 [i_7] [24] [i_7] [i_12 - 1])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                {

                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        arr_61 [i_7] [i_7] [i_7] [i_7] [i_7] = (((!var_4) - (arr_37 [i_7])));
                        arr_62 [i_7] [i_13] [i_7] [i_7] = ((7 % (arr_39 [i_13] [i_13])));
                        arr_63 [i_7] [i_13] [i_14] [2] [i_13] = 2432671458057170653;
                        arr_64 [i_7] [i_13] [i_14] [i_15] = (((arr_42 [i_7] [i_13] [24] [i_14] [i_13]) ? (arr_36 [i_15]) : (arr_36 [i_7])));
                    }
                    for (int i_16 = 2; i_16 < 23;i_16 += 1) /* same iter space */
                    {
                        arr_68 [i_7] [i_7] [i_14] [i_14] = -var_4;
                        arr_69 [i_16 - 1] [i_13] [i_13] [i_7] = (((arr_57 [i_16] [i_16]) ? -168004281 : var_7));
                        arr_70 [i_7] [22] [i_14] [12] [22] = var_15;
                    }
                    for (int i_17 = 2; i_17 < 23;i_17 += 1) /* same iter space */
                    {
                        arr_75 [i_7] = (8872775180572404521 < 3743888708);
                        arr_76 [i_7] [i_13] [i_14] [i_17 + 2] = arr_47 [i_7] [i_7] [i_7];
                        arr_77 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((arr_38 [i_17 + 1] [i_7]) ? (arr_38 [i_7] [i_13]) : (arr_73 [i_7] [i_13] [i_14]));
                        arr_78 [i_7] [1] [i_13] [i_7] = var_2;
                    }
                    var_22 += (arr_71 [i_7]);
                    var_23 = ((~var_14) ? ((732114895662029336 ? 0 : 1)) : 1);
                }
            }
        }
        arr_79 [i_7] = (!var_9);
    }
    #pragma endscop
}
