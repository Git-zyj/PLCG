/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((-94 - (((arr_3 [i_1 - 2] [i_1 - 3]) << (((-105 < (arr_5 [i_0] [i_1 - 3]))))))));
                    arr_9 [i_2] [0] [1] = (((((max((arr_6 [i_1 + 3] [i_2] [i_2] [6]), 66)))) > (min((arr_0 [i_0]), var_16))));
                }
            }
        }
    }
    var_19 = (((-67 + var_0) ? (max(7007634694614724625, var_5)) : (((~((var_5 ? 0 : -67)))))));
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 6;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            {
                                arr_22 [i_7 + 1] [i_6] [i_3] [i_4] [i_3] = 88;
                                var_20 = ((-(arr_5 [i_3 + 2] [i_5])));
                                arr_23 [i_3] = -93;
                                arr_24 [1] [i_3] [i_5] [i_3] [i_7 + 1] = (((((max(var_7, var_18)) / (112 && var_3))) > (((var_9 ? ((var_3 ? 0 : -100)) : -530559707)))));
                                arr_25 [i_3] [i_3] [i_5] [i_6] [i_6] [i_7] [i_3] = (((((min(((-62 ? 530559682 : 530559716)), -530559707)) + 2147483647)) << (215 - 215)));
                            }
                        }
                    }
                }
                arr_26 [i_3] = var_13;
                var_21 = (max(var_21, ((((((0 * (arr_10 [i_3 + 1])))) ? -74 : ((var_18 ? (arr_16 [i_3] [i_3 + 3] [1] [i_4]) : var_17)))))));
            }
        }
    }
    #pragma endscop
}
