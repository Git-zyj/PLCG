/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = ((((((168 | 0) ^ -1583431450917625046))) ? (((var_4 + 2147483647) >> (((arr_2 [i_0]) ? var_1 : var_12)))) : (max(((0 ? 1 : (arr_6 [9]))), (arr_9 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1] [4])))));
                                arr_14 [i_1] [1] = (26011 || 110226046);
                                var_16 = var_7;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_17 = (max(var_17, (((((-311114354 ? (~35184372088831) : -2147483647)) >> ((((-((1 ? var_8 : -26011)))) - 10910628681968783031)))))));
                            var_18 |= (arr_17 [13] [13] [13] [13]);
                            arr_19 [i_0] [5] [i_5] [5] = min(((((~73) + (min(0, 541311891))))), (max((max(-8725107009392588859, var_8)), (arr_5 [i_0] [i_1] [i_6]))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 13;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 3; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_19 = -92;
                                var_20 = (min(var_20, ((((arr_32 [i_9] [i_11] [i_11] [12] [4] [8]) == var_0)))));
                                var_21 *= ((-(arr_28 [i_11] [i_11])));
                                var_22 = (min(1, (arr_20 [i_8] [i_8])));
                                var_23 = 29735;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_24 = (min(((((arr_36 [i_7] [1] [i_12]) ? (arr_36 [i_13] [i_12] [i_8]) : 12))), (((var_13 ^ (arr_35 [i_7] [2] [i_7] [i_7]))))));
                            var_25 = (((((((-52 ? 0 : (arr_25 [12])))) ? (((arr_38 [0] [0] [0] [0]) ? var_5 : 18900)) : (arr_25 [6]))) + (arr_9 [4] [8] [i_7] [1] [i_7])));
                        }
                    }
                }
            }
        }
    }
    var_26 = (max(var_26, var_13));
    #pragma endscop
}
