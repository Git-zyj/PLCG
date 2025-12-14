/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_16 = -var_4;
        var_17 = (((arr_3 [i_0]) ? var_13 : (arr_3 [i_0])));
        var_18 *= (66686758 <= 16777215);
        var_19 = ((~((4278190081 ? 16777215 : var_14))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (((((((max(var_12, (arr_0 [i_1] [i_1])))) ? (!29768) : (arr_0 [i_1] [i_1])))) ? ((((-3228223030546672156 || (arr_0 [i_1] [i_1]))) ? (max(var_10, (arr_0 [i_1] [i_1]))) : var_12)) : var_15));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                {
                    arr_14 [i_2] [i_2] [4] [i_1] = (arr_11 [i_1] [i_2] [2]);
                    arr_15 [i_1] [i_3] [i_3] = (((max(((var_3 + (arr_12 [i_2]))), ((var_2 ? var_12 : (arr_5 [i_1] [i_3 - 2]))))) <= (((!((4294967295 && (arr_10 [i_1] [i_2] [i_2] [i_3]))))))));
                }
            }
        }
        var_20 = ((~(max((~var_12), var_1))));
    }

    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_21 += (((var_2 <= var_7) ? ((var_10 ? 50 : (arr_17 [i_4]))) : ((max((min((arr_17 [11]), (arr_17 [i_4]))), ((8 >= (arr_17 [i_4]))))))));

        /* vectorizable */
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {

            for (int i_6 = 4; i_6 < 11;i_6 += 1)
            {
                var_22 |= 20828;
                var_23 = (((~var_4) ? var_8 : var_12));
                var_24 = ((!(arr_16 [i_5 + 1] [i_6 + 2])));
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {

                for (int i_8 = 2; i_8 < 13;i_8 += 1)
                {
                    var_25 = 16777228;
                    var_26 = (~4278190067);
                    arr_29 [i_7] [i_7] [i_7] [i_8 - 1] = (arr_26 [i_8 - 2]);
                }

                for (int i_9 = 3; i_9 < 12;i_9 += 1)
                {
                    arr_33 [i_4] [i_5] [i_7] [i_9] = (arr_26 [i_4]);
                    var_27 ^= (((var_4 <= var_11) ? (!-6908379942543003922) : -var_13));
                }

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    arr_36 [10] [i_7] [i_5] [i_4] = (arr_32 [i_5 + 2] [i_5] [i_5 + 1] [i_5] [i_7]);
                    var_28 = (((var_8 + var_7) << (!var_12)));
                }
            }
            for (int i_11 = 3; i_11 < 13;i_11 += 1)
            {
                arr_39 [i_4] = (((arr_35 [i_5 - 1] [i_5] [1] [i_5 + 2] [i_5] [11]) ? var_0 : (arr_35 [i_5] [i_5] [i_5] [i_5 + 1] [4] [6])));

                for (int i_12 = 2; i_12 < 11;i_12 += 1)
                {
                    var_29 = ((~(arr_37 [i_5 - 2] [i_5 - 1] [i_5 + 2] [i_5 - 2])));
                    arr_42 [i_4] [7] [7] = ((!(arr_40 [i_4] [i_12 - 2] [i_4] [i_12 + 2])));
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        {
                            arr_49 [i_4] [i_4] [6] [i_13] [i_13] [i_14] = (((1 ? var_2 : (arr_40 [i_4] [i_4] [i_4] [i_4]))) != (arr_37 [i_5 + 2] [i_11 - 3] [i_11 + 1] [i_11]));
                            var_30 = (arr_47 [i_5 + 1] [i_5 + 2] [i_11 - 2] [i_11 - 2] [i_11 - 1] [i_11] [i_14]);
                            arr_50 [i_4] [i_5] [i_5] [11] [i_13] [i_4] = (((arr_40 [i_4] [i_4] [i_4] [i_4]) ? ((1932705496 ^ (arr_23 [0] [i_5 - 2] [i_5]))) : (arr_31 [i_14] [i_13] [i_11 + 1] [i_5])));
                        }
                    }
                }
                var_31 = 0;
                var_32 = (((arr_37 [i_4] [i_4] [0] [0]) ? 2362261798 : (((arr_32 [i_4] [i_4] [i_5] [i_11] [i_11]) ? (arr_48 [1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_11]) : (arr_37 [i_4] [5] [i_11] [i_11])))));
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 14;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 13;i_16 += 1)
                {
                    {
                        var_33 = (max(var_33, (!1932705496)));
                        arr_55 [i_16] = var_4;
                        var_34 = var_4;
                    }
                }
            }
            var_35 = ((var_3 ? (arr_51 [i_5 - 2]) : var_4));
        }
        var_36 = ((var_5 >= (min(5612977196519305917, 89))));
        var_37 = var_2;
    }
    #pragma endscop
}
