/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -110976465;
        var_15 = (max(var_15, ((((((((arr_0 [i_0 - 1] [i_0 - 1]) + 2147483647)) << (!3))) & -1)))));
        arr_3 [i_0 - 3] [i_0] &= var_14;
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        var_16 = (min(((min(-110976459, (((arr_0 [i_1] [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1])))))), (max((arr_6 [i_1 - 1]), 18446744073709551600))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_17 -= (((((arr_11 [i_4] [i_1] [i_3]) << (((arr_13 [i_4] [i_2]) - 55648)))) | ((((!(arr_4 [i_3])))))));
                        arr_16 [i_1] [i_2] [i_2] [i_2] [i_4] &= (arr_12 [i_1] [2] [i_1] [i_3] [i_4]);
                        var_18 = (max(var_18, (((((var_6 >> (((arr_6 [i_1 + 1]) - 26517))))) ? (((arr_1 [i_2] [i_2]) / (((var_10 ? var_2 : var_6))))) : (((((max(var_3, (arr_5 [i_1])))) ? (((arr_7 [i_1] [11] [i_4]) ? 2047 : 17357)) : (~-119))))))));
                    }
                }
            }
        }
        var_19 ^= (max(((!((((arr_8 [3] [9]) ? 131071 : (arr_15 [i_1])))))), (!14122)));
    }
    var_20 ^= ((((min((max(var_11, 255)), -1))) & ((((min(416329880, 2065611968))) ? var_3 : (4294836225 & var_0)))));
    #pragma endscop
}
