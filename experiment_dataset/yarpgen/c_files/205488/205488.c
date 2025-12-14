/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_1 >= (max(var_9, ((1 ? 1 : 18446744073709551603)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, var_2));
                                var_16 = 1;
                                arr_13 [0] [i_3] [i_3] [i_4] [i_3] [i_3] [1] = (((arr_5 [i_3 - 2] [i_1 + 1] [i_0 + 1] [i_0]) ? (arr_11 [i_4] [i_3 + 1] [1] [i_2] [i_1 + 1] [10] [i_0]) : ((883466998 ? (0 >= 253) : var_6))));
                                arr_14 [i_4] [i_4] [i_2] [i_1] [i_4] = (arr_1 [i_0]);
                                var_17 ^= var_2;
                            }
                        }
                    }
                }
                var_18 = ((((((883467021 ? 6468804079355764849 : (arr_7 [i_0 + 2] [i_1] [i_0 + 1] [i_1]))))) << var_0));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                arr_22 [i_6] [17] |= ((!(((arr_19 [i_5 + 1] [i_5 - 1] [i_5]) || (arr_19 [i_5] [i_5 + 1] [15])))));
                var_19 ^= 3411500297;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_29 [i_8] [i_6] = (arr_18 [i_5]);
                            arr_30 [i_5] [5] [i_8] [i_5] [i_5] [i_5] = (-(min(var_3, (((!(arr_18 [i_6])))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            arr_35 [i_5] [i_6] &= ((((((arr_25 [i_10] [i_9]) + ((var_6 ? 4294967295 : -12306))))) ? (arr_17 [1]) : (arr_16 [i_5 + 1] [7])));
                            var_20 = (max(var_20, var_13));
                            var_21 = (max(var_21, (max(-var_2, var_8))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
