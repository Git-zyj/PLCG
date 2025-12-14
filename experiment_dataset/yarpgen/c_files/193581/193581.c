/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 = (!65528);
                                var_13 = (((0 - (max(1, -1037835670)))) == (~114));
                            }
                        }
                    }
                }
                var_14 = (min(9915, 947906886));

                for (int i_5 = 2; i_5 < 24;i_5 += 1)
                {
                    var_15 = ((((!(~14340294760093258407))) || var_10));
                    var_16 = arr_2 [i_0 + 2];
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    var_17 = 2272166861367315397;
                    var_18 = ((!(arr_7 [i_0 - 1] [i_1] [i_6])));
                    var_19 = -1251258855;
                    arr_19 [i_0] [i_0] = (~var_10);
                    var_20 = (arr_18 [i_6] [i_0]);
                }
                for (int i_7 = 1; i_7 < 24;i_7 += 1)
                {
                    var_21 = ((-(~var_5)));
                    var_22 = (((((((((-(arr_20 [i_0] [i_1] [22] [i_0]))) + 2147483647)) << (((((~1) + 20)) - 18))))) ? (65535 || 8) : (65528 / 10088)));
                    var_23 = (arr_2 [i_0]);
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_24 = (arr_17 [i_8] [i_1] [i_0] [i_0]);
                    var_25 = (((arr_12 [i_0] [i_0] [i_8] [i_8] [i_0 - 1] [i_0] [i_1]) ? (arr_16 [i_0] [i_8] [i_0] [i_0 + 2]) : (arr_23 [i_0] [i_0] [i_0 - 1] [i_0])));
                }
            }
        }
    }
    var_26 = (min(((2561685411 * (var_9 || var_7))), var_6));

    for (int i_9 = 3; i_9 < 12;i_9 += 1)
    {
        var_27 = ((((((arr_15 [i_9]) ? (arr_15 [i_9]) : (arr_15 [i_9])))) ? ((((((((arr_4 [i_9]) + 2147483647)) << (32760 - 32760))) < (65530 <= -4595)))) : 242));
        var_28 = min(1, 1);
        arr_27 [i_9] = (arr_2 [i_9 - 1]);
        var_29 = ((~(((((-84 & (arr_22 [i_9] [i_9])))) ? ((min(-29449, 6))) : var_0))));
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            {
                var_30 = var_9;

                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    var_31 = (arr_24 [i_12] [i_11] [i_10]);
                    var_32 = ((((10088 | 13) * 4294967295)));
                    var_33 = (!82);
                }
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    arr_40 [i_10] = ((!((max((var_9 && 16324293293064682793), ((var_0 ? 106 : (arr_4 [i_10]))))))));
                    var_34 = 65535;
                    var_35 = 3909038219457067988;
                    arr_41 [i_10] [i_11] = (+(((arr_7 [i_10] [i_11] [i_10]) ? (arr_7 [i_10] [i_10] [i_10]) : (arr_7 [18] [i_11] [i_10]))));
                    var_36 = (max(((-(arr_31 [i_10] [i_10]))), var_2));
                }
            }
        }
    }
    var_37 = ((max(-var_10, -124)));
    #pragma endscop
}
