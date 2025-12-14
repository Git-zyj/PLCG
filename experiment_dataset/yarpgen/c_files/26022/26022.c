/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 = (((((var_0 ? (((min(126, var_11)))) : ((82 ? 1073733632 : 141))))) ? (((var_13 ? 3287456632 : -4096))) : (min(var_8, (min(var_12, var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] = var_5;
                            arr_14 [i_2] [i_1] [i_2] [i_1] [i_2] = ((((696900525 ? 72 : (arr_3 [i_3]))) - -31104));
                            var_16 = (9556763815050909146 >> 1);
                            var_17 = (~49675);
                            var_18 = (+-769);
                        }
                    }
                }
                arr_15 [i_0 - 1] [i_0 - 1] [i_0] = (var_4 >= var_13);
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_19 = (!155);
                                var_20 -= (((16 | 249) ? ((50383 ? 22 : 8889980258658642469)) : (~8554)));
                                arr_24 [i_0] [i_1] [13] [i_5] [i_6] = ((((var_12 != ((~(arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? ((~((0 ? 14 : (arr_4 [i_1] [i_6]))))) : (((max(var_12, var_3))))));
                                var_21 = (min((min(-8559, (((arr_0 [i_0]) - (arr_8 [i_4] [i_5]))))), (((-26134 - 198) ? (3461585040 | -1567481701) : var_10))));
                            }
                        }
                    }
                }
                arr_25 [i_1] = ((((max((((arr_0 [i_0]) ? (arr_1 [i_0] [i_1]) : (arr_8 [i_0] [i_0]))), 10869))) ? (((arr_9 [i_0] [i_0 + 1] [i_0] [i_1 + 1]) ? (((arr_19 [7] [i_0 - 1] [i_0] [i_1] [i_1] [1]) ? var_5 : (arr_16 [i_0 + 2] [i_0 + 2] [i_0] [i_0]))) : var_3)) : (29021 >= 3287456618)));

                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    var_22 -= (((((~(arr_6 [i_1 + 1] [i_0 - 1])))) ? ((~(arr_21 [i_0] [6] [i_1] [i_7]))) : var_5));
                    arr_28 [i_7] [i_1] = ((((((var_10 ^ (arr_5 [9] [i_1] [i_0])))) ? (arr_12 [i_0] [i_0 - 1] [3] [i_1 + 1]) : (min((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]), var_5)))));
                }
            }
        }
    }
    var_23 -= (min(var_5, (-19 <= 3287456632)));
    #pragma endscop
}
