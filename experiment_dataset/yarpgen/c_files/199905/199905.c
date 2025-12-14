/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (((((arr_0 [i_0] [i_0]) & 7878923720633107363)) ^ (arr_1 [i_0 + 1])));
        arr_5 [i_0] = ((var_9 >= (arr_3 [i_0 - 1])));
        var_18 = (max(var_18, 7878923720633107362));
        var_19 = ((-25494 ? -7878923720633107368 : 7878923720633107372));
        var_20 = (max(var_20, (~var_11)));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            var_21 += ((var_6 ? (arr_12 [i_5 + 1] [i_4 + 1] [i_2 - 3] [i_1 + 1]) : var_2));
                            arr_19 [i_1] [i_1] [i_2] [i_2] [i_2] = (arr_8 [i_3] [i_2]);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_24 [i_1] [16] [15] [i_1] [i_2] = ((-(arr_17 [i_1] [i_2] [i_1 + 1] [i_1] [i_1 - 2])));
                            arr_25 [i_2] [i_2] [i_4] = arr_21 [i_1] [2] [i_2] [12] [i_3] [i_4] [i_6];
                            var_22 = (((((arr_14 [i_2] [i_2] [1] [5]) ? var_2 : var_16)) < (((((arr_6 [i_1 - 1]) < (arr_20 [18] [i_2] [i_2] [i_2] [i_2] [i_2 + 1])))))));
                            arr_26 [i_1] [i_2] [i_3] [i_4] [i_2] [i_4] = (7878923720633107341 || 46189);
                        }
                        arr_27 [i_2] [i_3] [i_4] = (-9223372036854775807 - 1);
                        var_23 ^= ((((max((var_15 - -1086061761), (arr_22 [18])))) ? (((var_6 ? var_16 : (min(var_14, 7878923720633107368))))) : (arr_7 [8] [i_1 - 2])));
                    }
                }
            }
        }
        var_24 = (((arr_9 [i_1 - 1] [i_1]) % (max((7878923720633107367 / -7878923720633107363), var_1))));
        arr_28 [i_1] [5] = (((arr_0 [i_1] [i_1]) ? (((((max((arr_10 [i_1] [i_1] [i_1]), 43001))) ? (arr_21 [i_1 - 3] [i_1 - 3] [20] [i_1] [i_1 - 3] [i_1] [22]) : var_1))) : ((~(arr_17 [i_1 - 2] [14] [i_1 - 3] [i_1 - 3] [i_1 - 1])))));
        arr_29 [i_1] [i_1] = var_9;
    }
    var_25 = var_3;
    #pragma endscop
}
