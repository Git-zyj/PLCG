/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((23 * ((max(-23, var_7))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = (~-7407520681538530300);
        arr_3 [i_0] [12] |= ((-(arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_1] = var_2;
            arr_7 [i_1] [i_1] [i_1] = ((-(arr_5 [i_0] [i_1] [i_1])));
            var_19 ^= ((var_11 ? 133 : 23));
        }
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_20 = (min(var_20, ((((1 + var_13) - (arr_4 [i_0] [i_2] [i_2 + 3]))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_19 [1] [i_3] [1] = (((((arr_5 [i_2] [i_0] [i_2]) ? var_16 : (arr_8 [1] [i_3] [1])))) ? var_5 : (arr_15 [i_2 - 1] [i_2] [i_5] [i_5] [i_5] [i_2]));
                            var_21 = (((var_12 ? var_16 : var_7)) + var_14);
                        }
                    }
                }
            }
            var_22 = (max(var_22, (var_8 & 1)));
            arr_20 [i_2 + 1] [i_0] = ((-7407520681538530320 ? 7407520681538530307 : -7407520681538530307));
        }
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            var_23 = var_0;

            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                var_24 ^= 1;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] &= (((arr_16 [i_6 - 1] [i_6 - 1]) >= (arr_17 [i_0] [i_8] [i_7] [i_0] [i_9])));
                            arr_31 [i_6] [i_0] [i_7] [i_6] [i_6] [i_0] = -var_7;
                            var_25 = ((~(arr_22 [i_6] [i_8])));
                            arr_32 [i_0] [i_6 + 1] [i_7] = (((arr_2 [i_6 + 1]) ? 7407520681538530319 : var_9));
                        }
                    }
                }
            }
            var_26 = (arr_4 [i_0] [i_6] [i_6]);
            var_27 = (arr_10 [i_6 - 1] [i_6 + 1]);
        }
        arr_33 [i_0] [i_0] = ((-(~var_7)));
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 8;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 10;i_12 += 1)
            {
                {
                    var_28 ^= 1;
                    var_29 = arr_40 [i_10 - 2] [i_11] [i_12] [i_10 - 2];
                }
            }
        }
        var_30 += var_5;
    }
    var_31 = var_1;
    var_32 = (max(var_32, ((max(((((!-23) ? ((1 ? var_0 : var_16)) : var_3))), var_9)))));
    #pragma endscop
}
