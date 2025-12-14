/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0 + 2] [i_0 + 2] = var_6;
            var_11 *= (~var_1);
        }
        var_12 |= 2942754840233545251;
        var_13 -= (arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    {
                        arr_16 [i_2] = (i_2 % 2 == 0) ? ((((((758501939233292192 << (((arr_13 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_3]) + 6613583793727817755))))) ? 151 : ((var_8 << (2592614438 - 2592614433)))))) : ((((((758501939233292192 << (((((arr_13 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_3]) + 6613583793727817755)) + 352624630167091841))))) ? 151 : ((var_8 << (2592614438 - 2592614433))))));
                        var_14 = (1480868235743293967 / var_2);
                    }
                }
            }
        }
        var_15 = var_10;
        arr_17 [i_2] = (arr_7 [i_2 + 1] [i_2]);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 10;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_16 = (((arr_27 [i_8] [i_8] [i_8] [i_8] [i_8]) == 7772184628931002558));
                                var_17 = (((var_9 ? var_6 : (arr_22 [i_2] [i_2]))));
                                arr_28 [i_2] [i_2] [i_7] [i_2] [i_9] = var_10;
                            }
                        }
                    }
                    var_18 = var_8;
                }
            }
        }
    }
    var_19 = ((((max(var_4, (min(5944, var_6))))) * var_1));
    #pragma endscop
}
