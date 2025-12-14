/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min(((((var_15 >= var_10) || (~1)))), var_9);
    var_17 = var_4;
    var_18 = -var_10;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 13;i_3 += 1)
                {
                    {
                        var_19 *= (max((arr_8 [10] [i_1]), ((((min(var_10, var_10))) ^ 1))));
                        var_20 = ((-((var_5 ? (max(var_2, (arr_5 [i_1]))) : ((min(1, 1)))))));
                    }
                }
            }
        }

        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                arr_16 [i_4] [i_4] [i_4] = (arr_9 [i_0 - 1] [i_4] [i_5 + 3] [i_5 - 1]);
                arr_17 [i_4] [i_4 - 2] [i_4] = arr_12 [i_4] [i_4] [i_4];
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            arr_23 [i_4] [i_4 + 1] = -var_7;
                            var_21 = 255;
                            var_22 ^= (arr_2 [i_0 - 1] [i_7]);
                            arr_24 [9] [i_4] [i_5 + 2] [i_4] [i_0 - 1] = var_13;
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                var_23 = (max((((max((arr_11 [i_8] [i_4] [i_0]), 1)))), (arr_8 [i_4] [i_4])));
                var_24 &= ((((max(var_14, (min(var_5, (arr_12 [i_0] [i_4] [10])))))) ? var_14 : var_4));
                arr_27 [i_0] [i_0] [i_4] = (max((max(1740250629, (arr_14 [i_8] [i_0] [i_0]))), (arr_5 [i_4])));
                var_25 -= 0;
                var_26 = ((-((((arr_12 [i_4] [i_0 - 1] [i_4]) || (arr_8 [i_4] [i_4 - 2]))))));
            }
            var_27 = ((var_3 & (((max(1, 730723506))))));
            var_28 = var_1;
            var_29 = (min(var_29, ((max(var_7, (((13 >> (((arr_21 [i_0] [i_0] [i_0] [i_0] [2]) - 65))))))))));
            arr_28 [i_0] [i_4] [i_0 - 1] = (max((var_13 ^ var_15), (((-(((!(arr_3 [i_4])))))))));
        }
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            arr_32 [i_0] = ((+(max((arr_10 [0] [i_0] [i_9] [i_9]), (((arr_22 [0] [i_9]) ? var_9 : 18446744073709551596))))));
            var_30 = (max(var_30, var_15));
        }
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_35 [i_10] = ((((max((arr_34 [i_10] [i_10]), var_11))) & var_11));
        var_31 = (arr_34 [i_10] [i_10]);
        var_32 ^= ((((-5130 ? 1 : 1)) != (((arr_33 [8]) ? var_8 : (arr_33 [6])))));
    }
    var_33 -= var_10;
    #pragma endscop
}
