/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max(var_9, (~var_5));
    var_16 = ((min(3145728, 4294967295)));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = min((min(((~(arr_1 [i_0] [i_0 - 1]))), (arr_0 [i_0]))), 4294967295);
        var_17 = arr_1 [14] [14];
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_18 ^= (-((~(min(var_7, (arr_5 [i_1] [i_1]))))));
        arr_6 [i_1] = ((-(((!(arr_5 [i_1] [i_1]))))));
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_19 = (max(var_19, ((((max((arr_1 [i_2 + 1] [i_2]), (arr_1 [i_2 + 1] [i_2])))) ? var_3 : (!1)))));
        var_20 = (min(var_20, ((var_13 ? ((((max(3, 1687279552))) ? var_11 : 3464211939)) : (min((max(895138366, 83196596)), var_14))))));
        var_21 = (max(var_21, (((((-(min((arr_1 [i_2] [i_2]), (arr_7 [i_2] [i_2])))))) ? (!var_2) : var_3))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_22 [i_3] [i_4] [i_3] [i_3] [i_4] [i_3] = min(var_8, (min((min((arr_7 [i_3] [i_4]), (arr_21 [i_4] [i_4] [i_4] [i_4] [i_6]))), (arr_8 [i_3] [i_4 - 1]))));

                            for (int i_7 = 2; i_7 < 13;i_7 += 1)
                            {
                                var_22 = max((((arr_25 [i_4] [i_4] [i_4 + 1]) ? (arr_25 [i_4] [i_4 + 1] [i_4 + 1]) : (arr_25 [i_4] [7] [i_5]))), (arr_26 [i_3] [i_3] [i_3] [3] [i_3] [i_3] [i_3]));
                                var_23 &= arr_20 [i_3];
                                arr_27 [i_4] = 83196580;
                            }
                        }
                    }
                }
                var_24 = 0;
            }
        }
    }
    #pragma endscop
}
