/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (!2048);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = ((-(arr_6 [i_1] [i_1 + 1] [i_1])));
                                arr_13 [i_0] [i_0] [i_1] = (arr_6 [i_1] [i_1 + 1] [i_1 + 3]);
                            }
                        }
                    }
                    var_19 = (arr_12 [i_2] [i_2] [i_1] [i_1 + 3] [i_0] [16] [i_0]);
                    arr_14 [i_1] [i_1] [i_1] [i_1] = (((((arr_5 [i_0]) == var_7))) >= var_9);
                    var_20 = (max(var_20, (arr_5 [i_2])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_21 = (min((max(var_3, ((var_4 ? (arr_15 [i_5] [i_6]) : 210)))), (max((arr_15 [i_6] [i_5]), 0))));
                arr_22 [i_5] [i_5] = (min((1 ^ var_0), 39));

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_25 [i_5] [i_6] [i_7] = 45;
                    var_22 = (max(1, 68));
                    var_23 = (max(var_23, (((var_0 == (max(((var_16 ? 210 : var_0)), ((min(45, -56))))))))));
                }
                var_24 = 26405;
                var_25 = var_2;
            }
        }
    }
    var_26 *= var_9;
    #pragma endscop
}
