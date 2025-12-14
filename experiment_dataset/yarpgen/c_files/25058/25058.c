/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (min(var_18, 15911));
        arr_3 [i_0] [i_0] &= (((arr_1 [i_0]) * (arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 -= (max((max(((max((arr_6 [i_0]), 15910))), (max(2292251764, 104)))), (((((8 << (((arr_6 [i_1]) - 24509))))) - (((arr_2 [i_0] [i_0]) ^ (arr_2 [i_0] [i_1])))))));
                    arr_10 [i_0] [i_1] [i_2] = (65519 ^ -2);
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 24;i_3 += 1)
    {
        var_20 -= 2292251764;
        arr_14 [i_3] = (max((-9223372036854775790 < 49624), 49609));
        arr_15 [i_3] = -2;
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_21 = ((((min(4294967281, 1))) ? ((((arr_7 [i_4] [i_4] [i_4]) ? (arr_16 [i_4]) : -16))) : (((arr_12 [i_4]) ? (arr_4 [i_4]) : (arr_4 [i_4])))));
        arr_19 [i_4] [i_4] = (arr_12 [i_4]);
        var_22 = (min(var_22, ((((arr_4 [i_4]) ? (((((18446744073709551614 & 6204) == (arr_8 [i_4] [i_4] [i_4] [i_4]))))) : (((((max((arr_16 [i_4]), (arr_5 [i_4] [i_4]))))) & (min(15911, 2292251743)))))))));
        var_23 = (arr_9 [i_4] [i_4]);
    }
    var_24 = (max(var_24, (152 | 4294967281)));
    #pragma endscop
}
