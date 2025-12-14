/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_14 += (arr_3 [14] [12]);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_15 = ((-((max((min(var_12, 125)), 127)))));
                            var_16 = (((((((arr_1 [i_1 - 1] [i_1 + 2]) + -799909121328119907)) + 9223372036854775807)) >> ((((-((var_0 ? var_12 : var_9)))) + 111))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_17 = 9223372036854775807;
                                var_18 = (((((arr_4 [i_1]) + 2147483647)) >> ((((max((arr_7 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1 - 1]), (arr_7 [i_1 + 1] [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1])))) + 128))));
                            }
                        }
                    }
                }
                arr_15 [14] [i_1] [i_0] = 7437053561653011064;
            }
        }
    }
    var_19 = (min(var_0, var_8));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 22;i_8 += 1)
        {
            {
                var_20 = ((var_8 >> (-5344925078620336637 + 5344925078620336690)));
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_21 = min((((~(var_11 != var_10)))), (((-111 && var_4) ? (min(-799909121328119907, -124)) : (arr_26 [i_11] [i_8] [i_11 - 2] [i_9 - 1] [15] [i_11]))));
                                var_22 = (min(-var_12, (arr_20 [i_8 - 1] [i_9])));
                                var_23 = (((!var_8) || -111));
                                var_24 = ((!((((arr_18 [i_8 + 2] [i_11 - 1]) ? (((!(arr_18 [i_7] [i_7])))) : (((var_12 || (arr_22 [i_7] [i_8] [i_9])))))))));
                                var_25 = var_5;
                            }
                        }
                    }
                }
                arr_28 [i_7] = ((((min((arr_16 [14]), 0)) + 9223372036854775807)) >> (((var_5 ^ var_6) + 1398729317443154227)));
                var_26 = (max((((!(arr_18 [i_8 + 1] [i_8 + 1])))), ((-25 | (arr_18 [i_8 - 1] [i_8 - 1])))));
            }
        }
    }
    #pragma endscop
}
