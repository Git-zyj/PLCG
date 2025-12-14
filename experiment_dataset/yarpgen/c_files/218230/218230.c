/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_17 = (min(var_17, ((((arr_0 [i_0] [i_0]) ^ (((((var_15 ? var_2 : var_4)) < var_13))))))));
        var_18 = (min((arr_0 [i_0] [i_0]), (((arr_1 [i_0]) ^ (arr_0 [i_0] [i_0])))));
        arr_2 [i_0] [i_0] = (((((39050 ? (arr_0 [i_0] [i_0]) : (arr_0 [13] [13])))) ? var_9 : ((((((arr_0 [14] [13]) ? 26486 : (arr_0 [i_0] [i_0])))) ? (((26485 > (arr_1 [i_0])))) : ((26485 ? (arr_1 [i_0]) : 39050))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_19 ^= (((((((min(var_6, (arr_4 [i_1] [i_2])))) ? (((!(arr_8 [i_1] [6] [i_2])))) : ((min((arr_8 [i_1] [i_2] [i_2]), (arr_1 [i_2]))))))) ? var_5 : (((arr_7 [i_2]) ? 26486 : 26485))));
            arr_9 [i_1] = (~39048);
            var_20 = (arr_1 [i_2]);
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_21 = (!(((26488 ? ((39065 ? 39049 : (arr_3 [i_3]))) : (arr_6 [i_1])))));
            var_22 = (arr_8 [i_1] [i_1] [i_3]);
            var_23 *= var_0;
        }
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            var_24 = (((arr_7 [i_4]) < (((39050 >> (((~26483) + 26495)))))));
            var_25 = ((((min(39059, (arr_1 [i_4 - 2])))) && ((((arr_1 [i_4 - 1]) ^ (arr_1 [i_4 + 1]))))));
            var_26 = (((arr_6 [i_4 - 1]) < 26487));
        }
        arr_14 [i_1] = (arr_10 [i_1] [i_1]);
        var_27 = (min(var_27, (arr_8 [i_1] [i_1] [i_1])));

        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            arr_17 [1] = ((!(arr_15 [i_1] [i_5])));
            var_28 = (((26486 >> (39061 - 39052))));
            arr_18 [1] = arr_12 [i_1] [i_5] [i_5];
        }
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            var_29 = ((((((((arr_4 [i_1] [i_6]) ? (arr_7 [i_1]) : var_8))) ? var_2 : 26483)) - 26486));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 17;i_8 += 1)
                {
                    {
                        arr_30 [i_1] [i_6] [i_7] [i_8] = (var_11 ? ((((arr_19 [i_6 - 1] [i_8 - 1] [i_8]) > (arr_24 [i_6 - 1] [i_6] [i_8])))) : (arr_3 [15]));
                        arr_31 [i_8 - 1] [i_6] [i_6] [i_1] = (((((arr_29 [i_6] [i_7] [i_6] [i_6]) ? (((arr_0 [i_1] [i_6]) ? var_13 : (arr_24 [i_1] [i_6] [i_1]))) : (((((arr_23 [i_6] [i_6] [i_6] [i_6]) && (arr_8 [i_1] [i_6 + 1] [i_7]))))))) >> ((((~(arr_0 [i_1] [11]))) + 10796))));
                        var_30 *= (39049 >= 39049);
                        arr_32 [i_1] [i_6] [i_7] [i_8] = (((39064 > 26485) < 26487));
                    }
                }
            }
            var_31 = 39033;
        }
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
    {
        var_32 ^= (min((((((arr_26 [i_9] [i_9] [i_9]) ? (arr_10 [16] [i_9]) : 26486)) >> (39042 - 39016))), ((((arr_21 [1]) < (arr_19 [i_9] [11] [i_9]))))));
        var_33 = (((arr_12 [i_9] [i_9] [1]) ^ ((39048 ? (var_14 < var_13) : ((39052 ? (arr_34 [i_9]) : (arr_21 [10])))))));
        var_34 ^= ((+((var_9 ? ((var_6 ? (arr_34 [i_9]) : 26486)) : (arr_26 [i_9] [i_9] [i_9])))));
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
    {
        var_35 ^= 26486;
        var_36 = (((((((((arr_0 [i_10] [i_10]) ^ 39050))) ? ((39035 ? (arr_27 [i_10] [i_10] [i_10] [i_10] [i_10]) : (arr_8 [i_10] [i_10] [i_10]))) : (max((arr_33 [i_10] [i_10]), 39050))))) ? ((min(39033, (~39050)))) : (max((arr_33 [i_10] [i_10]), (arr_19 [i_10] [i_10] [i_10])))));
        var_37 = (max(26475, (((arr_34 [i_10]) ^ (arr_23 [i_10] [i_10] [i_10] [i_10])))));

        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                var_38 = ((((((arr_25 [i_10] [i_11]) - (arr_25 [i_10] [i_11])))) ? ((((max((arr_23 [i_10] [i_11] [i_12] [10]), var_0))) ? (((39064 >> (26486 - 26462)))) : ((var_11 ? (arr_33 [i_12] [1]) : (arr_5 [i_10]))))) : 39049));
                var_39 = (~var_10);
            }
            var_40 = (((var_0 >= 39050) < (~26484)));
        }
        for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
        {
            var_41 ^= ((arr_19 [10] [i_13] [i_10]) ? (((arr_24 [i_13] [i_13] [i_10]) ? var_9 : (arr_24 [i_10] [i_13] [i_13]))) : (arr_35 [i_10]));
            arr_44 [i_10] = (~39050);
            arr_45 [i_10] [i_10] = (arr_8 [i_10] [i_13] [i_13]);
            var_42 = (max(var_42, var_14));
        }
        var_43 = (min(var_43, ((((((39050 ? (((39033 >= (arr_22 [0] [8])))) : 39040))) < ((26485 ? (((arr_15 [i_10] [i_10]) ^ (arr_36 [14]))) : ((((arr_6 [i_10]) ? (arr_26 [i_10] [i_10] [i_10]) : (arr_33 [i_10] [i_10])))))))))));
    }
    var_44 = (!39050);
    var_45 ^= var_15;
    #pragma endscop
}
