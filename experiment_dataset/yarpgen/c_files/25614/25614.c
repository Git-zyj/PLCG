/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                arr_8 [i_0 + 2] [i_0] [i_2] [i_2] = var_15;
                var_17 = ((var_14 >= var_11) / var_15);
            }
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_18 = 1;
                        var_19 = ((max((72022409665839104 >= 1073741816), 1)));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_20 = (arr_4 [i_0] [i_5] [i_0]);
            var_21 ^= (((((((arr_15 [i_0 - 1] [i_0 - 1]) + 2147483647)) >> (((arr_15 [i_0 + 2] [i_0 - 1]) + 1260921213)))) != ((0 >> (-5841590639520536315 + 5841590639520536319)))));

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                arr_20 [i_0 - 1] [i_0] [i_6] [i_0 + 2] = var_5;
                var_22 ^= var_7;
                arr_21 [i_0] [i_0] [i_0 + 1] [i_0 + 1] = var_0;
            }
        }
        var_23 = ((1 | (arr_9 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_24 = -1;
        var_25 ^= arr_22 [i_7];
        var_26 += (var_5 & var_4);
    }
    for (int i_8 = 3; i_8 < 13;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_33 [i_8] [i_8] [i_10] = (1073741813 / (((((arr_31 [i_10] [i_9] [i_8]) + 9223372036854775807)) << ((((((-(arr_28 [i_8 + 2]))) + 5789080138852818512)) - 46)))));
                    arr_34 [i_8] [i_9] [i_10] = var_1;
                    var_27 = (max((arr_28 [i_10]), (~1073741823)));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            {
                                arr_40 [i_8] [i_9] [i_10] [i_9] [i_12] [i_8 + 1] = -238629847;
                                arr_41 [i_12] [i_8] [i_8] [i_8] = arr_22 [i_8];
                                var_28 = (max(var_28, var_0));
                                arr_42 [i_8] [i_9] [i_9] [i_11] [i_12] = ((((max(var_4, (max(1, 1073741795))))) / (arr_29 [i_8] [i_8 - 2] [i_8 + 1])));
                            }
                        }
                    }
                    arr_43 [i_8] [i_8] [i_8] = var_5;
                }
            }
        }
        arr_44 [i_8] [i_8] = ((((arr_39 [i_8] [i_8] [i_8 + 2]) + 2147483647)) << ((((((~(arr_35 [i_8] [i_8] [i_8] [i_8]))) + 1788677805)) - 18)));
        var_29 = (min(var_29, ((1 ? 1 : -9223372036854775786))));
    }
    var_30 = var_12;
    #pragma endscop
}
