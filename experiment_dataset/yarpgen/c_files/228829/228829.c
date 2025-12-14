/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_9 [i_1] [i_2] [9] = var_1;
                        arr_10 [i_0] [i_1] [i_2] [2] = (arr_0 [0] [7]);
                        var_13 = (max((arr_2 [10] [i_1] [11]), (arr_4 [i_0])));
                        var_14 = ((((((!(arr_0 [i_2] [i_0]))) ? (min(9192976114938380031, 6196762593646720774)) : (max(54156213, 4735867243132799220)))) <= (((((((arr_2 [i_0] [i_0] [i_0]) << (((arr_4 [i_0]) + 33))))) & (arr_0 [13] [i_2]))))));
                    }
                }
            }
        }
        arr_11 [i_0] &= (min((((1414220642392679422 || 5883127572052939559) << (min(var_5, (arr_6 [i_0] [i_0]))))), ((((((arr_1 [i_0] [i_0]) ? 8331169736249022814 : -18809))) ? (arr_4 [i_0]) : (max((arr_6 [i_0] [i_0]), 54156213))))));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 9;i_4 += 1)
    {
        var_15 = (arr_3 [11] [16] [i_4]);

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                arr_21 [i_4 - 3] [i_4 - 2] [i_4] [i_5] = (arr_18 [i_5] [i_5]);
                var_16 = (((arr_13 [i_4 - 3]) - var_10));
            }
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                arr_25 [i_4] [i_5] [i_5] = (arr_20 [7] [i_5]);

                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    var_17 *= (~-18813);
                    var_18 = (arr_5 [14]);
                    var_19 = var_0;
                    var_20 = (~-734348854);
                    var_21 = ((!(((83 ? (arr_23 [i_5] [i_7] [i_8]) : var_2)))));
                }
            }
            for (int i_9 = 4; i_9 < 7;i_9 += 1)
            {
                var_22 = var_8;
                arr_33 [i_5] [i_5] = (~-79);
                var_23 -= (!1);
                arr_34 [i_5] [i_5] [i_5] = (arr_8 [i_4 + 1] [i_4 + 1] [i_9] [i_9]);
            }
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_24 = (((47064 ^ var_8) ? var_5 : (arr_29 [1] [1] [i_5] [i_10] [7] [i_10])));
                var_25 = (max(var_25, (((var_9 / (((~(arr_16 [i_5])))))))));
                arr_39 [i_5] [i_5] [i_5] = (arr_32 [i_4 - 2] [i_5] [i_5] [i_5]);
            }
            /* LoopNest 2 */
            for (int i_11 = 4; i_11 < 9;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 7;i_12 += 1)
                {
                    {
                        arr_47 [i_5] [i_4] [i_5] [i_11 - 3] [i_11] [i_12] = (arr_30 [0] [i_5]);
                        arr_48 [i_5] [i_5] [i_11 - 1] [i_12] = var_10;
                    }
                }
            }
        }
        var_26 *= (318474583999500540 * 23059);
    }
    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        var_27 = (!((((26384 > var_6) % (arr_5 [i_13])))));
        var_28 = (arr_49 [i_13] [i_13]);
        var_29 = (!(arr_6 [i_13] [i_13]));
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1)
    {
        var_30 = ((((1 ? (~7165462725670958263) : (((3944 | (arr_51 [i_14])))))) & 18128269489710051075));
        arr_55 [i_14] = (min((max((arr_54 [i_14]), var_0)), -12654));
        arr_56 [i_14] = (((arr_53 [i_14]) ? 54156213 : (((~var_7) ? 4493374665962763408 : (arr_52 [i_14])))));
    }
    var_31 = ((((((min(var_6, var_4))) ? var_10 : var_7)) >> (((1 ^ var_11) & 54156213))));
    #pragma endscop
}
