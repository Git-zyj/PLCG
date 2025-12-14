/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 2356424632));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 |= 10277;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] = -var_5;

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_14 = ((var_5 ? var_3 : (arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_4])));
                            var_15 = (arr_9 [i_1] [i_1] [i_2]);
                            var_16 = (((arr_7 [i_1] [i_2] [i_3] [i_4]) != (arr_7 [i_0] [i_1] [i_3] [3])));
                            var_17 = (arr_0 [i_0] [i_1]);
                        }
                    }
                }
                arr_15 [i_0] [4] [i_0] [i_0] = (((arr_14 [i_0] [i_2] [i_1] [i_0] [i_2] [i_1] [i_0]) ? (arr_14 [i_2] [i_2] [i_1] [i_1] [i_1] [i_1] [i_0]) : (arr_14 [i_1] [i_1] [1] [i_1] [i_0] [i_0] [i_0])));
                var_18 = (arr_14 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2] [i_2]);
            }
        }
    }
    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        var_19 = arr_19 [i_5 + 2];
        var_20 = (min(var_20, var_4));
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
    {
        var_21 = (~((~(arr_21 [i_6] [i_6]))));
        arr_24 [i_6] = ((((((((~(arr_19 [i_6])))) ? (arr_19 [i_6]) : ((3143133886 ? 2988338974 : 3235049566))))) ? (arr_16 [i_6] [i_6]) : (arr_22 [i_6])));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {
        var_22 = (arr_22 [16]);

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_29 [14] = ((max(-24, (arr_17 [i_8]))));
            arr_30 [i_7] [i_8] [9] = var_7;
        }
        arr_31 [i_7] = var_3;
        var_23 = (arr_26 [i_7]);
    }
    var_24 = var_4;

    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        var_25 = (((((-(arr_32 [i_9 - 1] [0])))) ? (arr_18 [i_9 - 1]) : (((-(arr_10 [i_9 - 1] [i_9 - 1] [7] [i_9 - 1]))))));
        arr_34 [i_9] = ((((!(((arr_23 [i_9]) && (arr_0 [i_9 - 1] [i_9 - 1]))))) ? var_5 : (((!(((arr_20 [i_9]) == (arr_22 [i_9]))))))));
        var_26 *= var_8;
    }
    var_27 += var_6;
    #pragma endscop
}
