/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((+(min((arr_3 [i_0 + 2]), var_3))));
        arr_5 [i_0] = (((((((128 ? 65525 : (arr_1 [i_0])))) ? 128 : 134)) / ((((arr_0 [i_0 + 2]) && (var_11 || 2060))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_19 [i_1] [i_2] [i_3] [i_3] [i_5] = ((2589414068 ? (arr_14 [i_1 + 2]) : (arr_14 [i_1 - 2])));
                                arr_20 [i_3] = ((-((var_3 / (arr_13 [i_1] [i_1] [i_3] [i_4])))));
                                arr_21 [i_1] [i_1] [i_3] = (arr_12 [i_1 + 2] [i_1 - 2] [i_1 - 2]);
                            }
                        }
                    }
                    var_17 = arr_0 [i_3];
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        var_18 = (min(var_18, (((~((var_16 ? 0 : var_3)))))));
                        arr_29 [i_8] [i_6] [i_7] [i_6] [i_1] = ((-(arr_25 [i_1 - 2] [i_6] [i_7] [i_8])));
                        var_19 = (arr_9 [i_1] [i_1] [i_1]);
                    }
                }
            }
        }
        arr_30 [i_1] = (arr_23 [i_1 + 2]);
    }
    var_20 = ((!(((-(max(var_13, var_8)))))));
    var_21 = var_9;
    #pragma endscop
}
