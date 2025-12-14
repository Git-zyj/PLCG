/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_15 = (arr_8 [i_0] [i_0] [11]);
                    var_16 ^= 9364190197664601606;
                    var_17 = -2147483637;

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [0] [i_2] = ((!(arr_1 [i_2] [i_2])));
                        arr_13 [i_3] [i_1] [1] [i_3] &= var_14;
                        var_18 = (arr_3 [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_19 = (arr_5 [i_0] [i_4]);
                        arr_17 [i_1] [1] [i_2] = 268435455;
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_20 = -268435443;
                        arr_21 [i_0] [i_2] [i_2] = (arr_8 [i_0] [16] [i_5]);
                    }
                    arr_22 [i_2] [i_2] = ((202 ? 1 : (arr_2 [i_0])));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_21 = ((1644273961235126275 + (89 + -1473732802607364485)));
                    var_22 = 247;
                }
                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    var_23 = (max(var_23, 1));
                    var_24 = (min(var_24, (((-((((280976087815660540 ? var_14 : 1)) & 2862431719)))))));
                    var_25 = (((arr_23 [i_0] [i_1] [i_1] [i_1]) ? (249 | 1) : (max((arr_23 [20] [i_0] [i_7] [20]), ((-(arr_14 [i_0] [i_1] [i_1] [i_7 + 2])))))));
                    var_26 = (max(var_26, var_11));
                }
                var_27 = (arr_2 [i_0]);
                var_28 = (arr_1 [i_0] [7]);
                var_29 = (max(var_29, (arr_14 [9] [i_1] [i_1] [9])));

                /* vectorizable */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    arr_31 [i_0] [i_0] = (((arr_29 [i_0]) & (arr_29 [i_0])));
                    var_30 &= ((!(arr_26 [i_8] [i_1] [i_1] [i_0])));
                }
                for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                {
                    arr_34 [i_9] [i_1] [i_0] [i_0] = var_2;
                    arr_35 [i_0] [1] [15] = (((736800899 & (arr_9 [i_1] [i_9]))));
                    var_31 = (((((arr_8 [i_0] [i_1] [i_9]) + (250 <= 1378873721197063782))) & (((arr_24 [i_9] [i_1] [i_0]) | 26396))));
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                {
                    var_32 = (~5);

                    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                    {
                        arr_43 [i_0] [i_0] [i_1] [i_11] [0] = ((-(-8302 && 3896555808873587085)));
                        var_33 = ((~(arr_25 [i_1])));
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                    {
                        arr_46 [i_10] = (((arr_39 [i_10] [i_1] [20] [i_12]) | (arr_10 [2] [16] [i_10] [i_1] [i_0])));
                        arr_47 [i_1] [i_12] [i_12] = ((2350369773143574710 ? (((arr_0 [i_0]) | 1)) : (arr_2 [i_12])));
                    }
                    for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
                    {
                        var_34 = (arr_39 [i_13] [i_13] [i_10] [i_10]);
                        arr_50 [i_13] [i_1] [10] [i_13] = (((var_0 ? var_0 : 4)) >> (((((min((-2147483647 - 1), (arr_27 [i_0] [i_1] [i_1] [i_1]))) - -2147483629)) + 39)));
                    }
                    arr_51 [7] [7] [0] = 14821675958022653681;
                }
            }
        }
    }
    var_35 += (((~(9082553876044950012 >= var_7))) >= var_0);
    var_36 = (max(var_36, var_8));
    #pragma endscop
}
