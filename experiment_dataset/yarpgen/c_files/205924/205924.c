/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(((~var_9) ? var_14 : var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [7] [i_1 - 1] [i_0] = (arr_4 [0] [0] [3]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [6] [7] [i_2 + 1] [i_0] [4] = (((min((arr_5 [i_1 + 1] [i_1 - 2] [i_1 - 2]), (arr_5 [i_1 - 1] [i_1 - 2] [i_1 - 2])))) ? 65510 : ((~(arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
                            var_19 = ((!(arr_8 [1] [i_1 - 2] [i_0])));
                            arr_12 [4] [2] [10] [i_0] = (!var_8);
                            var_20 = 15;

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                arr_15 [i_0] [i_1 - 2] [i_2 + 3] [1] = (arr_5 [i_0] [i_1 - 1] [i_2 + 2]);
                                var_21 = var_12;
                                var_22 = 1;
                                var_23 ^= (arr_8 [10] [i_1 - 1] [10]);
                            }
                        }
                    }
                }
                arr_16 [4] [i_0] = max(var_10, ((!(arr_10 [4] [0] [1] [9] [9] [2]))));
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_24 = ((((((arr_10 [i_1 - 1] [i_1 + 1] [6] [i_5 + 1] [4] [i_5 - 1]) ? (arr_10 [i_0] [i_1 + 1] [i_5 + 1] [i_5 + 1] [i_6] [1]) : (arr_10 [11] [i_1 + 1] [i_1 - 1] [i_5 + 1] [1] [i_7])))) || (arr_10 [i_0] [i_1 - 2] [2] [i_5 + 1] [3] [3])));
                                var_25 = (max(var_25, (((+(max((arr_13 [i_0] [i_1 - 2] [i_5 + 1] [i_6] [i_7]), 2157531467)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (min(var_26, (~var_9)));
    var_27 = (max(var_0, (max((~var_4), var_4))));
    var_28 = ((var_5 ? ((max(var_12, var_2))) : var_10));
    #pragma endscop
}
