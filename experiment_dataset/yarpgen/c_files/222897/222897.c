/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = ((((-(-2147483647 >= var_1))) >> ((((var_5 ? (min(var_8, var_4)) : var_3)) + 2903037596746518503))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((var_9 / (min(var_8, (~var_5)))));
        arr_3 [18] [i_0] &= ((((var_5 ? (max((arr_0 [1]), (arr_0 [i_0]))) : var_5)) + (!var_7)));
        arr_4 [i_0] = (min(1008, 1));

        for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
        {
            arr_8 [i_1 - 1] [i_1 - 1] [i_0] = (arr_1 [i_0] [i_1]);
            arr_9 [i_1] [i_1] [i_1] = (((((arr_5 [i_1] [i_1]) + (min(var_5, var_8))))));
        }
        for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_19 [i_3] = (arr_14 [i_0] [i_0] [i_0] [i_0]);
                            arr_20 [i_0] [i_2 - 1] [i_3] [i_3] [i_3] = (((arr_1 [9] [9]) % (min(-4777843152222793809, 31744))));
                        }
                    }
                }
            }
            arr_21 [i_0] = min(((~(arr_13 [8]))), ((((var_9 != 2) & ((min((arr_12 [17] [i_2 + 2] [0]), (arr_12 [i_0] [i_0] [i_2 + 2]))))))));
        }
    }
    for (int i_6 = 4; i_6 < 19;i_6 += 1)
    {
        arr_26 [10] [i_6 - 3] = (((((~10148437475684646024) ? (-9223372036854775807 - 1) : 3235445414881172351)) - (((~(var_4 >= var_10))))));
        arr_27 [i_6 - 2] [i_6 - 3] = (((-((1 / (arr_24 [4] [10]))))));
        var_15 = (max(var_15, (((var_5 <= (((((arr_22 [i_6 - 2]) || var_9)) ? (arr_22 [i_6]) : (var_12 / var_6))))))));
        arr_28 [i_6] [9] = ((var_11 + (((var_5 ? (var_9 >= 26) : (((31765 < (arr_24 [i_6 - 2] [i_6 - 2])))))))));
    }
    #pragma endscop
}
