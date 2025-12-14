/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 |= (-14120 ? (((arr_4 [i_0] [i_1 - 4] [i_2]) - var_18)) : (((arr_7 [i_0] [i_1] [i_2]) - (arr_7 [i_2] [i_1] [i_2]))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] = ((+(min((var_14 | var_12), (max(-8192, (arr_9 [i_0] [i_0] [3] [i_0])))))));
                        var_20 = (min(var_20, (arr_5 [i_1] [i_1])));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = (min(((-(arr_6 [i_1 - 1] [i_1 - 1] [1]))), ((min((arr_4 [i_0] [i_0] [i_0]), var_5)))));
                        arr_13 [i_0] [i_0] = (max((((var_5 || (arr_8 [i_0] [i_1] [i_2] [i_3] [i_0] [i_2])))), ((var_14 ? (arr_8 [i_0] [i_0] [i_1 + 1] [i_2] [i_1 + 1] [i_3]) : -92))));
                    }
                    var_21 = (min(var_21, var_10));
                    arr_14 [i_0] [i_2] [i_0] [8] = var_18;
                }
            }
        }
    }
    var_22 = ((var_10 == (+-0)));
    var_23 = (min(((((((var_13 ? var_1 : 8192))) ? var_13 : 1))), (var_8 - var_9)));
    #pragma endscop
}
