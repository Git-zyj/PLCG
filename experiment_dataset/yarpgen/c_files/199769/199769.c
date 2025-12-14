/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_8));
    var_13 = (!var_6);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_14 = 46;

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [8] [i_2] [i_2] [i_3] [i_2 + 1] = -47;
                        var_15 = ((((((((var_10 ? (arr_4 [7]) : 97))) ? (var_8 / 226) : 55))) ? (((arr_1 [i_1 + 1]) ? var_7 : (arr_1 [i_1 + 1]))) : ((var_1 ? ((793034967 ? var_8 : var_4)) : 17))));
                        var_16 = (min(var_16, (((var_5 ? var_11 : (((arr_10 [i_2] [4] [i_0] [i_2 - 2]) ? -75 : var_9)))))));
                        arr_12 [i_0] [i_3] &= (min(65518, (((156 / (arr_3 [i_2 - 3] [i_1 - 1]))))));
                        arr_13 [i_2] = 17;
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 7;i_4 += 1)
                    {
                        var_17 = (max(var_17, (arr_8 [i_1 + 1] [i_4 + 1] [i_2] [i_2 - 1] [i_2 - 1] [i_0])));
                        var_18 = (max(var_18, ((((((27 ? (arr_4 [i_4]) : -6395534827389012211))) ? var_11 : 121)))));
                    }
                }
            }
        }
    }
    var_19 = (max(var_19, var_10));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                var_20 = -130;
                arr_22 [i_6] [i_5] = (arr_17 [i_6] [i_5]);
            }
        }
    }
    #pragma endscop
}
