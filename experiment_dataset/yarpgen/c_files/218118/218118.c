/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_6 ? ((2438623425912660055 + ((var_9 ? -1 : var_3)))) : var_0));
    var_13 = ((~(max(((var_4 ? var_4 : var_5)), 57))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_2 [9]) + (arr_0 [i_0 + 2])));
        arr_4 [i_0 - 2] = (((((arr_1 [1] [i_0]) ? ((((arr_2 [i_0 - 1]) == (arr_2 [i_0])))) : ((-(arr_1 [i_0] [i_0]))))) < ((((max((arr_1 [i_0 + 1] [i_0]), (arr_0 [i_0 - 1])))) - (((arr_2 [6]) | (arr_1 [9] [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = ((((((0 ? 14520960303693086009 : 1)) & (arr_8 [i_1]))) & ((((arr_5 [i_1]) & (arr_7 [i_1]))))));
        arr_10 [i_1] [i_1] = ((!(arr_8 [9])));
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_13 [0] = (min(var_8, (~var_0)));
        var_14 = (arr_8 [i_2]);
        arr_14 [i_2] = var_7;

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_15 = ((arr_6 [i_2]) ? (((!(arr_15 [i_2] [i_3])))) : (arr_11 [i_2] [i_3]));
            arr_17 [i_2] [i_3] = (((((var_7 + (arr_5 [i_3])))) && ((51799 >= (arr_5 [i_3])))));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                var_16 = ((var_5 > (arr_5 [i_4])));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_17 = (max(var_17, ((((arr_25 [i_6]) / (arr_25 [i_2]))))));
                            arr_26 [8] = (arr_15 [i_2] [i_5 - 3]);
                        }
                    }
                }
                var_18 -= ((((1 >> (254 - 252))) <= (arr_6 [i_2])));

                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {

                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        var_19 = ((~(arr_18 [i_2])));
                        var_20 -= (arr_27 [i_2] [i_3] [i_4] [12] [i_8 + 1] [i_8]);
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_21 -= (~2007259752);
                        var_22 ^= var_4;
                        var_23 = (arr_24 [i_9] [i_7] [i_4] [i_2]);
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_24 = (max(var_24, ((((arr_24 [i_2] [i_4] [i_7] [i_4]) ? (arr_24 [i_2] [i_3] [i_4] [i_7]) : (arr_24 [i_4] [i_4] [i_4] [i_4]))))));
                        arr_39 [i_2] [4] [4] [i_4] [8] [4] [i_10] = (!var_9);
                    }
                    arr_40 [i_3] [i_7] [8] [i_3] [8] = (((~var_5) ? 0 : (arr_5 [i_2])));
                    var_25 += (((arr_22 [i_2] [i_3] [i_4] [i_7]) != (arr_22 [i_4] [i_4] [i_4] [i_4])));
                    var_26 = (!31);
                }
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    var_27 = (max(var_27, (arr_22 [i_2] [i_2] [i_2] [i_2])));
                    var_28 = (arr_19 [i_2]);
                    var_29 = -1;

                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        arr_49 [i_2] [i_2] [13] [13] [i_2] [i_2] [i_2] = ((((((-22306 + 2147483647) >> (((arr_1 [i_3] [0]) + 64))))) ^ -var_2));
                        arr_50 [i_11] |= -13251;
                    }
                }
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    var_30 = ((~(arr_6 [i_4])));
                    var_31 = 52;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            {
                var_32 = ((+(((arr_54 [i_15]) ? (arr_54 [i_15]) : 1))));
                var_33 = (max(var_33, 1));
            }
        }
    }
    #pragma endscop
}
