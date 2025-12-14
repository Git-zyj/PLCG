/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (max(var_8, var_9));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_12 = (min(var_12, (arr_0 [i_0] [i_0])));
        var_13 = (arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_6 [i_2] = -3720665696;

            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    arr_13 [i_2] = -1914324556;
                    arr_14 [i_3] [i_2] [12] = ((5 ? 2076156341 : 1));
                }
                var_14 = (arr_8 [i_3 + 1] [i_3 + 1] [i_3 + 1]);
                var_15 = ((-((111 ? -2017157651 : (arr_0 [i_1] [5])))));
            }
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        var_16 = ((~(arr_10 [i_5 - 1] [i_5 - 2] [i_5] [i_5 + 2] [i_5 - 2])));
                        arr_21 [10] [10] [i_2] [i_2] [i_5] [i_2] = ((~(arr_20 [i_6] [i_5 - 3] [i_5 - 3] [i_6])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    {
                        arr_29 [i_8] [i_2] [i_1] = (arr_2 [i_2]);
                        var_17 = ((~(arr_11 [i_1] [i_8 - 2] [i_2] [3])));
                    }
                }
            }
        }
        arr_30 [i_1] [i_1] = ((var_9 || (arr_28 [i_1] [19] [i_1] [i_1] [i_1])));
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
    {
        var_18 = ((((((arr_22 [i_9] [i_9]) ? (arr_22 [i_9] [i_9]) : (arr_19 [i_9] [16])))) ? (arr_4 [i_9] [i_9] [i_9]) : ((var_4 ? 127 : (arr_32 [0] [i_9])))));
        arr_34 [i_9] = ((+(((arr_9 [i_9] [i_9]) ? 5553412137276853170 : (arr_9 [18] [i_9])))));
    }
    #pragma endscop
}
