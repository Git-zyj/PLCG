/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, ((min((!5), (((arr_3 [i_2 - 1] [i_2 + 1]) ? 1 : 3999239169)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_13 &= ((3999239169 ? 0 : -30946));
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_1] [i_0] [i_2] = ((0 != (arr_11 [1] [i_1] [i_2])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 -= 18446744073709551615;
    var_15 += ((var_6 ? ((var_10 ^ (!var_7))) : var_2));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_5] [i_7] [11] = min((((25 ? 16777215 : (max((arr_15 [i_5] [i_7] [1] [i_6] [i_6] [i_7]), 4278190080))))), ((295728127 ? 924585677 : ((-(arr_20 [i_5]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                arr_29 [i_5] [i_5] [i_5] [i_5] [i_8] [i_5] [i_5] = 1;
                                arr_30 [i_5] [i_5] [i_8] [i_8] [i_8] [i_8] [i_7] = (295728118 < (!18446744073709551615));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
