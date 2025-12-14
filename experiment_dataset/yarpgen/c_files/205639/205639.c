/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 = (((((var_1 || (arr_1 [i_0]))) ? (arr_8 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0] [i_0]))) != var_5);
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = (1 ^ 1);
                            }
                        }
                    }
                }
                var_14 *= var_4;
            }
        }
    }

    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_15 += (((((var_10 ? var_7 : (arr_18 [i_5] [i_5] [i_5 - 1]))))) || -1);
                    arr_22 [i_5] [i_5] = (((((var_5 ? (max(var_3, (arr_15 [14]))) : var_10))) ? (max(9068515394743904674, -1)) : ((((((arr_21 [i_5 + 2]) + 2147483647)) << (((arr_19 [i_5 + 2] [i_6] [i_7]) - 61137)))))));
                    arr_23 [i_6] |= var_4;
                    var_16 += (min(var_0, (1 > var_6)));
                }
            }
        }
        var_17 += (arr_17 [14]);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 14;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_18 = var_3;
                                var_19 = ((min(-2, 65535)));
                                var_20 = min(var_4, (arr_24 [i_9] [i_10] [i_10]));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 15;i_13 += 1)
                        {
                            {
                                arr_38 [i_13 - 2] = ((min(((min(65535, 509166294))), var_9)));
                                var_21 += (-24 % -10);
                            }
                        }
                    }
                    var_22 = var_8;
                }
            }
        }
        var_23 = (max(var_23, ((((arr_26 [i_5 + 2] [i_5 + 3] [i_5 + 2] [i_5 + 1]) ? ((((min((arr_17 [i_5]), var_5))) ? ((max(0, 0))) : ((min(var_12, (arr_30 [i_5] [i_5] [i_5] [i_5] [i_5])))))) : (arr_15 [2]))))));
    }
    #pragma endscop
}
