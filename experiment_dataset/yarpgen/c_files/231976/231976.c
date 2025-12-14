/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (arr_0 [i_0]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] = (((arr_2 [i_1 - 3]) && (arr_6 [i_1] [i_1] [i_1])));
                    arr_8 [i_0] [i_1] [i_0] [i_0] = -7839029172032841703;
                }
                var_16 += ((-1457425665 || (arr_3 [i_0] [i_1 - 1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 9;i_4 += 1)
        {
            {
                var_17 = (min(var_17, (((!(12420 > var_14))))));
                arr_14 [i_3] = arr_4 [i_4 + 2] [i_4 - 3];
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_24 [i_7] [i_6 - 1] [i_5] [i_4] [i_3] = (((arr_22 [i_3] [i_3] [i_3] [i_3] [i_3]) || ((max(((max((arr_11 [i_3] [i_6 - 1]), 25472))), (arr_0 [i_3]))))));
                                arr_25 [i_4] = ((!(var_2 > 1)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 22;i_10 += 1)
            {
                {
                    var_18 = (max((~1640649965), (((arr_30 [i_10 + 1]) ? (arr_30 [i_10 - 1]) : (arr_30 [i_10 + 1])))));
                    var_19 = ((((var_7 ? var_9 : var_11))));
                    arr_36 [i_8] [i_10] [i_10] [i_10 - 1] = (min(((var_2 + (arr_32 [i_10 + 1] [i_10 - 1] [i_10 - 1]))), var_9));
                    var_20 = (max(var_20, ((min((((((arr_26 [i_8]) ? (arr_35 [i_8] [i_9]) : var_12)))), (((arr_33 [i_10 + 1] [i_9] [20] [i_10 - 1]) ? 1 : var_3)))))));
                }
            }
        }
    }
    var_21 = (max(var_4, ((min(var_11, -3889835185355829682)))));
    #pragma endscop
}
