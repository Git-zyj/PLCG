/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (174 && var_4);

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = (((((-2147483647 - 1) >= 16128)) ? (((-var_6 ? (!var_8) : (arr_3 [i_2] [i_1 - 1] [i_0])))) : (arr_1 [i_0])));
                    arr_8 [i_2] [i_1] [i_0] [i_0] = ((((((max(var_4, (arr_3 [i_2] [i_1 - 1] [i_0])))) ? var_4 : var_16)) | ((~(arr_3 [i_0] [i_1 - 1] [i_2])))));
                    arr_9 [i_0] [i_0] = (!-12);
                    arr_10 [i_0] [i_0] [i_2] = var_3;
                }
            }
        }
        arr_11 [i_0 - 1] [3] = max((arr_2 [i_0]), ((82 ? 794636360 : -669469963191658245)));
        arr_12 [i_0] = (max(var_5, (((12 <= 163) + ((1 ? 2097151 : var_11))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                {
                    var_18 = (max((arr_13 [i_0 + 2] [i_0 + 2]), -1));
                    arr_18 [i_4] [i_3] [i_3] [i_3] = (-8 >= var_12);
                    arr_19 [i_3] [i_4 - 1] = var_0;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 21;i_5 += 1)
    {
        var_19 = ((var_15 / (arr_21 [i_5 + 1] [i_5 + 2])));
        arr_22 [i_5] = (((-127 - 1) ? ((var_8 & (arr_21 [i_5] [i_5]))) : (var_11 <= -2661838598215012665)));
        arr_23 [i_5 - 2] = (((((arr_20 [i_5 + 1]) + (arr_21 [1] [i_5]))) >= (arr_21 [i_5] [i_5 - 1])));
        var_20 = ((~(arr_21 [i_5] [i_5])));
    }
    #pragma endscop
}
