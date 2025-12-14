/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (((((-22206 ? var_12 : (var_18 * 22205)))) ? 22213 : ((((704378949 ? -22214 : var_1)) * var_6))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 &= (~-9140023601973764502);
                            arr_9 [i_0 - 3] [i_1] [i_0] [i_3] = -49;
                            var_22 = (arr_2 [i_0] [i_3]);
                            var_23 = ((((((arr_7 [i_1] [i_1] [i_1] [i_1]) ? (51 - var_1) : -28))) ? ((((-117 + 2147483647) << (51265 - 51265)))) : (((arr_2 [i_0] [i_1]) ? (arr_2 [i_0] [8]) : var_17))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_24 = (min(var_24, (((51 % ((-52 ? (arr_6 [i_6] [12] [i_4] [i_6 + 1]) : 704378949)))))));
                                var_25 = ((-(((arr_6 [i_0] [i_0] [i_0] [i_0 - 1]) ? (arr_6 [i_0] [i_0 + 2] [i_0] [i_0 - 1]) : (arr_6 [i_0 - 1] [i_0] [i_0] [i_0 - 4])))));
                            }
                        }
                    }
                    var_26 = var_5;
                }
                for (int i_7 = 3; i_7 < 16;i_7 += 1)
                {
                    var_27 += (arr_4 [4] [4] [i_1] [i_7]);
                    var_28 = (max(var_28, (((-(3590588376 & -52))))));
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_29 -= (((!-681) >> ((((((arr_8 [i_9]) > var_17))) % (0 + var_18)))));
                            arr_22 [12] [i_0] [i_8] [i_8] [i_8] [i_8] = arr_4 [i_0] [i_1] [i_8] [i_9];
                        }
                    }
                }
            }
        }
    }
    var_30 = ((((var_14 ? var_15 : var_17))));
    var_31 = var_6;
    #pragma endscop
}
