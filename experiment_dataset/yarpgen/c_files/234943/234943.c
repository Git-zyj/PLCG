/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((var_6 ? var_2 : (min(var_10, var_6)))) & ((-18 ? ((535742432 ? -1026234872 : var_2)) : 1))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_14 ^= ((((89 ? var_7 : var_10))));
                        var_15 = (((179 + 76) >= (min((((150 ? var_10 : var_1))), ((221 ? 10863505939201496973 : 6412))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_16 += (max((min((max(var_7, 197)), 106)), (((((min(52088, (arr_3 [6])))) <= ((var_12 ? 17067449918295989919 : 13461)))))));
                        arr_18 [i_4] [i_5] [i_6] = (1637903017 - 1);
                        var_17 = 14701;
                    }
                    var_18 = (((247 ? 92 : 53)));
                    var_19 = (min(2871910436, -3979706044538790646));
                }
            }
        }

        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        var_20 = (arr_20 [i_9]);

                        for (int i_10 = 1; i_10 < 23;i_10 += 1)
                        {
                            var_21 = (min((arr_27 [21] [15] [i_8] [i_8] [i_8]), (min(((2090900413 ? 3979706044538790646 : 10873)), ((min(12, -28314)))))));
                            var_22 = (arr_4 [i_0] [i_0]);
                            var_23 = (min(var_23, ((max(((54884 ? 3979706044538790652 : 52088)), ((max(((var_11 || (arr_13 [i_8] [16] [i_8] [i_9]))), (!var_0)))))))));
                            var_24 = (arr_8 [9] [i_8 - 2] [i_8] [13] [i_10 + 2] [i_10 + 2]);
                            var_25 = (min(234, 52065));
                        }
                    }
                }
            }

            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                var_26 &= (((arr_19 [i_0] [4] [i_0]) / (arr_19 [i_0] [i_7] [i_0])));

                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    var_27 = (min((max(18617, (((arr_13 [i_7] [i_11] [i_7] [i_7]) ? var_9 : (arr_13 [i_7] [i_7] [i_7] [i_7]))))), (arr_29 [17] [i_11] [i_11])));
                    var_28 = ((((((arr_27 [i_0] [i_7] [i_11] [i_11] [i_12]) | (arr_21 [i_11])))) ? ((var_4 ? (arr_33 [i_0] [i_7] [i_0] [i_0]) : (arr_3 [i_11]))) : (((var_5 ? (arr_21 [i_12]) : (arr_21 [i_12]))))));
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {

                    for (int i_14 = 2; i_14 < 21;i_14 += 1)
                    {
                        var_29 = ((var_10 / (arr_32 [i_0] [i_7] [i_11])));
                        var_30 = ((arr_35 [i_14 + 1] [i_14 + 3] [i_14] [i_14 + 4]) ? (arr_35 [i_14 - 1] [8] [i_14] [i_14 + 3]) : (arr_35 [i_14 + 3] [i_14] [i_14 - 1] [i_14 + 1]));
                    }
                    var_31 = (arr_22 [i_0] [i_0] [i_0]);
                }
            }
            var_32 = 3711258266;
        }
    }
    for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
    {
        var_33 = (((arr_29 [i_15] [i_15] [i_15]) ? (min(11051630259776873822, (arr_22 [i_15] [i_15] [i_15]))) : (arr_19 [i_15] [i_15] [i_15])));

        /* vectorizable */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            var_34 = ((var_0 ? var_5 : (((arr_34 [i_15] [i_15]) ? 52094 : var_9))));
            arr_44 [i_15] [i_15] &= ((var_6 ? (~52095) : 7395113813932677786));
        }
    }
    #pragma endscop
}
