/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_11 += ((((var_9 || (arr_3 [i_0 - 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_12 *= -var_4;
                            arr_10 [i_2] [i_3 - 1] [i_1] [i_2] [i_1 - 1] = (min((arr_8 [9] [i_1] [3] [10] [13]), (max(7723, (arr_4 [i_0 + 1])))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_13 = ((((max((arr_12 [i_4] [i_4]), (arr_11 [i_4])))) ? (arr_13 [i_4]) : (max((arr_12 [i_4] [i_4]), (arr_13 [i_4])))));
        arr_14 [i_4] [i_4] = ((-(((arr_13 [i_4]) ? (arr_13 [i_4]) : 112670762))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 20;i_7 += 1)
                {
                    {
                        var_14 = (max(var_14, 7723));
                        var_15 = ((51918 ? 57813 : (min(((((arr_13 [i_6]) ? (arr_13 [i_4]) : var_2))), (max(var_0, var_10))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 4; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        arr_29 [10] [i_9] [5] = var_10;
                        arr_30 [i_10] [i_9] [i_9] [i_4] = var_0;
                    }
                }
            }
        }
    }
    var_16 = var_9;
    #pragma endscop
}
