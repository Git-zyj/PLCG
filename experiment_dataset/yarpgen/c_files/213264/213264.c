/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((~(arr_4 [i_0] [i_0]))));
                var_15 = (((arr_1 [i_0] [i_1]) ? (((!(arr_1 [i_1] [17])))) : (max((arr_1 [i_0] [i_1]), (arr_1 [i_1] [i_0])))));
                var_16 = max((arr_0 [i_0]), ((-948987399 ? ((~(arr_0 [i_0]))) : 1346041836)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_17 = (min((arr_16 [i_2] [0] [i_4] [i_2]), (max((min(var_12, -1639808231)), -561318544))));
                                arr_19 [i_2] [i_2] [i_6] [i_4] [i_5] [i_6] = ((1 << (((arr_14 [i_2] [13] [i_4]) - 13947366447389501281))));
                                var_18 = (arr_16 [1] [i_5] [i_3] [19]);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_19 = var_2;
                                var_20 = 3126213629;
                                arr_26 [i_2] [i_9] [i_7] [i_9] [i_7] = var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_1;
    #pragma endscop
}
