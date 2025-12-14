/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_18 = (min(var_18, ((min(((((var_0 != 111) < 131072))), (max(((var_0 ? var_14 : 131072)), var_2)))))));
        arr_2 [i_0 - 2] = ((-(((-(arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = (((((72 >> (8520097493584957715 - 8520097493584957692)))) ? var_11 : ((-((18899 ? 18899 : -32754))))));
    }
    for (int i_1 = 2; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_19 = (min(var_9, 46637));
        arr_7 [i_1] [i_1] = var_9;
        arr_8 [i_1] = arr_4 [i_1 + 1] [i_1];
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [i_2] |= ((~(~var_3)));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_20 = arr_10 [i_2];
                        arr_20 [i_2] [i_3] [i_4] [i_5] = ((~((var_11 ? 46635 : var_15))));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        arr_24 [i_6] = (((var_0 ? (arr_23 [i_6]) : (-9223372036854775807 - 1))));
        arr_25 [i_6] |= (((var_0 >= var_2) != 175));
        arr_26 [i_6] [i_6] = ((var_1 ? (((184 ? (arr_10 [i_6]) : var_0))) : -1));
    }
    var_21 = var_1;
    #pragma endscop
}
