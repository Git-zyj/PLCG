/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((~(var_11 != 0))), 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [i_2] [i_3] [i_3] |= (min(((1 ? (((1 ? 1 : (arr_1 [i_0])))) : ((-2 ? (arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4 - 1]) : var_8)))), -7067554712258268759));
                                arr_11 [i_3] [i_1] &= (arr_3 [i_4]);
                            }
                        }
                    }
                    arr_12 [i_0] [i_1] [3] [i_1] = (((1 ^ var_7) & (arr_9 [i_2] [i_1] [i_1] [i_2] [i_0] [i_2])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_18 [2] [i_1] [i_1] [i_1] [i_1] [i_5] [11] = (((arr_5 [i_5] [i_6]) == (((-1553970953865823336 ? -2147483637 : (arr_2 [i_0]))))));
                                arr_19 [i_1] = ((1 >> (var_8 - 2878891517)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] [i_1] [11] [i_0] = 31;
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = max((min(1, 1)), (arr_22 [i_8] [i_7] [i_7] [i_2] [i_1] [i_0]));
                                var_14 = 3590957901;
                                arr_27 [i_0] [9] [i_1] [i_2] [i_1] [i_1] [i_8] = (((((1 ? (arr_6 [i_1] [6] [i_1] [i_8 - 2]) : var_2))) ? ((min(28, (arr_14 [i_8 - 2] [i_8 - 2] [11] [i_8 + 1] [i_8 + 1])))) : ((1 ? (arr_13 [i_8 - 2] [i_1]) : 8))));
                                arr_28 [i_0] [6] [i_0] [i_0] [i_0] |= (min(3429952541, -7542));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
