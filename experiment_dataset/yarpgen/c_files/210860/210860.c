/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_11 ^= (~0);
        arr_3 [i_0] = 18446744073709551615;
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            var_12 = (max(var_12, 9));
            arr_11 [i_1] [i_2] [i_2] = (+-65527);
            arr_12 [i_2] = -1;
            arr_13 [1] [i_2] [1] = 65535;
            arr_14 [i_2] [i_2] = 65535;
        }
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                var_13 = ((!((max(0, 65535)))));
                arr_19 [i_4] [9] [i_1] = (((max(0, 65535))));
                var_14 = (~65531);
                arr_20 [i_1] [i_3] [i_4] [i_4] = -0;
            }
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    var_15 = 4849368022524208107;
                    arr_25 [i_1 - 1] [i_1] [7] [9] = 0;
                    arr_26 [i_1 + 1] [i_1] = (max(18446744073709551615, ((max(65528, (!0))))));
                    arr_27 [i_1] [i_3] [i_1] [i_5] [9] = (min(-10027, 547814443930549822));
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_16 *= (min(1, 18096627240563052419));
                    var_17 = 1;

                    for (int i_8 = 1; i_8 < 7;i_8 += 1) /* same iter space */
                    {
                        arr_33 [i_1] [i_3] [i_5] [i_7] [i_8] [i_1] = -35184372088831;
                        var_18 -= 65535;
                        arr_34 [i_1] [8] [6] [6] [i_8] [i_8] |= 74;
                        arr_35 [i_1] [i_3] [i_5 - 1] [i_7] [10] [i_8] [i_8 + 2] = 0;
                    }
                    for (int i_9 = 1; i_9 < 7;i_9 += 1) /* same iter space */
                    {
                        var_19 = ((!(+-220)));
                        var_20 = (min(var_20, (~2034434669)));
                    }
                    for (int i_10 = 2; i_10 < 8;i_10 += 1)
                    {
                        arr_40 [5] [i_7] [i_5] [i_5] [i_10] = ((-(!3425132666410431748)));
                        arr_41 [i_7] [i_3] [6] = 0;
                    }

                    for (int i_11 = 1; i_11 < 8;i_11 += 1)
                    {
                        var_21 = (min(var_21, (!-2147483626)));
                        var_22 = ((~((~((max(1, 7)))))));
                        arr_44 [i_1] [0] [4] [i_5] [i_5 - 1] [3] [i_7] = (max((min((min(118114807, 245)), ((max(0, -10005))))), -15804));
                        arr_45 [i_7] [i_7] = max(-1, 10);
                    }
                }
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    var_23 = (!-266475907604937074);
                    arr_48 [i_12] [i_12] [i_5] = ((!(!255)));
                    arr_49 [i_12] [i_3] [i_5] [6] [i_3] [i_1 + 2] = 1873672000;
                }
                for (int i_13 = 4; i_13 < 9;i_13 += 1)
                {

                    /* vectorizable */
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        arr_54 [i_13] [i_3 - 2] = -22050;
                        arr_55 [i_1] [i_3 - 1] [i_13] [i_13] [3] = 12;
                    }
                    arr_56 [i_13] [i_13] [3] [i_5 - 1] [i_13] = (min((!254), -56));
                    var_24 += (max((max(1, 946288722320895680)), ((max(112, -10027)))));
                }
                arr_57 [i_1] [i_3] [i_3] [i_5] = 1;
            }
            var_25 -= ((min((!31573), (!1))));
        }
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            var_26 += ((~(!17500455351388655933)));
            var_27 += (max(17500455351388655935, 1));
            var_28 += (max((max(4702805239928261613, 1)), 2226828977459312599));
        }
        var_29 |= min(-1, ((min(-1382328696, -4294967295))));
    }
    var_30 = (max(var_30, var_4));
    #pragma endscop
}
