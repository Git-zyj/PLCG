/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 |= 127;

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] = (~0);
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_12 |= (((arr_4 [i_2 + 2] [i_2 - 1] [i_2 - 1]) < (arr_4 [i_2 + 2] [12] [12])));
                            var_13 = ((0 ? (arr_10 [i_1 - 1] [i_4 - 1]) : (arr_8 [i_1 + 1] [i_2 + 1])));
                        }
                    }
                }
            }
            var_14 = (arr_8 [13] [i_1 + 1]);
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                var_15 = ((18446744073709551615 ? -110 : (arr_13 [i_5])));
                var_16 = (((arr_18 [i_6]) ? (arr_18 [i_0]) : 3));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_17 = 16383;
                            arr_26 [i_0] [i_0] [i_6] [i_0] [i_0] |= (arr_22 [i_8 + 2] [i_7 - 1] [i_5]);
                            var_18 = (!8984);
                            var_19 = ((!(arr_14 [i_6])));
                        }
                    }
                }
            }
            var_20 = (((arr_3 [i_5]) - 8966));
            arr_27 [15] = 109;
        }
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            var_21 = ((18446744073709551615 ? 63 : (arr_10 [i_0] [i_9 - 1])));
            var_22 = (((arr_22 [i_9 - 1] [i_9] [i_9 - 1]) == (arr_22 [i_0] [i_0] [i_9 - 1])));
        }
        for (int i_10 = 2; i_10 < 22;i_10 += 1)
        {
            var_23 = (((~var_0) / (arr_22 [2] [i_10 - 2] [i_10 - 2])));
            arr_33 [i_0] [i_0] [i_10 - 1] = (arr_5 [i_0] [i_10 - 1]);
            arr_34 [i_10 - 1] [i_0] [i_0] = -0;
        }
        arr_35 [i_0] = (((arr_25 [i_0] [i_0] [i_0] [22]) ? ((118 ? 0 : var_3)) : (arr_28 [2] [i_0] [i_0])));
    }
    var_24 = ((var_7 >= (((var_10 <= var_6) * var_3))));
    #pragma endscop
}
