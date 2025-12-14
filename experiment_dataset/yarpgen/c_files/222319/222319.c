/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_10 = (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_0] [i_1] [i_0] [i_0] = ((3031918148 ? 2071297514526485815 : 951309746));
                            arr_12 [i_1] |= (var_8 >> 0);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_21 [14] [i_1] [i_1] [i_1] [i_4 + 2] [i_5] &= var_9;
                            var_11 ^= (((951309746 << 7) >= (arr_14 [i_4 + 1] [i_4 + 2] [i_1 + 1] [i_0 + 1])));
                        }
                    }
                }
            }
        }
    }
    var_12 |= var_2;
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            {

                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    arr_32 [i_6 - 2] [i_6] [i_6] [i_6 - 2] = var_9;
                    var_13 |= (+((951309743 ? (arr_8 [i_6] [i_8]) : (((((arr_17 [i_6] [i_7] [16] [i_6] [i_6] [i_8]) && var_0)))))));
                    arr_33 [i_6] [i_7] [i_6] = (((((arr_17 [i_6] [i_7] [i_7] [i_8] [i_8] [i_8]) && (arr_8 [i_6] [i_6 - 2])))) != 16);
                    arr_34 [i_6] [i_7] [i_6] [i_8] = (max((arr_26 [i_6]), (arr_20 [i_6 + 1])));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    var_14 = (min(var_9, (max(var_9, (arr_24 [i_6])))));
                    var_15 = 65528;
                }

                for (int i_10 = 2; i_10 < 8;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 4; i_12 < 7;i_12 += 1)
                        {
                            {
                                var_16 = (((((-(min(var_0, var_6))))) ? (((max(var_0, var_1)) >> (((arr_0 [i_6 - 2]) - 29658)))) : (arr_19 [i_6] [i_7] [i_7] [i_11] [i_12])));
                                var_17 |= var_0;
                                arr_47 [i_6] [i_7] [i_11] [i_12] = ((((~(arr_6 [i_6] [i_10 + 2] [16] [i_6]))) != (((arr_46 [i_6] [3] [i_7] [i_7] [6] [i_11] [i_12]) - (((var_5 << (var_3 - 1806171090))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 7;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            {
                                arr_54 [i_10] [i_10] |= ((((((max((arr_52 [i_6] [i_7] [i_10] [i_13 + 1] [i_14] [i_6 + 1] [i_10 - 1]), (arr_13 [i_6] [i_7] [i_7] [i_10])))) ? -var_3 : -4761397040071018606)) << (65528 - 65520)));
                                var_18 = ((min(951309743, (var_7 ^ 642764643))));
                                var_19 *= var_2;
                            }
                        }
                    }
                    var_20 = 16;
                    var_21 = (arr_3 [11]);
                    var_22 = ((642764643 ? (((~(arr_45 [i_6 + 1])))) : (((-3649853571918009999 + 9223372036854775807) >> (((arr_45 [i_6 + 1]) - 75))))));
                }
            }
        }
    }
    var_23 = (min(-3649853571918009974, 1));
    #pragma endscop
}
