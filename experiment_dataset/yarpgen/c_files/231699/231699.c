/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_11 = (((arr_2 [i_0 - 1] [i_0 - 1]) ? (arr_1 [i_0]) : (~var_10)));
        var_12 *= (arr_1 [18]);
        arr_3 [i_0] = (arr_2 [21] [3]);
        var_13 |= ((0 ? (arr_1 [16]) : (((arr_0 [1]) ? 4294967295 : (arr_0 [24])))));
        arr_4 [i_0] [i_0] = var_8;
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_14 &= ((((arr_7 [i_1 + 2]) ? (arr_7 [i_1 - 1]) : (arr_7 [i_1 + 3]))));
        arr_9 [i_1] = 11;
    }
    var_15 = var_1;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_18 [i_2] [i_2] = (((((var_4 ? (max(var_2, 2070631414)) : 4294967295))) ? 28643 : ((36893 ? var_10 : var_10))));
                    var_16 = (((((-var_7 ? ((772172348 ? 56212 : (arr_2 [i_2] [i_2]))) : (arr_1 [i_2])))) ? var_4 : var_3));
                }
            }
        }
    }
    #pragma endscop
}
