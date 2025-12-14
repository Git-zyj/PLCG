/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((((11363 ? 0 : 5268725133625422040))))));
    var_13 *= 65535;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (-(var_4 % var_10));
        var_14 = arr_0 [i_0] [i_0];
        arr_4 [i_0] [2] = (arr_1 [1] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_15 = (max(var_15, (((((var_7 ? var_8 : 65512)) & -1)))));
        var_16 = (((((var_2 ? var_7 : (arr_1 [i_1] [i_1])))) ? ((var_6 & (arr_0 [i_1] [2]))) : ((-26129 ? var_4 : (arr_0 [i_1] [8])))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 7;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_17 = -65512;
                            arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] = (((arr_17 [i_2] [i_2] [i_4] [i_2] [i_4]) << (((arr_18 [10]) - 25694))));
                            arr_21 [i_6] [i_6] = ((65535 & (arr_19 [i_5 - 2] [i_5 + 1] [8] [i_5 + 4] [i_5] [i_6])));
                            arr_22 [i_2] [i_2] [i_4] [2] = (((!-1753963553) - -19703));
                        }
                    }
                }
            }
            var_18 = ((~1) * ((var_6 ? var_1 : (arr_13 [i_3] [i_2] [i_3] [i_2]))));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            arr_25 [i_2] [i_2] [i_2] = ((((arr_8 [i_7]) >= (((var_6 + 2147483647) >> (((arr_13 [i_2] [i_2] [i_2] [i_2]) - 24589)))))));

            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                var_19 = (max(var_19, (((var_10 ? ((((min(var_2, var_5)) >= (min((arr_17 [10] [6] [i_7] [i_7] [i_8]), 5268725133625422040))))) : 11309)))));

                for (int i_9 = 1; i_9 < 7;i_9 += 1)
                {
                    arr_31 [i_2] [i_7] [i_8] = (((~(arr_8 [4]))));
                    var_20 ^= ((~((max(18853, 1548117072)))));
                    arr_32 [i_7] [8] [i_8] = ((~(min(var_6, -var_3))));
                    var_21 ^= ((-26124 ? var_8 : (17757 >= -26124)));
                    arr_33 [i_2] [i_7] [i_2] [7] [i_2] [i_2] = var_4;
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    arr_36 [i_2] [i_7] [i_10] [i_10] = (arr_12 [i_8]);
                    var_22 += ((-1243 ? 11047412251511751349 : 2675666616));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                {
                    var_23 = var_0;
                    arr_41 [9] [i_11] [i_12] = (max(((var_3 << (((((arr_0 [i_11] [i_11]) ? 63 : 803306886)) - 58)))), (arr_6 [0] [i_11])));
                    var_24 ^= (arr_26 [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
