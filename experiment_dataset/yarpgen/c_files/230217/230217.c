/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((((var_15 ? (min(var_15, var_12)) : var_4))) ? var_13 : var_3);
    var_17 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = -var_11;
                    var_19 = arr_1 [i_2 - 2] [i_2 - 2];
                }
            }
        }
        var_20 = arr_4 [i_0] [i_0];
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {
        var_21 = (((var_6 | 0) || var_4));
        var_22 &= (arr_9 [i_3] [i_3]);

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_14 [i_3] = ((-((var_6 ? (arr_12 [i_3]) : (arr_9 [3] [i_4])))));
            arr_15 [i_3] [i_4] [i_4] = (!4537071949071944128);
            arr_16 [i_3] |= ((var_3 ? 0 : (arr_12 [i_4])));
            var_23 ^= (((arr_11 [i_3 - 3]) ? var_15 : (arr_11 [i_3 - 3])));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_24 = arr_19 [i_3];

            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                arr_24 [14] [i_6] = 81;
                var_25 &= ((var_7 ? (arr_17 [i_3 + 1] [i_5] [2]) : (arr_13 [i_3 - 1])));
                var_26 = -116;
                arr_25 [i_3 - 2] [i_3 - 2] = ((116 ? (arr_10 [i_3 - 1]) : ((-(arr_21 [i_6] [i_5] [i_3])))));
            }
        }
        var_27 = (max(var_27, ((((arr_20 [i_3 - 3]) == (arr_20 [i_3 - 2]))))));
    }
    #pragma endscop
}
