/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = ((-(((arr_3 [i_1] [i_1]) ? (((-2147483647 - 1) ? var_11 : var_11)) : (var_9 & 37898)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_15 = (((((var_8 ? (255 - 255) : 37898))) ? ((24 ? (((arr_0 [i_0 + 1]) ? 65033 : var_12)) : 147)) : (((arr_12 [i_0 - 3] [i_3 - 1] [i_0 - 3] [i_2 - 1] [i_4]) ? (((-2147483647 - 1) ^ var_9)) : (0 || var_6)))));
                                var_16 &= (~var_7);
                                var_17 |= ((((var_12 ? var_12 : var_11)) > (max(var_4, (arr_9 [i_0 - 4] [i_0])))));
                            }
                            arr_16 [i_0] [i_0] [i_1] [i_2] [i_3 - 2] = (((~0) + ((((((arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_11 [i_0 - 3] [i_0 - 3] [i_3 + 1]) : var_8))) ? ((5423759634612596011 ? (arr_15 [i_0 - 3]) : var_9)) : ((430 ? 37898 : 1))))));
                            var_18 = var_12;
                            arr_17 [i_1] [i_1] [i_2] [i_3] [i_3 - 1] = ((var_2 ? var_5 : 126));
                            var_19 += (~var_0);
                        }
                    }
                }
                var_20 ^= ((min(((-20478 ? 0 : 146371714), var_13))));
                var_21 = ((((min(1, (arr_13 [i_0] [i_0 - 2] [i_0] [i_0 + 1] [10])))) ? ((((max((arr_5 [i_0] [i_0]), 1)) + (((arr_7 [i_0 + 1] [i_1] [i_1]) + var_0))))) : (min((min(var_11, 325607777168154338)), -var_0))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    var_22 = ((((max(var_0, (arr_23 [i_5] [i_5] [i_5] [i_6])))) ? var_13 : (~var_7)));
                    var_23 = (max(var_23, -var_6));
                    var_24 = (max(var_24, -1));

                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        arr_27 [4] [i_7] [i_6] [i_6] [i_6] [4] |= (var_11 | var_5);
                        arr_28 [i_5] [i_5] [9] [i_6] [i_5] = (min(((min(65535, -1))), (arr_21 [i_6])));
                        var_25 = ((var_4 ? var_1 : 4213974248));
                    }

                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 18;i_9 += 1)
                    {
                        var_26 = ((var_7 ? (arr_30 [i_5] [i_5] [1] [i_6]) : var_12));
                        var_27 = var_13;
                    }
                }
            }
        }
    }
    #pragma endscop
}
