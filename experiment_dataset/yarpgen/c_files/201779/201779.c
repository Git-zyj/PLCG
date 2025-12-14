/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(((246 ? -14 : var_3)), var_8))) && var_9));
    var_16 = (((((493855038 ? (((max(13, 58509)))) : var_6))) ? ((var_4 / ((max(26586, 58509))))) : ((var_13 ? var_14 : var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((((~(~58487))) >> ((((max(140, (16370 == 10868)))) - 128))));
                    arr_9 [i_0] = (i_0 % 2 == 0) ? (((var_13 & (((((max(4, -90))) << (((arr_6 [i_0] [i_0] [i_2] [i_0]) - 1897275609)))))))) : (((var_13 & (((((max(4, -90))) << (((((arr_6 [i_0] [i_0] [i_2] [i_0]) - 1897275609)) - 2516207681))))))));
                    var_17 = (max((max((((arr_7 [i_0] [i_1] [6]) ? var_5 : var_6)), -1)), 1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 = (((arr_6 [i_1] [i_0] [i_3] [i_4]) % (max((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_2] [i_3])))));
                                var_19 = 64268;
                                var_20 = (((((~(arr_16 [i_0])))) ? ((((max((arr_15 [i_4] [i_1] [i_2]), 57979))) ? var_0 : var_10)) : (arr_10 [i_1])));
                                arr_17 [i_0] [i_1] [i_3] [i_0] = (max((((arr_5 [i_0] [i_0] [i_0]) ? ((max((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_2))) : ((28766 ? 4062208450240138666 : var_6)))), ((((arr_14 [i_0] [i_1] [i_2] [i_3] [10] [i_1]) + (arr_1 [i_0] [i_2]))))));
                                var_21 = (min(var_21, var_0));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
