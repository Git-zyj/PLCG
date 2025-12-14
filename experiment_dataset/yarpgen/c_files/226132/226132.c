/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((37488 ? ((3999357284 ? 1 : 1)) : ((53 ? 0 : 2130706432))));
    var_12 = (max(var_12, ((min(((!((max(1847322633664550021, 22772))))), ((!((max(var_7, -1142))))))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = (arr_1 [i_0]);
        arr_5 [i_0] [i_0] = (max((min(-1276730122, 5302556528639924661)), ((((arr_3 [i_0]) ? (arr_0 [i_0]) : -32753)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1] = ((((((arr_7 [i_1] [i_1]) * (arr_6 [10])))) ? -53 : (!12867484447040010314)));
        arr_9 [i_1] [i_1] = (((1 / 5905057711786795055) / (arr_7 [15] [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_13 = ((3847381482 && (-127 - 1)));
            arr_16 [i_2] [0] [i_3] = (((arr_6 [i_2]) ? 106 : -20));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_14 = (arr_7 [i_2] [i_6 - 1]);
                            arr_29 [1] [i_2] [1] [i_2] [i_4] = (!3963250731009541754);
                        }
                    }
                }
            }
            var_15 = (arr_3 [i_4]);
        }
        var_16 = (max(var_16, 25));
        arr_30 [i_2] = (arr_6 [i_2]);
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        arr_33 [i_8] |= ((!((((-127 - 1) - -1202068185)))));
        var_17 = ((!((((arr_31 [i_8]) | (arr_31 [i_8]))))));

        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            var_18 = (max(var_18, var_10));
            arr_36 [i_9] [12] [i_8] = arr_34 [i_9];
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            var_19 = (3847381482 && -1980724503);
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 21;i_12 += 1)
                {
                    {
                        arr_47 [i_8] [i_8] [i_10] [i_12] = 104;
                        arr_48 [5] [i_10] [i_11] [18] = (max(((((!var_6) > (((arr_45 [i_11] [i_10] [i_8]) ? 9223372036854775807 : -115))))), (arr_38 [i_10] [i_11] [i_10])));
                    }
                }
            }
            var_20 -= (arr_39 [i_8] [i_8]);
            /* LoopNest 3 */
            for (int i_13 = 2; i_13 < 20;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 20;i_15 += 1)
                    {
                        {
                            var_21 *= (((((arr_52 [i_13 - 2] [i_14 + 1] [i_8]) << (((arr_31 [i_13]) - 26310)))) & ((min(-33, -1327086201244163842)))));
                            var_22 = (arr_42 [21] [i_13 + 3] [i_15 + 3]);
                            arr_56 [i_8] [i_8] [i_8] [i_10] = (max(65518, 63));
                            var_23 = ((-2263244590879757311 ? -9223372036854775802 : -1));
                            var_24 = (max(((max(16909, 2147483647))), (min((arr_52 [i_13 + 2] [i_14 - 1] [i_10]), (arr_52 [i_13 - 1] [i_14 + 1] [i_10])))));
                        }
                    }
                }
            }
            var_25 = -72;
        }
    }
    var_26 = (max(var_8, var_6));
    #pragma endscop
}
