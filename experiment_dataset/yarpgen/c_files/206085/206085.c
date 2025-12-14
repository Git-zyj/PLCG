/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((-51 ? var_10 : ((var_0 ? -3 : var_1))))) ? var_5 : var_1));
    var_17 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_18 = ((117 ? 11276 : (arr_2 [i_1] [i_1])));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_19 += ((-((var_14 ? (arr_2 [i_2] [i_1 + 1]) : (arr_2 [i_2] [i_1 + 1])))));
                    arr_6 [i_0] [i_1 - 1] [i_1 - 1] [i_2] |= (23596 / (~-1925107639));
                    arr_7 [i_1] = ((13631278564752206700 ? (((-1925107663 ? 1925107663 : 1))) : (arr_2 [i_1] [i_1 + 2])));
                    arr_8 [i_0] [i_1 + 1] [i_2] [i_1] = (((-1925107665 & 1) ^ ((var_2 - (arr_4 [4] [i_1 + 2] [i_1] [i_1 - 1])))));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_20 = (var_14 - var_15);

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_21 = 1189553449;
                        arr_15 [i_4] [i_3] [i_3] [i_0] |= (arr_2 [i_3] [i_1 + 1]);
                        var_22 = (((var_4 ? 32 : (arr_12 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 + 3] [i_1]))));
                        var_23 -= var_15;
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_24 += (arr_11 [i_1 + 3] [i_1 - 1]);

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_25 = max(32, ((95 ? ((-121 ? 1925107656 : 608523681)) : (max(-10, (arr_5 [i_0] [i_3]))))));
                            var_26 = ((((arr_10 [i_1 + 3] [i_1 + 2] [i_1 + 2]) * var_15)));
                        }
                    }
                    arr_21 [i_0] [i_1] [i_1] = ((+(max((((-9223372036854775807 - 1) ? -8459 : 1)), (var_10 >= 3)))));
                    var_27 = ((var_4 / ((((((arr_19 [i_0] [i_1] [i_0] [i_3]) ? var_13 : var_11))) ? var_6 : var_9))));
                    var_28 = arr_12 [i_3] [7] [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_0];
                }
            }
        }
    }
    #pragma endscop
}
