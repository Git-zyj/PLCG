/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_6 ? var_0 : var_4));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = (((min(var_15, (arr_1 [i_0 + 1])))) ? (4294967295 | 4294967295) : (arr_1 [i_0 + 1]));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 |= ((!(arr_6 [i_3] [i_2 + 2] [i_2 + 1])));
                                var_20 = ((((((max(var_7, var_9))) ? (var_7 & var_15) : (((arr_3 [i_0 + 1] [i_0]) ? 4294967290 : 64)))) + var_6));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_21 -= (max(4294967295, 217));
                                arr_19 [11] [19] [i_1] [i_1] [i_1] = ((~((var_15 | ((9 ? var_6 : (arr_9 [i_1])))))));
                            }
                        }
                    }
                    var_22 = ((~(((arr_12 [i_0 + 1]) + (~2147483648)))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_23 = ((~(((29480 & 28) ^ (arr_15 [i_2] [i_2] [i_2 - 1] [i_2 + 3] [i_2 + 2])))));
                                var_24 ^= arr_24 [i_0 - 1] [i_0] [i_0 + 1] [17] [23] [24];
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
