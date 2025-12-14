/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_15;

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_19 |= var_17;
        arr_2 [8] |= var_5;
        var_20 = (max(var_20, ((((var_12 - var_2) >= var_15)))));
        var_21 -= (((var_2 <= var_14) * (((!((max(var_11, var_17))))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_22 += var_3;
        var_23 -= (var_2 >= var_2);
        arr_5 [i_1] [i_1] &= (((!var_12) * (var_14 / var_7)));
        arr_6 [i_1] |= var_6;

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_24 *= (var_4 + var_12);
                var_25 |= (var_5 - var_13);
                var_26 = (min(var_26, var_3));

                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_27 ^= -var_0;
                    var_28 = (max(var_28, (var_7 + var_12)));
                    var_29 -= -var_16;
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_30 = (~var_3);
                    var_31 -= var_6;
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_32 = (min(var_32, (((var_14 | (~var_2))))));
                    var_33 = (max(var_33, (6 & 7)));
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_34 += var_1;

                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_35 = (max(var_35, (var_14 >= var_2)));
                        var_36 -= (var_13 / var_9);
                        var_37 *= ((var_10 >> (var_12 - 179493491424156235)));
                    }
                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        var_38 -= var_14;
                        var_39 = (max(var_39, ((((var_8 == var_15) <= var_10)))));
                        var_40 = (min(var_40, -var_3));
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_41 &= (((var_16 >= var_8) + (var_14 % var_1)));
                        var_42 *= var_14;
                    }
                }
            }
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                var_43 = -var_6;
                var_44 = (max(var_44, (!var_1)));
                var_45 ^= -var_17;
                var_46 += (((!var_0) - var_9));
            }
            var_47 = (max(var_47, (~var_12)));
            var_48 += ((~(~var_6)));
            arr_33 [i_1] [8] &= var_6;
        }
    }
    for (int i_12 = 3; i_12 < 11;i_12 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            var_49 += (var_17 ^ ((var_7 >> (var_15 + 684981479252453947))));
            arr_38 [6] [6] |= var_3;
        }
        for (int i_14 = 2; i_14 < 12;i_14 += 1)
        {
            var_50 = (max(var_50, (((max(var_14, var_1))))));
            var_51 ^= (min(794749031679179428, 32767));
        }
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            var_52 = (max(var_52, ((min(var_3, ((min((var_7 <= var_2), var_5))))))));
            var_53 *= (~-var_13);
        }
        var_54 = (min(var_54, ((min(var_2, ((max(var_12, var_14))))))));

        for (int i_16 = 0; i_16 < 13;i_16 += 1)
        {
            var_55 += ((~((max((var_5 != var_1), (!var_15))))));
            var_56 -= (((((((~var_1) < (var_2 >= var_17))))) % var_6));
            var_57 = (min(var_57, (((((((!var_11) * (max(var_9, var_1))))) != -var_6)))));
        }
        /* vectorizable */
        for (int i_17 = 2; i_17 < 11;i_17 += 1) /* same iter space */
        {
            var_58 += -var_13;
            var_59 = (min(var_59, ((((var_14 % var_17) * (var_15 <= var_6))))));
            var_60 *= (((var_2 < var_9) << ((((var_7 << (var_16 - 22183))) - 14603027344865099767))));
            var_61 = (max(var_61, (var_13 ^ var_11)));
        }
        for (int i_18 = 2; i_18 < 11;i_18 += 1) /* same iter space */
        {
            var_62 = (min(var_62, (((var_16 % (min(var_13, var_13)))))));

            for (int i_19 = 0; i_19 < 13;i_19 += 1)
            {
                var_63 -= (((-var_17 || var_12) >= ((var_7 << (((max(var_14, var_4)) - 13952316851116166331))))));
                var_64 *= ((var_0 - (~var_5)));
                var_65 -= (min(var_6, (((-(!var_9))))));
            }
            var_66 += (((~var_3) - (((~(~var_0))))));
        }

        for (int i_20 = 0; i_20 < 13;i_20 += 1)
        {
            var_67 = (min(var_67, (max(var_4, (!var_2)))));
            var_68 = (max(var_68, (((-var_11 < (~var_4))))));
        }
    }
    for (int i_21 = 3; i_21 < 11;i_21 += 1) /* same iter space */
    {
        var_69 = (min(var_69, ((min(((-(var_17 <= var_7))), (((!(var_1 == var_13)))))))));
        var_70 ^= ((var_13 <= (~var_17)));
    }
    #pragma endscop
}
