/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 ^= -var_1;
    var_12 = var_6;

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            arr_8 [i_0] [i_1] |= -29378;

            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                arr_11 [i_1] [i_1] [i_2 - 3] [i_2 - 3] = (((arr_3 [1]) ? (((!(arr_7 [i_1 - 2] [i_2 - 3] [i_2 + 3])))) : (1868836687 > 4060547368171318993)));

                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    arr_14 [i_1] [i_1] [i_1] [i_1] [1] [i_0] = 4092;
                    var_13 = (arr_1 [i_2] [1]);
                    arr_15 [i_0] [i_0] = ((-((-(arr_3 [i_0])))));
                }
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_14 = var_9;
                    var_15 -= ((-(~1)));
                    var_16 = ((((var_9 ? var_8 : (arr_16 [i_0 + 1] [i_0 + 1]))) >= ((((var_4 >= (!var_2)))))));
                    var_17 = (!var_7);
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    arr_23 [i_5] [i_5] = -var_9;
                    arr_24 [i_0] [i_1] [1] [1] = ((arr_19 [3] [i_2 - 3] [3] [2]) == (arr_13 [i_5] [i_5] [i_5] [i_5] [i_5 - 1] [i_5]));
                }
                arr_25 [i_0] [i_0] [i_0] = var_9;
            }
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 9;i_7 += 1)
                {
                    {
                        var_18 = var_9;
                        var_19 = (arr_5 [i_7] [i_1] [i_0]);
                    }
                }
            }
            arr_31 [i_1] = ((!(arr_6 [i_1 - 2] [i_0 + 4])));
            var_20 = ((!(((((arr_30 [i_0]) & var_8)) == (arr_6 [i_1] [4])))));
        }
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            var_21 = var_9;
            var_22 = var_6;
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_23 += var_9;
            arr_36 [i_0] [i_0] [i_0] = var_6;
        }
        arr_37 [i_0] = ((~(var_7 >= var_1)));
    }
    for (int i_10 = 1; i_10 < 8;i_10 += 1) /* same iter space */
    {
        arr_40 [7] [7] = var_1;
        var_24 = (min(var_24, var_6));
    }
    #pragma endscop
}
