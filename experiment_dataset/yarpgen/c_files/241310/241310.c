/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = (((((58691 ? (arr_3 [i_2 - 1] [i_2]) : (arr_3 [i_2 - 1] [i_2 - 1])))) ? ((max((arr_3 [i_2 + 1] [0]), (arr_3 [i_2 + 1] [11])))) : (arr_3 [i_2 + 1] [i_2 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 = ((max((arr_2 [i_0] [i_3]), (arr_2 [i_0] [i_1]))));
                                var_19 = -99;
                                var_20 = var_0;
                                var_21 = (arr_3 [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
        var_22 = 6844;

        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_23 = 127;
                        var_24 = ((max((!-79), 0)));
                    }
                }
            }
            var_25 = -99;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
        {
            var_26 = 1;

            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                var_27 = 0;
                var_28 = (((arr_18 [i_0] [i_8]) ? (arr_18 [i_0] [i_0]) : 1));
            }
        }
    }
    var_29 = var_7;
    #pragma endscop
}
