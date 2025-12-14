/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_6 [i_0] = ((min((arr_5 [i_0 + 2]), 1073217536)));
            arr_7 [3] [3] = (min(-var_0, ((max(0, 1467962212)))));
            var_19 = (max(18320500376290248683, 3221749759));
            var_20 = arr_2 [i_0 + 2] [i_0 + 2];
            arr_8 [i_0] [i_1] [i_0] = (min(((-(((arr_0 [22]) << (((arr_3 [i_1] [i_1]) - 12276733171358461769)))))), 117));
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_21 = (((arr_0 [i_0 + 2]) / 9));

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_22 &= (1862073476 * (!var_1));

                for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    var_23 = (((arr_14 [i_0 - 1] [i_2] [22] [i_4]) < 3745108745));
                    var_24 = (((var_2 / var_10) ? ((2098059513 - (arr_12 [i_0 + 3] [1] [i_0 + 3] [i_0 + 2]))) : (!11)));
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                {
                    var_25 = (((arr_5 [i_3]) ? (arr_5 [i_0 + 3]) : (arr_5 [i_2])));
                    var_26 = 127;
                    arr_18 [i_0] [i_2] [i_0] [i_2] [i_0] [i_0] = 1862073476;
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_0] [i_3] [16] = (0 * 13056865278850510356);
                    var_27 = (((((var_14 ? (arr_10 [i_3] [i_3]) : (arr_11 [i_2])))) || 512));
                    var_28 &= (((arr_1 [19]) << (((arr_12 [i_3] [i_3] [i_0 + 2] [i_6]) + 69))));

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_29 = 3624666564;
                        var_30 = ((1372399526 && (arr_15 [i_0 + 2] [i_7] [i_3])));
                    }
                    var_31 = (~(arr_15 [i_0 + 1] [i_0 - 2] [i_0 + 3]));
                }

                for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                {
                    var_32 = (((arr_13 [i_0 + 1]) + 3221749754));
                    arr_26 [i_8] [i_8] [i_2] [i_3] [i_2] [i_8] = (((var_1 * var_11) < var_3));
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                {
                    arr_29 [i_9] [i_9] [i_9] = ((19 - (2098059513 / var_16)));
                    var_33 = ((!(arr_27 [19] [15] [i_9] [19] [i_0 + 1] [i_0 + 3])));
                    var_34 = var_13;
                    arr_30 [i_3] [i_3] [i_9] [i_3] [i_0 + 1] = (((arr_3 [i_0 - 2] [i_0 - 1]) + 6530646226919464826));
                }
                var_35 = 9;
            }
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                var_36 = (!2531077354);
                var_37 = (~127);
            }

            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                arr_37 [i_11] [i_2] [i_2] [i_11] = 120;
                var_38 = ((arr_4 [i_0] [i_2] [i_2]) ^ (arr_10 [i_0] [i_0 + 1]));
                var_39 = 3846383478;
            }
            var_40 = (min(var_40, (((((-69 ? var_18 : (arr_22 [i_2] [i_2] [i_0] [i_0 + 3] [i_0]))) >> ((((arr_2 [6] [i_2]) && var_9))))))));
        }
        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
        {
            arr_41 [i_0] [i_0] [i_0 + 2] = ((((-var_8 / (arr_38 [i_0]))) / var_4));
            arr_42 [i_0 + 2] = (((((~(max(var_11, (arr_19 [i_0 + 2] [i_12] [i_12] [i_12])))))) ? (((arr_10 [i_0 - 1] [i_0 + 2]) - 13242308591774638200)) : (arr_36 [9] [i_0 + 3] [i_0 + 1] [i_0 + 1])));
            var_41 = ((!(((!18) != ((-74 ? 2665835171 : (arr_33 [i_0] [i_0] [i_0])))))));
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
        {
            var_42 = (((((((-48 ? 119 : 34))) ? ((4805431765913037210 ? 17806823793522112641 : 18)) : ((max(-87, 2494169356)))))) ? -120 : 4294967271);
            var_43 &= ((!(560537910 && 3994731695561105205)));
        }
        for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
        {
            var_44 |= (arr_44 [i_0 - 1] [1]);
            var_45 = (((((max(-115, var_3)) / (arr_35 [i_14] [i_14] [i_0 - 2] [i_14]))) <= (~2998713082)));
        }
    }
    var_46 = (((var_14 > var_6) << (var_13 - 3865965463)));
    var_47 = ((!var_8) ? ((((!(((4294967287 ? -62 : var_14))))))) : (~var_2));
    #pragma endscop
}
