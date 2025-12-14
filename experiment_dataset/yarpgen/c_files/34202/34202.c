/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_2] [i_2] [i_2 + 1] = -3454897429;
                    var_10 = (arr_6 [i_0 + 2] [i_0] [i_2]);
                    var_11 = (((~1313518875) && (((-95 ? 2981448420 : 2981448420)))));
                    arr_11 [i_2] [i_1] [i_1] [i_1] = (((max((max(var_0, var_4), (((!(arr_6 [i_0] [i_1] [i_2])))))))));
                }
            }
        }
    }
    var_12 = (~var_2);
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    var_13 = (max(((var_5 & ((~(arr_15 [i_4] [i_5]))))), (max(((max(1, 39))), (~var_3)))));

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_14 = (min(var_2, (max((~1), (arr_13 [i_6] [i_4 - 1])))));
                        var_15 = ((!((max(5847347922531761917, 1)))));
                        arr_23 [i_5] [i_5] [i_4] [i_5] = ((((((arr_21 [i_4 - 1] [i_4 - 1] [i_3 - 2] [i_3 - 1]) ? var_0 : (arr_21 [i_4 - 1] [i_4 - 1] [i_3 - 2] [i_3 - 2])))) ? (arr_21 [i_4 - 1] [i_4 - 1] [i_3 - 1] [i_3 - 2]) : (arr_21 [i_4 - 1] [i_4 - 1] [i_3 + 1] [i_3 - 1])));
                        var_16 = (((~1313518875) ? var_0 : 1313518875));
                        var_17 = var_4;
                    }
                    arr_24 [i_5] [i_5] [i_5] [i_5] = (((((arr_22 [i_4 - 1] [i_4]) - ((max((arr_21 [i_3 + 1] [5] [i_4] [i_5]), var_5)))))) ? (5146298765218111090 != 16480) : ((~(!var_8))));
                }
            }
        }
    }
    #pragma endscop
}
