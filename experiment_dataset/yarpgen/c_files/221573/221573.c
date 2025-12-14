/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 *= (((1 > 28) ? (arr_6 [i_1] [i_1] [i_1 + 1]) : var_7));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_12 = (max((((arr_11 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 3]) ? (arr_11 [i_1 - 1] [i_1 - 2] [i_1 - 3] [i_1 - 2]) : (arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 3] [i_1 - 2]))), ((((arr_11 [i_1 + 1] [i_1 + 2] [i_1 - 2] [i_1 - 2]) >= (arr_11 [i_1 - 1] [i_1 - 3] [i_1 - 3] [i_1 - 2]))))));
                        var_13 = ((((max(var_8, -456582636867547307)))));
                        arr_12 [i_0] [i_1] [i_1 - 4] [i_1 - 4] [1] = ((((max(1, (((arr_10 [i_1] [i_3] [i_0] [i_1] [i_0] [i_0]) != var_0))))) - (!var_9)));
                        var_14 += (((((!(arr_11 [i_1 + 2] [i_1 - 3] [i_1 + 2] [i_1 - 3])))) >> (arr_9 [i_1 - 4] [i_1 - 1])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_15 += (arr_7 [i_0] [i_0] [i_0]);
                        arr_16 [i_0] [i_0] [i_1 + 2] [i_1] [i_0] [i_1] = (var_3 & var_10);
                        var_16 = (~-112);
                        arr_17 [i_0] = (((arr_11 [i_0] [i_1] [i_0] [i_4]) ? (~1) : var_9));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_21 [i_5] [i_5] [i_2] [i_2] [i_5] [i_0] = (((((((((arr_7 [i_5] [i_1 - 2] [i_2]) == var_3)))) + var_5)) | (((((!(arr_11 [i_0] [4] [4] [4]))))))));
                        var_17 = var_7;
                    }
                }
            }
        }
        arr_22 [i_0] = ((!(((arr_0 [i_0]) == 13227))));
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
    {
        var_18 += ((~(((arr_2 [i_6]) / (arr_2 [i_6])))));
        arr_26 [i_6] [i_6] = ((-var_8 < (((((1 >= -28) != 65118))))));
        arr_27 [i_6] = var_9;

        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_31 [i_6] [i_7] [i_6] = ((-0 >= (((((-77 ? 23 : var_10))) | -var_3))));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        {
                            var_19 -= ((~(arr_0 [i_8])));
                            var_20 = (arr_4 [12] [i_10 + 1]);
                            arr_39 [i_6] [i_6] [i_8] [i_6] [i_10 + 3] = ((-(((!(~var_5))))));
                            var_21 = (((((min((arr_18 [i_6] [i_7] [i_8] [i_9]), var_1))) ? ((~(arr_13 [i_9] [i_7]))) : -456582636867547310)));
                            arr_40 [i_6] [i_7] [i_6] [i_8] = (arr_37 [i_6] [i_7] [i_10 + 3] [i_8] [i_10 - 1]);
                        }
                    }
                }
            }
            var_22 = (((arr_10 [i_7] [i_7] [12] [6] [i_7] [i_6]) << ((((~(arr_10 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))) + 2))));

            for (int i_11 = 4; i_11 < 14;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        {
                            arr_51 [i_6] [i_7] [i_7] [i_11] [i_13] = ((((var_3 - var_5) ^ var_9)) * (var_0 == -50));
                            var_23 = -6536339812930914236;
                            var_24 = var_5;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 14;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        {
                            arr_57 [i_6] [i_6] [i_6] [i_6] [i_11] = ((~(((!var_8) ^ var_0))));
                            arr_58 [i_11] [i_7] [8] [i_7] [i_15] [i_6] [i_14] = (((-(arr_11 [i_11] [i_11] [i_11] [i_11 + 2]))));
                            var_25 = ((-22663 + ((((arr_18 [i_6] [i_11 - 2] [i_14] [i_14 + 3]) != (max(-67, -2905581772323726721)))))));
                        }
                    }
                }
                var_26 = (!var_8);
                var_27 = (min(var_27, var_5));
                arr_59 [i_11] [i_11] [i_11] [1] = (((var_2 ? (768 | -6536339812930914236) : 4412104324981909873)));
            }
            var_28 = (((arr_11 [i_7] [i_7] [14] [i_6]) >> (-var_2 + 25186)));
        }
    }
    var_29 = var_3;
    var_30 = (!-22911);
    var_31 &= (((!var_5) << ((((25924 ? (~-9149) : (!var_5))) - 9144))));
    #pragma endscop
}
