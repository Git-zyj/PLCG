/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, (((((var_10 ? (arr_14 [i_0 - 1] [i_0] [i_0] [i_0] [i_1 - 2] [i_2]) : -var_11))) ? 932513450 : var_0))));
                                var_15 = (min(((~(max(var_2, var_2)))), var_13));
                                var_16 |= var_3;
                            }
                        }
                    }
                    arr_15 [i_0] = (arr_4 [i_0] [i_0 + 1] [i_0]);
                    arr_16 [i_0] [i_0] [i_2] = ((((((arr_11 [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1 + 3] [i_2]) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1 - 2] [i_1]) : (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 2] [i_2])))) ? (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 3] [i_2]) : ((var_6 ? var_11 : (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1 + 3] [i_1 - 2] [i_1])))));
                    var_17 = ((1131771897 ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_1 - 2] [i_0]) : var_5));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                arr_25 [i_5] = min((((~1) ? 65390 : 12)), var_6);
                var_18 = var_1;
                arr_26 [i_5] = ((((var_12 ? var_12 : ((max(var_10, var_12))))) - var_3));
                arr_27 [i_5] [i_5] = (var_9 <= var_4);
            }
        }
    }
    var_19 = (39834 ^ var_8);
    var_20 = (max(var_20, ((((!var_10) ? ((var_4 ? (min(var_5, var_4)) : (max(var_4, var_0)))) : ((min((var_0 + var_7), var_7))))))));
    #pragma endscop
}
