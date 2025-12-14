/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [3] [i_3] [i_4 - 2] = (~10649250160099743149);
                                arr_13 [i_0] [i_1] [i_1] = (max((((arr_11 [2] [2] [i_0] [i_0] [2] [4] [i_4 - 2]) ? (arr_11 [i_0] [1] [i_0] [2] [i_3] [i_4] [i_4 - 2]) : var_12)), -1));
                                arr_14 [i_0] = (max((((((max((arr_7 [i_0] [6] [i_1] [i_0]), (arr_10 [i_0] [4] [i_2] [i_2] [4] [i_3] [i_4])))) ? var_7 : (arr_2 [i_0 - 1])))), (min((arr_9 [i_0]), (arr_3 [i_1 - 3] [i_2] [i_3])))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_0] [i_0] = (((((~(max((arr_10 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0]), (arr_8 [i_0 - 1])))))) / (arr_0 [i_0])));
                arr_16 [i_0] = var_14;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {
                arr_23 [i_5] [16] = max((((arr_22 [i_5] [i_6]) << ((((var_12 ? (arr_19 [i_5] [i_6] [8]) : var_14)) + 7)))), (arr_19 [i_5] [i_6] [i_6]));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            arr_30 [i_5] [i_5] [17] [i_6] [0] [i_8] = (~-12669);
                            var_20 = ((~(~var_5)));
                            var_21 = (((((((max((-9223372036854775807 - 1), (-9223372036854775807 - 1)))) ? 1003 : 28938))) / ((681659292 ? -110 : 9223372036854775807))));
                            arr_31 [i_5] [i_7] [i_8] = ((-(arr_21 [13] [i_7])));
                        }
                    }
                }
            }
        }
    }
    var_22 = var_5;
    var_23 = (~var_14);
    #pragma endscop
}
