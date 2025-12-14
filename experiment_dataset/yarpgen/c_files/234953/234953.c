/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_10 = (1160549682 <= (arr_1 [i_0]));
        var_11 = ((~(1160549682 % -1822021471)));
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        var_12 = 26148;
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_13 = (((((arr_4 [i_1] [i_1]) & ((198284628 >> (((((-2147483647 - 1) - -2147483637)) + 32)))))) <= -65));

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_14 = (min(var_14, (((3288755630 <= (arr_3 [i_3]))))));
                        var_15 = (max(var_15, -182769875));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_16 = (min(var_16, ((((((!(arr_8 [i_1] [i_1] [i_1] [i_1])))) | (((arr_12 [i_1] [i_2] [i_3] [i_4] [i_5] [i_4] [i_5]) / 9048)))))));
                            arr_14 [i_1] [i_1] [i_1] [i_1 - 4] [i_1 - 1] [i_1] = (809527761 | 1724513292);
                            arr_15 [i_2] [i_1] = ((((arr_3 [i_1]) >> (((arr_9 [15] [6] [11] [15] [6] [15]) - 787495255)))));
                            arr_16 [i_5] [i_4] [i_5] &= (-2147483647 - 1);
                            var_17 = (min(var_17, 198284628));
                        }
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            var_18 = (max(var_18, (arr_12 [i_1] [i_1] [6] [i_1] [i_1 - 1] [10] [1])));
                            var_19 = (arr_9 [1] [14] [i_2] [1] [i_2] [i_1]);
                        }
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            var_20 = (min(var_20, (((!(809527772 ^ -17))))));
                            arr_23 [18] [i_1] [18] &= (((arr_4 [i_4] [i_7 + 1]) / (arr_22 [16] [i_4] [i_2] [i_1])));
                        }
                        var_21 = ((-((-81 | ((((arr_22 [i_1] [i_2 - 1] [i_3] [i_4]) && (arr_8 [i_1] [i_2] [i_3] [i_4]))))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_22 = (((~2318635693) * (arr_4 [i_1] [6])));

                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            arr_31 [i_9] [i_8] [i_1] [16] [i_1] [i_2] [i_1] = (arr_22 [i_1] [i_2] [i_2] [i_1]);
                            arr_32 [i_1] [i_2 + 1] [i_3] [i_1] = ((((arr_20 [i_1] [i_1] [15] [i_1] [i_1]) ^ (arr_21 [i_1] [i_2]))));
                            arr_33 [i_1] [i_2] = ((127 - (((arr_4 [i_8] [i_3]) - 69))));
                        }
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_23 = ((-(((65535 <= (2570454004 * 594633855))))));
                        var_24 = (min(var_24, (arr_13 [i_1 - 4] [18] [18] [i_1 - 4] [i_1 - 4] [18] [18])));
                    }
                }
            }
        }
        var_25 = (min(var_25, (~1549676919)));
        var_26 = (max(var_26, (18 & 13537)));
        var_27 = ((-888596687 & (((56 | 9010920031652292849) ^ (1 >= 96)))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        var_28 = (min(var_28, ((((13519 + (arr_40 [19] [i_11])))))));

        for (int i_12 = 2; i_12 < 22;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 23;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 22;i_14 += 1)
                {
                    {
                        var_29 = arr_37 [i_12] [i_11];
                        var_30 = ((~(arr_44 [7])));
                        var_31 = (((((arr_37 [i_11] [i_12]) * (arr_43 [i_11] [i_12]))) <= (0 > -1)));
                    }
                }
            }
            arr_49 [i_12] = (arr_37 [i_11] [i_11]);
        }
    }
    var_32 = (max(var_32, ((((var_8 && (var_3 >= -1592177111)))))));
    var_33 = (max(var_33, 95));
    var_34 = -9010920031652292832;
    var_35 = var_1;
    #pragma endscop
}
