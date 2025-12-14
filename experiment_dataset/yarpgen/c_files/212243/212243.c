/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_2 != var_13);
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = ((!(arr_2 [i_0])));
        arr_5 [i_0] = -var_8;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((-99 ? (arr_1 [i_1] [i_1 - 2]) : (arr_7 [i_1] [i_1])));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    {
                        arr_17 [i_1] [0] [i_1] [i_1] = ((3093692583796899782 - (arr_7 [i_1] [i_2])));
                        arr_18 [i_1] [i_2] [i_3 + 1] [i_1] [i_1] = ((var_6 & ((var_13 ? 3196314272492354314 : (arr_0 [i_1])))));
                        arr_19 [i_1] [i_1] = (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]);
                    }
                }
            }
            arr_20 [i_1] [i_2] = (arr_2 [i_1]);
            arr_21 [i_1] [i_1] [0] = ((!(((var_7 * (arr_11 [i_2]))))));
            arr_22 [i_2] [i_2] = (!1);
        }
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            arr_26 [i_1] [i_1] = ((-288100674 ? ((44 ? var_5 : 3)) : 1));
            arr_27 [i_1] [i_1] = (-(!-40));
            arr_28 [i_1] = (-((1 ? var_4 : var_2)));
        }
    }
    #pragma endscop
}
