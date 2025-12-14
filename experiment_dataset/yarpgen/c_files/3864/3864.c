/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((min(((max(var_15, 8307565545480558508))), (max(var_13, var_1)))), 1));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (min((max((arr_3 [i_0] [i_0]), var_17)), var_5));
            arr_7 [8] [3] = (min((((8307565545480558508 >> (-10148 + 10205)))), (max((max(var_3, var_12)), var_12))));
        }
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_15 [7] [7] = 1;
                    var_21 = var_11;
                    var_22 = (~1);
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_23 = (((~11383) ? -8307565545480558494 : -20));
                    var_24 += (1 % 1);
                    var_25 = ((((-(arr_12 [2] [i_2 + 1] [2] [i_2]))) + (8307565545480558510 >= 1)));
                }
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    arr_24 [i_0] [i_0] [1] [i_6] = 8689628213560785007;
                    arr_25 [6] [i_2] [i_3] = (((12918 - 8307565545480558488) && (arr_14 [i_0] [i_2] [i_3] [i_2])));

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_26 -= (!((var_2 > (arr_0 [i_0] [i_0]))));
                        var_27 = -7;
                        var_28 = var_11;
                    }
                    arr_29 [i_0] [i_0] [9] [i_3] [i_3] [i_6] = (arr_18 [i_6 + 1] [i_0] [i_6 - 1] [i_6 - 2] [i_6]);
                }
                var_29 = (min(var_29, 12));
                arr_30 [i_0] [i_0] [i_0] = -22;
            }
            arr_31 [i_2] = min((arr_11 [i_2 + 1] [i_2] [i_0]), (arr_23 [15] [i_2] [7] [7]));
        }
        arr_32 [i_0] = -86;
        arr_33 [i_0] = (((8307565545480558494 ? 14 : -99)));
        var_30 = (((arr_9 [14]) + ((max((!6836550689129971976), (min(var_2, 127)))))));
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {

        for (int i_9 = 2; i_9 < 12;i_9 += 1)
        {
            var_31 *= (((arr_22 [i_9 - 2]) / 17643177944143438650));

            for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
            {
                arr_42 [i_9] [i_9] = 8307565545480558483;
                var_32 = (((arr_36 [i_9 + 1]) * var_7));
            }
            for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
            {
                var_33 = -127;

                for (int i_12 = 2; i_12 < 13;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                    {
                        var_34 = 10481073581925892597;
                        var_35 = var_10;
                        arr_51 [i_9] [i_9] [7] [7] [i_9] = (((arr_17 [i_12 - 2] [i_9 + 2] [i_8]) ? (arr_17 [i_12 - 1] [i_9 + 1] [8]) : var_11));
                        var_36 = (17643177944143438661 || 54);
                        var_37 += (((~17643177944143438667) ? 8307565545480558527 : 1));
                    }
                    for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                    {
                        var_38 = 17643987130012390820;
                        var_39 -= (((arr_48 [i_12 + 1] [i_12 - 2]) + 3186678038));
                    }
                    var_40 = ((!(arr_38 [i_9] [i_9])));
                    arr_55 [1] [4] [i_11] [i_9] = (arr_14 [i_8] [15] [i_11] [i_12 + 1]);
                    arr_56 [i_12] [i_9] [i_9 + 2] [i_9] [1] = var_2;
                }
                for (int i_15 = 1; i_15 < 13;i_15 += 1)
                {

                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        var_41 = var_8;
                        arr_63 [i_9] [13] [13] [i_9] = var_17;
                        var_42 ^= var_17;
                        var_43 = (min(var_43, (((~(var_8 % 2800463228))))));
                    }
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        arr_67 [i_15] [i_9] [i_9] [i_9] [i_11] [i_8] [i_11] = var_1;
                        arr_68 [i_9] [9] [i_15] [9] [i_15] [i_15] = 17643177944143438667;
                        arr_69 [8] [i_9] [i_8] [i_8] [i_9] [i_9] [i_8] = -1284259149;
                    }
                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        var_44 = ((93 ? 929264779 : 74));
                        var_45 = (((-127 - 1) + ((-(arr_40 [8] [1] [i_9])))));
                        var_46 += -63;
                        arr_72 [13] [i_9 + 1] [i_11] [i_9] [i_18] = 238;
                    }
                    arr_73 [i_9] [i_9 - 1] [i_11] = var_18;
                    arr_74 [12] [12] [i_9] = var_18;
                }
            }
        }
        arr_75 [i_8] [i_8] = ((arr_64 [i_8] [i_8] [i_8]) - 217);
    }
    #pragma endscop
}
