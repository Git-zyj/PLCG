/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = (((arr_2 [i_0] [i_0]) ? -3078515844912912162 : (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = var_9;
                    var_20 = (((arr_9 [i_1]) ? (arr_9 [i_1]) : var_5));
                    var_21 += (arr_4 [i_1]);
                }
            }
        }
        arr_10 [i_0] = ((!(arr_8 [i_0] [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            var_22 = ((!(((max(-3078515844912912143, (arr_11 [0])))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        arr_24 [i_3] [i_3] [i_6] [i_3] = (4 ? (arr_14 [i_3]) : (((arr_20 [i_3] [i_4] [i_4 + 1]) ? (arr_14 [i_4]) : (arr_21 [i_3] [i_4] [i_5]))));
                        var_23 ^= -var_15;
                    }
                }
            }
            arr_25 [i_3] = (((((var_13 ? (arr_14 [i_4 - 1]) : (arr_14 [i_4 + 1])))) ? (((arr_14 [i_4 + 1]) / (arr_14 [i_4 + 3]))) : ((-(arr_14 [i_4 + 3])))));
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 22;i_7 += 1)
        {
            var_24 = (min(var_24, (arr_26 [i_3] [i_7] [i_7 + 1])));

            for (int i_8 = 2; i_8 < 23;i_8 += 1)
            {
                var_25 = ((((var_14 ? 673588330 : (arr_18 [20] [i_7] [5]))) - (arr_28 [i_7 + 1] [i_8 + 2])));
                var_26 = var_3;
                arr_31 [i_3] [i_7] [i_8] = ((arr_16 [i_7 + 2] [i_7 + 3] [i_7 - 3]) ? ((181 ? (arr_28 [i_3] [i_3]) : -3078515844912912143)) : (arr_11 [i_7 + 2]));
                arr_32 [i_3] [1] [i_8] [9] = (arr_23 [0] [20] [i_8] [i_8 - 1] [i_8 - 1]);
                var_27 = (arr_22 [i_7 + 2] [i_7 + 2] [i_7 - 3] [i_8 + 2] [i_3] [i_8]);
            }
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                arr_37 [i_7 - 2] [10] [i_9] [i_9] = ((!(arr_17 [i_3])));
                var_28 = ((arr_15 [i_3] [i_9] [i_9]) ? (arr_15 [i_3] [i_3] [i_9]) : (arr_15 [i_3] [i_7] [12]));
                var_29 = (arr_33 [i_3] [i_7 - 3]);
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            var_30 = var_8;
            arr_41 [i_10] [i_10] = (var_14 == 181);
            var_31 = (min(var_31, (+-0)));
            arr_42 [i_10] [i_10] [i_10] = (((arr_35 [i_3] [i_3] [i_3]) ? (arr_35 [i_10] [i_10] [i_10]) : (arr_35 [i_10] [0] [19])));
        }
        var_32 = (arr_29 [i_3] [i_3] [12] [i_3]);
    }
    #pragma endscop
}
