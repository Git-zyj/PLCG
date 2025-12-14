/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 = var_3;

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((((arr_0 [i_0 + 2]) & (arr_1 [i_0 - 4]))) / ((-(arr_1 [i_0 - 4]))));
        var_13 = (min(401893943, 0));
        var_14 = var_6;
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                {
                    arr_10 [i_3] [i_2] = ((~(((arr_6 [i_1 + 1] [i_3]) ? (arr_9 [i_1 + 1] [i_1] [i_3] [i_3 + 2]) : (((arr_9 [i_1 + 1] [i_1 + 1] [i_2] [i_3]) >> (-401893948 + 401893960)))))));
                    var_15 = (min(var_15, (((var_9 ? (arr_7 [i_1 + 1]) : (arr_9 [i_2] [i_2] [i_3 + 1] [i_3 - 1]))))));
                    var_16 = (arr_6 [i_1 + 1] [i_1 + 1]);

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_17 = (min((min(var_2, var_6)), 127));
                        var_18 = 401893959;
                        var_19 = (!-116);

                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            arr_17 [i_1] [i_3] [i_2] [8] [i_3] = 401893965;
                            var_20 -= ((((var_4 ? var_2 : var_10)) >> ((227 >> (((arr_6 [i_3] [i_2]) + 1964978903))))));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_20 [i_1 + 1] [i_2] [i_3] [i_2] [i_3] = (min(var_4, ((var_5 ? -401893960 : (arr_15 [i_1 + 1] [i_1 + 1])))));
                            var_21 -= ((((((arr_7 [i_1 + 1]) ? var_8 : (arr_11 [i_2])))) ? (arr_7 [i_1 + 1]) : -401893958));
                            var_22 = (min(var_22, (-1 >= var_6)));
                            var_23 |= ((-((var_9 % (((arr_4 [i_6]) ? (arr_7 [i_1 + 1]) : (arr_13 [i_1] [i_2] [i_2] [i_4] [i_2] [i_6])))))));
                            var_24 ^= arr_14 [i_1] [i_2] [i_1 + 1] [i_1] [i_1];
                        }
                    }
                }
            }
        }
        var_25 = ((((min((arr_11 [1]), (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1])))) ? 1063938753106976773 : (((-(arr_12 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]))))));
    }
    for (int i_7 = 2; i_7 < 15;i_7 += 1)
    {
        var_26 = ((arr_8 [23]) ? (arr_4 [i_7 - 2]) : ((+(((arr_4 [i_7]) ? (arr_5 [i_7 - 1] [i_7 - 1]) : (arr_14 [i_7 - 1] [i_7] [i_7] [i_7] [i_7]))))));
        arr_23 [i_7] = -6086;
    }
    #pragma endscop
}
