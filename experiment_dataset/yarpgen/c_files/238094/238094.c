/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] = var_9;
                var_17 = var_2;
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_18 = 9223372036854775807;
                            arr_12 [i_2] [i_1] [i_2] = var_12;
                            arr_13 [i_2] [11] = ((!((((48789 >= 1758806446) ? (arr_7 [i_2 + 3] [i_2 - 1] [i_2 - 1] [i_2 - 3]) : (var_16 | var_7))))));
                            var_19 += (min(((((arr_0 [i_2 - 2]) == (!112)))), (min(var_13, (var_2 >= var_6)))));
                            arr_14 [i_3] [i_2] [i_2] [i_0] = ((((((arr_9 [i_0] [i_2] [i_2 - 3]) ? var_5 : (arr_8 [i_0] [i_1] [i_2 + 3])))) ? (((-9223372036854775807 - 1) ? var_10 : 1)) : var_4));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_20 += ((9412 ? ((((min(9223372036854775807, (arr_7 [8] [i_5] [8] [8]))) / ((((arr_16 [i_7]) ? (arr_25 [i_4] [i_5] [i_7 + 1] [i_5]) : 0)))))) : ((var_13 % (((max((arr_9 [i_8] [i_4] [i_4]), (arr_17 [i_5])))))))));
                                arr_28 [i_7] [i_7] [i_6] [0] [i_7] = ((10558 / ((min(var_8, (arr_11 [i_7 - 1] [i_7 + 1] [i_7 - 1] [15] [i_4]))))));
                            }
                        }
                    }
                }
                var_21 = ((!(arr_5 [i_5] [i_4])));
                var_22 = -7337841450717871814;
                var_23 = ((min(((var_6 << (arr_18 [i_4])), var_15))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_24 = (min(var_24, (((~(min(4296408764759843302, 124)))))));
                            var_25 += var_7;
                            arr_34 [1] [i_5] [i_9] [i_10] [i_10] = ((((((9223372036854775807 | 1) || (arr_20 [i_10])))) ^ (arr_18 [i_5])));
                        }
                    }
                }
            }
        }
    }
    var_26 = (((8045594896404073910 - 25717) ? var_9 : 249));
    #pragma endscop
}
