/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_14 = ((-66 || (((min(var_10, var_1))))));
                var_15 &= ((((arr_4 [i_0] [i_0] [i_1] [0]) % (100540878 & var_11))));
            }
            var_16 = -40638;
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_13 [i_4] [i_0] [12] [i_1] [i_0] [i_0 - 3] = (((!(!40638))));
                        var_17 ^= ((!((((43 & 50437) ? var_12 : 11424393725356918911)))));
                        arr_14 [i_1] [12] [i_1] [i_0] = (!var_13);
                    }
                }
            }
            var_18 = -var_6;
        }
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            var_19 = (max((arr_15 [i_5 + 2]), (max((arr_2 [i_0] [i_5]), var_1))));
            var_20 = (arr_3 [i_0] [9]);
        }
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            var_21 = ((min(var_10, var_3)));
            arr_19 [i_0] = -9354868660714912942;
            arr_20 [i_6] [i_0] [i_0] = ((-(var_10 + -var_13)));
            var_22 = ((!(((((max(22917, (arr_5 [i_6 - 1] [i_0] [i_0])))) - (arr_11 [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1] [i_6]))))));
            arr_21 [i_0] = -57;
        }
        arr_22 [i_0] [i_0] = 11424393725356918911;

        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            arr_25 [i_0] = ((!(arr_0 [7] [i_0])));
            var_23 = ((var_13 ? (((var_10 ? var_2 : var_7))) : (((!var_7) << ((((-(arr_24 [i_7]))) - 1353150057))))));
            var_24 -= (var_4 ? (((arr_24 [i_0 + 1]) ? (arr_24 [i_0 - 3]) : 2013265920)) : var_13);
            arr_26 [i_0] [i_0] = var_10;
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_25 = var_5;
            var_26 = (min((((~var_12) ? 3930 : (~4))), ((~((~(arr_12 [12] [i_0] [i_0])))))));
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            var_27 = (11424393725356918911 && 6);
            arr_34 [i_0] [i_9] = 4;
        }
        var_28 ^= var_11;
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {

            for (int i_12 = 1; i_12 < 21;i_12 += 1)
            {
                var_29 = (min((max((arr_41 [i_12 + 3] [i_12 + 2] [i_12 + 1]), (arr_38 [i_12 + 1] [i_12 - 1] [i_12 + 3]))), -var_11));
                arr_42 [i_10] = min((((arr_37 [i_10] [i_10]) ? (arr_36 [i_10] [i_10]) : (arr_40 [i_10] [i_12]))), (arr_37 [i_12 + 2] [i_11]));
                arr_43 [i_10] [i_10] [i_10] [i_11] = ((~(((!(~var_1))))));
                arr_44 [i_10] = ((min(14, var_10)));
            }

            for (int i_13 = 2; i_13 < 22;i_13 += 1)
            {
                arr_47 [i_10] = (~57045);
                var_30 = (max(var_30, ((max(18446744073709551614, 4294967295)))));
                var_31 = var_0;
                var_32 = (((((min(2595918979409228709, var_8)) < var_6)) ? ((((arr_46 [i_10] [i_13]) ? (arr_35 [i_10]) : 40638))) : (!var_1)));
            }
            arr_48 [i_10] = (min(-42, (-127 - 1)));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            var_33 = 11424393725356918913;
            var_34 = (min(var_34, (var_11 & 20011)));
            arr_51 [i_10] [i_10] = ((-(arr_35 [i_14])));
        }
        arr_52 [i_10] [i_10] = (arr_36 [i_10] [i_10]);
        arr_53 [i_10] [i_10] = var_11;
        var_35 = (!-1378858332);
    }
    var_36 = var_1;
    var_37 = var_4;
    var_38 = -var_5;
    #pragma endscop
}
