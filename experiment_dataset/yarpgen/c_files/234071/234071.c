/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_17 = var_12;
        arr_2 [i_0] = ((-((var_16 - (arr_1 [i_0])))));
        var_18 = (min(var_18, var_1));

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_0] [i_1 - 1] = (arr_1 [i_0]);
            var_19 += ((-2124199658328544419 ? var_7 : (arr_1 [i_1 + 1])));
            arr_6 [i_1] [i_0 - 1] = (arr_0 [i_0 + 1]);
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_20 = (!var_12);
            var_21 = var_0;
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    {
                        var_22 -= ((var_7 ? ((-(arr_0 [i_5]))) : (((!(arr_7 [17]))))));
                        var_23 = (min(var_23, (arr_12 [i_5] [i_4] [i_6])));
                    }
                }
            }
        }
        var_24 = 2124199658328544418;

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                var_25 = ((-2171 ? (arr_19 [i_3] [i_7] [i_8]) : -2171));

                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {

                    for (int i_10 = 2; i_10 < 17;i_10 += 1)
                    {
                        arr_28 [i_3] [i_7] [i_8] [i_3] [i_9] [i_3] [5] = (arr_9 [i_8]);
                        var_26 = 6;
                    }
                    arr_29 [i_3] [i_3] [i_3] [5] [5] = (arr_27 [i_9] [i_8] [i_8] [i_3] [i_3]);
                    arr_30 [i_9] [i_3] [18] [i_3] [i_3] = (((arr_0 [i_3]) ? var_10 : var_16));
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    var_27 = (max(var_27, (arr_8 [i_3])));
                    var_28 = var_5;
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            arr_39 [i_3] [i_7] [i_3] = 65535;
                            arr_40 [i_12] [i_12] [i_3] [i_12] [i_12] [i_12] [i_12] = (2171 >> 0);
                            var_29 = var_10;
                        }
                    }
                }
            }
            arr_41 [i_3] [i_7] = (arr_15 [i_3] [i_3] [i_7] [i_7] [i_7]);
        }
    }
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        arr_44 [i_14] [i_14] = (((((((min(var_11, (arr_1 [i_14])))) ? ((35 ? var_5 : -2149)) : ((-2124199658328544443 ? var_15 : var_5))))) ? -2171 : (var_12 >= -var_5)));
        var_30 = (((var_5 ? (((var_16 + 2147483647) << (((-2154720037993751406 + 2154720037993751415) - 9)))) : (((1430318488519051305 != (arr_16 [i_14] [i_14])))))));
    }
    for (int i_15 = 0; i_15 < 24;i_15 += 1)
    {
        var_31 = (max(var_31, 922780449));
        arr_49 [i_15] [i_15] = -60623;
        arr_50 [9] = 7996;
        arr_51 [i_15] [i_15] = ((var_4 >= var_2) << ((((-(arr_46 [i_15]))) - 2213224367810202532)));
    }
    #pragma endscop
}
