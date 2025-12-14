/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (arr_0 [i_0]);
        arr_2 [i_0] = ((((!(arr_0 [i_0]))) ? (arr_1 [i_0] [i_0]) : var_3));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = 50;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_4] = (arr_8 [i_0] [i_1] [i_2] [i_3 - 1]);
                                arr_14 [i_0] [i_2] [i_1] [i_0] = (((212 ? 63 : 1)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_2] [10] [i_0] = (arr_4 [i_1] [i_5] [i_1]);
                                arr_20 [i_0] = var_9;
                            }
                        }
                    }
                }
            }
        }
        var_19 = (max(var_19, (arr_0 [i_0])));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            {
                var_20 = (max(var_20, var_7));
                var_21 = ((!(arr_11 [i_7] [i_8] [i_8] [i_8] [i_7])));
            }
        }
    }
    #pragma endscop
}
