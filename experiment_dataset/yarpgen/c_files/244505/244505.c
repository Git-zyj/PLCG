/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_18 = (((((((var_8 ? (arr_1 [i_0] [i_0]) : var_1))) ? var_7 : var_0)) & (arr_1 [i_0 - 3] [i_0 - 1])));
        var_19 = (min(var_19, -0));

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_20 = (((~2764641433) >> (((arr_0 [i_0] [i_1]) ? ((min(693603337, var_2))) : (arr_0 [i_0] [i_1])))));
            arr_4 [i_0] [i_1] [i_1] = 0;
        }
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            var_21 = ((((((var_6 == (arr_3 [i_0] [i_2 + 1]))))) < ((-(~14191282228536859166)))));
            var_22 |= ((var_10 | (!0)));
        }
    }
    for (int i_3 = 3; i_3 < 10;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_23 = (((((~(arr_8 [i_3 - 3])))) - (((~var_9) ? ((~(arr_5 [i_4]))) : (((min(var_17, var_13))))))));
                var_24 = ((-(((!((((arr_0 [1] [i_4]) ? (arr_3 [i_3] [i_4]) : 1))))))));
                arr_14 [i_4] |= ((+(((((((arr_13 [i_4]) ? var_2 : (arr_3 [i_4] [i_4])))) < 3939820258)))));
                var_25 = (max(var_6, (((var_6 || (var_7 <= var_13))))));
                arr_15 [i_3] = (((var_4 ? (arr_7 [i_5] [i_4]) : ((0 ? (arr_7 [i_5] [i_3 + 1]) : var_6)))) < (var_15 | var_9));
            }
            for (int i_6 = 4; i_6 < 10;i_6 += 1)
            {
                var_26 = (var_3 - var_17);
                var_27 = ((((((arr_6 [i_6 - 3] [i_3 - 3]) * 0))) ? ((-(arr_6 [i_4] [i_4]))) : var_2));
            }
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                arr_23 [i_3] [2] [i_3] [i_7] = var_4;

                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    arr_27 [i_3] [i_3] = (((((((var_7 == (arr_16 [9] [i_4] [i_7] [i_8 + 1])))))) ? ((18446744073709551611 ? ((984982284 ? var_9 : 0)) : -69057604)) : (~var_2)));
                    arr_28 [i_3] [i_3] [i_7] [i_3] = (((((min((arr_17 [i_8] [i_3]), var_5)))) >= (((arr_22 [i_3]) + (arr_22 [i_7])))));
                    arr_29 [i_3] [i_3] [i_3] [i_4] [0] [i_8] = ((((arr_9 [i_3 - 3] [i_8 + 1]) | var_13)) ^ (((arr_9 [i_3 - 1] [i_8 + 1]) | -209122960)));

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_28 = (max(var_28, (((((!(~var_2))) ? (((((var_15 ? var_9 : var_15))) ? 2147483619 : (var_15 / var_1))) : var_4)))));
                        var_29 = (min(var_29, (((((var_11 % var_4) ? 1 : (arr_22 [i_3])))))));
                    }
                    for (int i_10 = 3; i_10 < 10;i_10 += 1)
                    {
                        var_30 = (min((max(-94, -120)), ((((((max((arr_32 [i_10] [i_8] [i_7] [i_4] [i_3]), (arr_10 [i_3]))))) < var_16)))));
                        arr_35 [i_3] = (((355147037 < 50505) ? var_11 : (53 | 2570122039210079188)));
                    }
                    for (int i_11 = 0; i_11 < 0;i_11 += 1) /* same iter space */
                    {
                        var_31 = (min(var_31, (((((arr_25 [i_3] [10] [i_4] [i_11]) | 93)) / 1))));
                        arr_40 [i_3] [i_3] [i_3] [i_3] [i_3] = var_8;
                        arr_41 [i_4] [i_8] &= arr_36 [i_3] [i_4] [i_7] [i_3] [i_11];
                        arr_42 [i_3] [i_3] = (var_12 / var_8);
                    }
                    for (int i_12 = 0; i_12 < 0;i_12 += 1) /* same iter space */
                    {
                        var_32 *= (max(-118, var_11));
                        arr_45 [i_3] [i_3] [i_3] [i_4] [i_3] [i_3] = 1;
                        var_33 = (+((var_14 ? 0 : ((((arr_6 [i_3] [i_4]) < var_11))))));
                    }
                }
            }
            arr_46 [i_3] = ((2524617704933602803 > (~93)));
            var_34 = ((!((!(arr_20 [i_3 - 1] [i_3] [i_3])))));
            var_35 &= (min(0, ((max(((((arr_5 [i_4]) ? var_9 : 217))), var_10)))));
            var_36 *= (-2147483647 - 1);
        }
        arr_47 [i_3] = var_13;
        var_37 ^= (((((!(arr_43 [i_3] [i_3] [i_3 + 1] [6] [i_3 + 1])))) << (((((var_15 << var_3) ? var_13 : -63)) + 87))));
        var_38 = (max(var_38, (((!(arr_21 [i_3]))))));

        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            var_39 &= ((127 ? (((((!(arr_20 [i_3 - 3] [1] [i_13]))) && ((max((arr_16 [i_3] [i_3] [i_3] [i_13]), (arr_34 [i_3] [i_3] [i_3] [i_3] [i_3]))))))) : 1));

            for (int i_14 = 1; i_14 < 9;i_14 += 1)
            {
                var_40 = (arr_16 [i_3] [i_13] [i_3] [i_14]);
                var_41 = (max(var_41, ((max(var_15, var_16)))));
                var_42 = ((((((~var_5) | (((arr_24 [i_3] [i_13] [i_13] [i_3] [i_3]) ? 2147483647 : var_12))))) ? var_8 : (((var_11 ^ var_7) ? -26 : (((arr_3 [i_3] [i_14]) ? (arr_12 [i_3] [i_3] [i_13] [i_14]) : var_9))))));
            }
            /* vectorizable */
            for (int i_15 = 3; i_15 < 9;i_15 += 1)
            {
                arr_55 [i_3] [i_3] = var_2;
                var_43 = (max(var_43, 18446744073709551587));
            }
            arr_56 [i_3] = (arr_31 [i_3 + 1] [i_3 + 1] [i_13] [i_13] [i_13] [i_3 + 1]);
            arr_57 [i_3] [i_3] = (arr_26 [i_3] [i_3]);
            var_44 = ((((min((((!(arr_26 [i_3] [i_3])))), var_11))) ? var_12 : (~var_4)));
        }
    }
    for (int i_16 = 0; i_16 < 16;i_16 += 1)
    {
        arr_60 [i_16] = 4534400497505732843;
        var_45 = ((!(~var_13)));
        arr_61 [i_16] [i_16] = (((arr_58 [i_16]) & 2147483647));
    }
    var_46 *= var_0;
    var_47 = (~var_11);
    #pragma endscop
}
