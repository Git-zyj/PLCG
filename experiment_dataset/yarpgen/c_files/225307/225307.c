/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_13 = ((max(((min(1401442422, -5625768112236527706)), var_6))));
                            var_14 = (~var_7);
                            arr_10 [i_1] [i_1] [i_1] [i_0] = var_5;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_15 = ((var_12 == (!5625768112236527722)));
                            var_16 = (min(1, (min(13130172017932606266, 1))));
                            arr_16 [i_0] [i_1] [i_4] [i_5] = ((-((var_0 ? 7795449325655670632 : var_9))));
                            var_17 = ((((((arr_14 [i_1] [i_4 + 1] [i_0] [i_1] [i_1]) ? 1401442437 : 0))) ? ((17946678767494193886 ? 10288879980897331409 : 2221275768)) : (((var_11 ? var_8 : var_0)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_18 = (max(((((arr_24 [i_10 - 2] [i_8] [i_6 + 1] [i_6] [i_6 - 1] [i_6]) ? (arr_24 [i_10 + 3] [i_8] [i_6 + 2] [i_6] [i_6 - 1] [i_6 - 1]) : (arr_24 [i_10 + 3] [i_6 + 2] [i_6 + 2] [i_6] [14] [i_6 + 2])))), ((((var_9 ? var_11 : (arr_23 [i_6] [18] [13] [i_6]))) % 27933))));
                                var_19 = max(((max(-27934, (max(var_9, 27933))))), 4586634752399613161);
                                arr_30 [i_10] [i_7] [i_6] [i_9] [i_10] [i_9] = (max((min((arr_21 [i_6]), var_4)), (((var_3 == var_1) || 31968))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 4; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            {
                                arr_36 [i_12] [13] [i_6] [i_12] = ((-((min(-27934, 1)))));
                                var_20 -= -2007504349;
                                var_21 = ((!((min(var_8, var_12)))));
                                var_22 = ((((((arr_34 [i_6] [i_6] [i_6] [i_6] [22]) ? 1 : (1022846442 & var_11)))) & var_0));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        for (int i_14 = 4; i_14 < 24;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 25;i_17 += 1)
                        {
                            {
                                var_23 = ((1813 ? 1 : -2007504356));
                                arr_48 [i_17] [i_17] [i_14 - 3] [i_14 - 3] [i_15] [i_14 - 3] [i_13] = (min((min((arr_47 [i_14 - 3] [i_14] [i_14] [i_14 - 1] [i_15]), (arr_42 [i_14 - 3] [i_14] [4]))), (arr_47 [i_14 - 2] [i_14 - 2] [i_14] [i_14 + 1] [i_14])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 23;i_18 += 1)
                    {
                        for (int i_19 = 4; i_19 < 23;i_19 += 1)
                        {
                            {
                                arr_54 [1] [i_15] [i_19 - 3] = (min((max(1, 511)), var_4));
                                arr_55 [i_19] [i_18] [i_13] = (max(var_3, var_8));
                                var_24 = ((-(min((arr_44 [i_18 - 1] [i_18 - 1] [i_18] [i_18]), var_10))));
                                var_25 = ((~(~1)));
                                var_26 = (max((((((1 >> (17561675831982972973 - 17561675831982972965)))) ^ (max((arr_38 [12] [i_19]), var_2)))), 10));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
