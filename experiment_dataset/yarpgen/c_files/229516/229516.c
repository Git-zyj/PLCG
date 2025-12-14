/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_11 [5] [i_1] [i_2] [i_3] [i_3] = 63;
                                arr_12 [i_4] [i_4] [i_3 - 2] [i_2] [i_1] [i_0] = 1582337501;
                                arr_13 [i_4 - 1] [i_3] [i_2] [i_1] [i_0] = -2631929862026486039;
                                var_17 = ((var_5 ? ((((2631929862026486058 && (arr_7 [i_3 + 2] [i_3] [i_3] [i_3]))))) : (((2631929862026486034 ? (arr_7 [i_3] [i_3] [i_2] [i_0]) : var_14)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_18 [9] = (~35956);
                            var_18 = ((!(((1748738336 ? -1339779312 : 1659980875)))));
                            arr_19 [i_6] [i_5] [i_1] = (~-var_4);

                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_19 = -1339779318;
                                var_20 ^= (((~2631929862026486041) ? (min(((var_14 ? (arr_0 [i_5]) : (arr_10 [i_0] [i_1 + 1] [i_6] [i_5] [i_6]))), (!1582337476))) : (min((((arr_15 [i_0] [i_0] [i_5] [i_6]) >> (-18 + 25))), var_5))));
                            }
                        }
                    }
                }
                arr_22 [i_0] [i_1] = max(((((arr_9 [i_1 - 1] [i_1] [i_1] [i_0]) ? (arr_9 [i_1 - 2] [i_1] [9] [i_0]) : var_13))), var_9);
            }
        }
    }
    var_21 += (-var_2 / ((~((2147483647 ? 15798 : var_15)))));
    var_22 = var_3;
    var_23 = ((~((-((65514 ? 26 : 25938))))));
    #pragma endscop
}
