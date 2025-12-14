/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = var_1;
        var_14 = ((65535 ? 67108863 : 67108875));
        var_15 = 0;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_16 = (max(var_16, (((-(67108875 / 2147483647))))));
            var_17 -= (min((min((-32767 - 1), -67108883)), ((((var_10 ? 147 : var_7))))));
            var_18 = (max(var_18, ((((146 ? 18187917603399945557 : (((0 ? var_5 : -1334111732992323362)))))))));
            arr_9 [i_2] [i_2] &= (var_12 ? ((var_6 ? var_8 : (var_8 - 960))) : ((min(1939905793, (arr_6 [i_1])))));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                arr_18 [i_3] [i_3] [i_3] [i_1] |= (arr_1 [i_3]);
                var_19 *= 0;
            }
            arr_19 [i_1] [i_3] = var_11;
            var_20 = (min(var_20, ((~(((arr_4 [i_1] [i_1]) ? 38 : (arr_4 [i_3] [i_1])))))));
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {
                        arr_26 [i_1] [i_1] [i_5] [i_1] [i_1] = 146;
                        arr_27 [i_3] [i_3] [2] [i_5] [i_6] = (min(var_0, (((((var_7 ? var_0 : var_9))) ? var_8 : (max(var_8, (arr_25 [i_1] [i_1] [i_5] [i_1])))))));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_21 = (min(var_21, var_4));

            for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
            {
                arr_34 [i_1] [i_7] [i_8] [i_8] = ((!(~var_0)));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            var_22 = ((((min(107, (arr_25 [i_1] [i_1] [i_9] [i_9]))) * var_10)));
                            arr_42 [i_8] [i_8] [i_9] [i_8] [5] [i_8] = (((10263 * ((max(109, 239))))));
                        }
                    }
                }
                var_23 = (max(var_23, (((~(max(-28419, (arr_4 [i_1] [i_7]))))))));
            }
            for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
            {
                arr_45 [i_11] [i_11] [i_1] [i_1] = 3360891445;
                var_24 *= 218106108;
                var_25 = ((-32761 ? 15120248800008854410 : 4294967295));
                arr_46 [i_1] |= var_2;
            }
        }
        var_26 = 665849644;
        var_27 = (((min(var_11, 546022642))) * ((35730 ? (arr_15 [i_1] [i_1] [i_1]) : 14277379569509347923)));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
    {
        arr_51 [3] [3] = 3629117652;
        arr_52 [i_12] = ((~(arr_10 [i_12])));
        var_28 = (min(var_28, ((((0 * var_8) ? var_12 : var_0)))));
        var_29 *= (arr_8 [i_12] [i_12] [i_12]);
    }
    #pragma endscop
}
