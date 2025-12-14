/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_1] = (!var_4);
                    var_14 = (max(((((arr_4 [i_1 - 3] [i_1] [i_1 - 2] [i_1 - 1]) == (arr_4 [i_1 - 3] [i_1] [8] [i_1 - 2])))), (arr_3 [i_1])));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_3] [i_0] [i_1] = 1606547316;
                        arr_13 [i_0] [i_1] [i_3] = (max((((((var_2 & (arr_10 [i_1])))) ? (min((arr_9 [i_0] [i_1] [i_2] [i_2] [i_3]), (arr_10 [i_1]))) : (((arr_3 [i_1]) ? (arr_5 [1] [i_1] [i_0]) : (arr_2 [i_2]))))), (arr_11 [i_0] [i_0] [i_1] [i_3])));
                        var_15 = (min(var_15, ((~((~(~var_0)))))));
                    }

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_16 [i_1] [i_1 - 2] [i_4] = (max((((var_1 ? -1152474756 : (arr_15 [i_0] [i_2] [i_4])))), (max((arr_15 [i_1 - 1] [i_1 - 2] [i_1 + 2]), (arr_0 [i_1] [3])))));
                        arr_17 [i_0] [i_0] [i_0] [10] [i_2] [i_4] &= ((((-(arr_11 [i_0] [i_0] [i_0] [i_4]))) % 1152474756));
                        var_16 = (max(var_16, var_3));
                        arr_18 [i_0] [i_1] [i_0] [i_4] = min(0, 1152474758);
                    }
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        var_17 = (~var_11);
                        var_18 = ((arr_7 [i_2]) ? (arr_7 [i_1 + 1]) : (!-1152474756));
                    }
                    arr_21 [i_2] [i_2] [i_1] [i_2] = (((arr_4 [i_1 - 1] [i_1] [i_2] [i_1 - 1]) ? (arr_14 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2]) : (min(1152474755, (arr_6 [i_1 - 1] [i_1 + 2] [i_1 - 2])))));
                }
            }
        }
    }
    var_19 = (min(var_19, var_4));
    #pragma endscop
}
