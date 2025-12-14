/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [14] [10] [10] = ((((arr_0 [i_2] [i_0]) <= (min(var_7, (arr_5 [i_0] [i_0] [19] [0]))))) || (((~(arr_5 [i_2] [i_1] [1] [1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] [i_3] [i_4 - 1] [i_1] = (~92);
                                arr_14 [i_3] = (~-11);
                                arr_15 [i_2] [2] [i_2] [i_1] [i_2] &= ((-(((((arr_0 [i_3] [i_3]) <= var_6)) ? ((var_8 ? var_1 : (arr_7 [i_0] [i_1] [i_2] [3]))) : var_6))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        var_12 = (((~(arr_2 [i_5]))));
        arr_19 [i_5] = (arr_16 [14]);
        var_13 = (max(var_13, (arr_12 [i_5] [i_5 - 2] [i_5 - 1] [19] [i_5 - 2] [i_5 - 1] [i_5 - 1])));
    }
    #pragma endscop
}
