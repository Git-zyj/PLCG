/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = 1;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_17 = (((arr_5 [i_1]) >= var_14));
            arr_7 [i_0] [i_0] [i_1] = (arr_6 [i_0] [i_1]);
        }
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        arr_11 [i_2] = 11770339883156068851;
        var_18 = 1;

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_19 = 11770339883156068846;
            var_20 = ((-(((arr_14 [i_2] [i_2 - 2] [i_2]) ? (arr_14 [i_2] [i_2 - 1] [i_2]) : var_7))));
        }
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_21 ^= (!469402047);
        var_22 = (min(var_22, ((min(-var_14, (((arr_10 [i_4] [i_4]) ? (arr_10 [i_4] [i_4]) : (arr_14 [i_4] [i_4] [i_4]))))))));
        var_23 *= (max(((11770339883156068869 ? 11770339883156068851 : 11770339883156068868)), (arr_17 [i_4])));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_20 [i_5] [i_5] = (6676404190553482742 * 1);

        /* vectorizable */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_24 = 6676404190553482742;
            var_25 *= ((((!(arr_10 [i_5] [i_5]))) ? -2147483644 : 6676404190553482770));
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_26 = arr_0 [i_6];
                            arr_31 [i_5] [i_5] [i_5] [i_7] = var_5;
                            arr_32 [9] [i_7] = (((arr_25 [i_7] [i_5] [i_7 + 1] [i_7 - 1]) ? (arr_25 [i_7] [i_6] [i_7 + 1] [i_7 + 1]) : (arr_25 [i_7] [i_5] [i_7 - 1] [i_7 - 1])));
                        }
                    }
                }
            }
            var_27 = var_13;
            var_28 = (max(var_28, (arr_13 [i_6])));
        }

        /* vectorizable */
        for (int i_10 = 1; i_10 < 12;i_10 += 1)
        {
            var_29 = var_6;
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            arr_42 [i_5] [i_10] [i_11] [i_12] [i_12] = (arr_24 [i_10] [i_10] [i_10]);
                            var_30 = 52339;
                            arr_43 [i_10] = 6676404190553482748;
                        }
                    }
                }
            }
        }
        for (int i_14 = 2; i_14 < 13;i_14 += 1)
        {
            arr_46 [i_5] = (arr_0 [i_5]);
            var_31 &= (arr_6 [i_5] [1]);

            for (int i_15 = 1; i_15 < 12;i_15 += 1)
            {
                arr_50 [i_5] [10] [i_5] [i_15] = -11;
                var_32 = ((var_13 ? (((!(arr_47 [i_15] [i_15 + 2] [i_15 + 1])))) : ((-(arr_40 [i_15])))));
            }
        }
        arr_51 [i_5] [i_5] = (((((arr_39 [i_5] [i_5] [i_5] [i_5]) ? 2311714420246261975 : 33546240))) ? (((arr_39 [i_5] [6] [i_5] [i_5]) ? (arr_39 [i_5] [i_5] [i_5] [i_5]) : (arr_39 [i_5] [i_5] [i_5] [i_5]))) : (((arr_39 [i_5] [i_5] [i_5] [i_5]) >> (((arr_39 [i_5] [i_5] [i_5] [i_5]) - 11093270715710568668)))));
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        for (int i_17 = 1; i_17 < 1;i_17 += 1)
        {
            {
                arr_58 [i_17] = ((((((min(6676404190553482772, 1)) * ((50144 ? 92 : 4611685984067649536))))) ? (min(6676404190553482744, 11770339883156068851)) : ((((!((((arr_38 [i_17] [i_17] [i_17]) / 1)))))))));
                var_33 = 1;
                var_34 = ((-((((arr_36 [i_17 - 1] [i_17]) < 6676404190553482795)))));
            }
        }
    }
    var_35 = (((!var_11) ? 1514278608 : -9389472059406704751));
    var_36 = ((-((var_12 ? var_16 : -1))));
    #pragma endscop
}
