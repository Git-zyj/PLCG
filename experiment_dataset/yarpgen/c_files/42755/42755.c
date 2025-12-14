/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = var_10;
        arr_3 [i_0] = (((((var_12 * (((arr_0 [i_0] [i_0]) * (arr_0 [1] [1])))))) ? var_3 : (((arr_1 [i_0]) ? (((arr_0 [i_0] [i_0]) * (arr_0 [i_0] [i_0]))) : 30))));
        var_15 = (max(var_15, (((((((~var_4) & (-868027006 & var_2)))) ? (((!(arr_2 [i_0] [i_0])))) : var_10)))));
        var_16 = (min((27 - var_6), (max((((arr_0 [i_0] [i_0]) - var_4)), var_2))));
        arr_4 [3] [3] = (((var_9 != 1942327588) ? (((868026995 ? var_10 : (arr_1 [i_0])))) : (min(var_2, ((-(arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_22 [i_5] [i_1] [1] [5] [i_1] [i_1] = (((arr_6 [i_1]) % var_11));
                            arr_23 [i_1] [i_1] [i_3] [i_4] [i_1] [10] = ((var_4 ? (((((arr_17 [i_2] [i_1]) || var_13)))) : (~var_1)));
                            var_17 = (((arr_9 [3] [i_1]) ? (((var_11 ? (arr_20 [3] [i_1] [i_1] [i_1]) : (arr_21 [12] [i_2] [i_5] [18])))) : (((arr_5 [i_1]) ? var_8 : (arr_6 [i_1])))));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_18 *= (((arr_15 [i_4] [1] [i_4]) ? (arr_15 [i_3] [4] [i_3]) : (arr_12 [i_1] [18])));
                            var_19 = (min(var_19, var_2));
                            arr_26 [i_1] [i_2] [i_1] [0] [i_4] [i_6] = ((((((arr_10 [i_1]) ? (arr_21 [i_2] [i_2] [i_4] [i_1]) : var_13))) ? (arr_18 [i_1] [i_2]) : (((((arr_14 [1] [1] [i_3] [i_3]) + 2147483647)) >> (868026995 - 868026968)))));
                        }
                        arr_27 [1] [1] [i_1] [i_4] [i_4] = ((~(arr_8 [i_1])));
                        var_20 = 7304370136236610326;
                        var_21 = (~868026989);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_22 = (max(var_22, ((var_9 ? -var_9 : (6159 | 12542369707840264466)))));
                            var_23 = ((var_9 ? 868026974 : (arr_25 [i_1] [i_1] [1] [i_9 - 2] [i_9 - 1] [i_7] [i_7])));
                            var_24 = (arr_30 [19] [i_2] [i_7] [i_8] [i_9 - 2] [i_9]);
                        }
                    }
                }
            }
            arr_37 [i_1] [i_1] = (!var_4);
        }
        var_25 = (max(var_25, -868026995));
    }
    var_26 = var_3;
    #pragma endscop
}
