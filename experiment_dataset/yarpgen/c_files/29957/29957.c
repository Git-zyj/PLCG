/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (min((arr_0 [i_0]), (arr_2 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = ((27233 ? 31 : ((~(arr_2 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = (~-3514852303206417624);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_18 = (arr_2 [i_2] [i_1]);
            var_19 = (((arr_8 [i_2] [i_1] [i_1]) > (arr_8 [i_2] [i_1] [i_1])));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    {
                        var_20 = ((-((~(arr_13 [i_3])))));
                        var_21 = (max(var_21, var_11));
                        var_22 += (((((arr_14 [i_1] [i_4]) - var_11)) <= 255));
                    }
                }
            }

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_23 = arr_0 [i_5];
                arr_19 [i_5] [i_2] [i_2] [i_1] = 46500;
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_24 = -19062;
                            arr_24 [i_5] [i_1] [i_5] [i_7] = (!-4126389696);
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                var_25 = ((((((arr_22 [i_1] [i_1] [i_2] [i_2] [i_8]) | (arr_20 [i_1] [i_2] [i_2])))) ? (var_9 <= 1) : (arr_13 [i_8])));
                arr_27 [i_1] [i_8] [i_1] [i_1] = ((arr_18 [i_1] [i_2] [i_8]) * ((((arr_11 [i_1] [i_2] [i_1]) <= (arr_9 [i_2])))));
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                var_26 = ((!((-30047 < (arr_21 [i_2])))));
                var_27 = (((arr_17 [i_1]) / var_13));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_35 [i_1] [i_11] [i_9] [i_10] [i_11] = ((-26473 ? 1 : 1));
                            var_28 = (max(var_28, ((((((var_1 ? var_14 : (arr_34 [i_11])))) ? ((1 ? (arr_1 [i_2]) : 26836)) : ((46500 % (arr_9 [i_10]))))))));
                        }
                    }
                }
                var_29 = (arr_7 [i_9]);
            }

            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                var_30 = (arr_5 [i_12]);
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_31 = ((((arr_32 [i_1] [i_2] [i_12] [i_1] [i_2] [i_13]) > var_10)));
                            var_32 = ((arr_40 [i_2] [i_12] [i_14]) ^ var_1);
                        }
                    }
                }
            }
        }
        var_33 = (((((((min(var_4, (arr_34 [i_1]))) == (arr_0 [i_1]))))) - (arr_5 [i_1])));
    }
    var_34 = (((!-var_11) ? -3597539331946061077 : var_2));
    #pragma endscop
}
