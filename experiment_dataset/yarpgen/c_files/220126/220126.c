/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((max(((((1 ? var_4 : var_8)) * var_6)), (((~var_10) ? (var_2 / var_9) : var_0)))))));
    var_12 = ((~1) != ((-(var_0 * var_8))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = ((max((var_8 > var_5), ((527 << (2098017434 - 2098017425))))));
        var_14 = (((var_1 >= var_1) <= (((-18423 | -11724) ^ (((arr_1 [i_0]) ? var_10 : 6946))))));
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {
        var_15 = (min(var_10, (((((-11705 * (arr_3 [i_1])))) ? var_0 : (~var_5)))));
        var_16 = (max(var_16, (((var_6 + 2147483647) >> ((((~-8144946340304132598) > 6946)))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                {
                    var_17 = max(1, 17179869183);
                    var_18 = ((-(arr_3 [i_1 - 2])));
                    arr_10 [i_1] = ((((var_6 <= (arr_6 [i_2] [i_2]))) ? (((arr_9 [9] [9]) ? var_6 : var_10)) : ((((arr_6 [i_2] [21]) ? var_8 : var_0)))));
                }
            }
        }
    }
    #pragma endscop
}
