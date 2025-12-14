/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 32317;
    var_11 = (min(var_11, ((min(56, var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_0] [i_0] [i_1] [i_0] = (min(199, (arr_3 [i_3])));
                                var_12 -= 69;
                                arr_13 [i_2] [i_1] [i_3] [0] [i_4] [i_4] [i_3] = (min((max((!var_7), var_2)), (((!((min(var_7, 191))))))));
                                var_13 = (max(50, 216));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (max((min(((min(55, var_1))), var_5)), 40));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] = var_0;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] [i_5] = var_0;
        var_14 = (min(((77 % ((min(127, (arr_7 [i_5] [i_5] [i_5] [i_5])))))), (((arr_9 [i_5] [i_5] [i_5] [i_5] [1]) * var_9))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                {
                    var_15 = ((arr_18 [i_6]) < (arr_18 [i_6]));
                    var_16 = (arr_21 [i_7 - 2] [i_7 - 2]);
                }
            }
        }
        var_17 -= var_4;
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (226 & 16)));
        var_19 = 0;
    }
    #pragma endscop
}
