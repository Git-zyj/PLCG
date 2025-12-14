/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((((var_4 ? var_12 : (var_2 & var_7)))) ? (max((!178), (min(105, var_7)))) : (max((~var_12), var_8)))))));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_16 = -6176;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_17 = (((arr_6 [i_0 - 2] [i_0 - 1]) ? (arr_6 [i_0 - 2] [i_0 - 1]) : (arr_6 [i_0 - 1] [i_0 - 2])));
            arr_7 [i_0] = var_7;
            var_18 = 247;
        }
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            var_19 = ((((((~var_12) ? var_14 : var_4))) >= ((var_8 ? 6176 : var_10))));
            arr_11 [i_2] [i_0 + 1] [i_2] = ((((var_7 + (arr_6 [i_0 + 1] [i_2 - 1]))) + (((((arr_6 [i_0 + 1] [i_0]) != var_6))))));
            var_20 = ((-(max((~var_12), ((-(arr_0 [i_0] [i_0])))))));
            var_21 = (arr_1 [i_2]);
        }
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            var_22 ^= 77;
            var_23 = (!-59362);
            var_24 ^= (max((max(var_5, var_11)), (((((var_11 ? var_14 : var_1))) ? ((2933433046 ? var_4 : var_13)) : ((var_8 ? var_4 : var_1))))));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                arr_20 [i_0] [i_4] [i_4] [i_4] = (max(198, 1421526906));
                arr_21 [i_0] [i_0] = (min(9223372036854775807, ((min(((var_11 ? 89 : (arr_4 [i_0]))), var_13)))));

                for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    arr_24 [i_0] [i_0 - 2] [i_0 + 1] = ((-(((arr_14 [i_0 - 2] [i_0 - 3]) ^ (arr_15 [i_6] [i_6])))));

                    for (int i_7 = 4; i_7 < 18;i_7 += 1)
                    {
                        var_25 = (min(((min(-var_14, var_6))), ((-(arr_1 [i_0 - 1])))));
                        var_26 |= ((~(((9223372036854775779 <= var_9) % 2048))));
                        var_27 = (min(((6176 ? ((min(var_2, var_11))) : (~-9223372036854775777))), (((((-(arr_19 [i_7] [i_6] [i_4]))) < (((max(var_4, 54)))))))));
                        var_28 &= (arr_14 [i_5] [i_7 - 4]);
                    }
                    var_29 = (max(((((!180) ? 75 : ((max(4095, 63733)))))), 2933433077));
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    arr_32 [i_0] [i_5] [i_4] [i_0] = (32767 == 3509674382144805240);
                    var_30 &= (min((((2276391044 == (-9223372036854775791 != 32767)))), ((min(var_13, 81)))));
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_31 = (min(var_31, (((((((~var_10) ? (~var_5) : (max(1, var_10))))) || (((((-23903 ? var_4 : 579887289)) % var_5))))))));
                    arr_35 [i_9] [i_4] [i_5] = (!-32755);
                    var_32 = (((arr_13 [i_0] [i_5] [i_9]) == ((~((180 >> (var_14 + 22)))))));

                    /* vectorizable */
                    for (int i_10 = 4; i_10 < 18;i_10 += 1)
                    {
                        var_33 = (178 != var_7);
                        arr_39 [i_0] [i_9] [i_5] [i_9] [i_9] [i_10 - 1] [i_10 - 1] = (((arr_13 [i_5] [i_9] [i_10]) < 35829));
                    }
                    var_34 = (min(864691128455135232, 78));
                }
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    var_35 |= (max(-132, 32760));
                    var_36 |= var_12;
                }
                var_37 = (max(-1430292543, ((min(0, var_13)))));
                var_38 -= var_12;
            }
            var_39 = ((min((~var_5), (var_3 == var_9))));
            var_40 = (max(var_40, var_6));
        }

        /* vectorizable */
        for (int i_12 = 3; i_12 < 18;i_12 += 1)
        {

            for (int i_13 = 2; i_13 < 19;i_13 += 1)
            {
                arr_46 [i_0] [i_0] [i_13 + 1] = ((var_0 ? 3910884853 : ((9668 ? 9223372036854775779 : var_3))));
                arr_47 [i_0 - 2] [i_12] [i_13] = ((-9223372036854775793 + (arr_1 [i_0 - 1])));
            }
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                var_41 = (!var_5);
                var_42 = (max(var_42, (((var_9 ? (arr_26 [0] [i_14] [i_12] [0]) : var_7)))));
            }
            arr_50 [i_0] [i_0 - 2] [i_12] = -1333984032;
        }
        arr_51 [i_0 - 1] [i_0] &= 1;
    }
    var_43 = (((max(((var_0 ? 2510956620 : var_9)), -var_4)) != var_12));

    for (int i_15 = 0; i_15 < 10;i_15 += 1)
    {
        arr_54 [i_15] = ((var_0 > (max((~var_4), (min((arr_41 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]), var_9))))));
        arr_55 [i_15] = (max((max(((max(2721996297, var_9))), -9223372036854775793)), ((min(var_9, 9655)))));
    }
    #pragma endscop
}
