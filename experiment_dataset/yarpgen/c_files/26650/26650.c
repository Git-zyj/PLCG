/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((33555 >= (-2147483647 - 1))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 -= (((((arr_9 [1] [i_0 + 1] [i_0 + 2] [i_0 + 1]) ? -520023396 : (arr_9 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1]))) >= (((((arr_9 [i_0] [i_0 - 1] [i_0 + 2] [i_0 - 1]) + 2147483647)) >> (520023416 - 520023397)))));
                                arr_12 [i_1] [i_2] = (!((((var_1 <= 12545234771965517816) ? ((var_9 ? (arr_4 [i_2] [9]) : 592512101)) : (arr_11 [i_4] [i_3] [i_2] [5] [i_0])))));
                                var_18 = (max(var_18, (arr_2 [i_0] [i_0 + 1] [3])));
                                var_19 = (520023396 ? -1347077549 : -520023396);
                            }
                        }
                    }
                    arr_13 [i_2] [i_1] [i_2] = ((var_4 ? (max((min(718202933, 41997)), 16)) : ((-827737224 ? 292064995 : (arr_0 [7])))));
                    var_20 = (max(((~(arr_3 [i_0] [i_1] [8]))), (arr_2 [i_0] [12] [i_0])));
                }
            }
        }
        var_21 += ((((max((var_0 & 1), var_4))) ? (arr_2 [i_0] [10] [i_0]) : ((-346072292 ? var_8 : (max(620513525, (arr_3 [i_0] [i_0] [5])))))));
        var_22 = -2040372273;
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_23 = var_4;
        var_24 = (~(min((((-2147483647 - 1) ? (arr_14 [15] [15]) : var_12)), (((arr_16 [i_5]) ? 15 : var_12)))));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_25 = ((((((arr_17 [i_6]) ? (arr_17 [i_6]) : 520023387))) ? (((arr_17 [i_6]) ? -718202933 : var_3)) : (arr_17 [i_6])));
        var_26 |= (arr_19 [i_6]);
    }
    #pragma endscop
}
