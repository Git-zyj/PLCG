/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = (min(var_18, 2147483647));
        var_19 += (~(~60265));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = (arr_0 [16]);
        arr_5 [i_1] = (((((-((max(var_9, 1)))))) || ((max(var_11, (12629 | var_0))))));
        arr_6 [1] [i_1] &= var_4;
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        arr_11 [i_2 - 1] [i_2] = ((~((var_6 ? (arr_0 [i_2 + 1]) : 18446744073709551615))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_21 &= (max(((((((arr_12 [i_2] [i_2] [i_4]) ? var_3 : var_7))) ? (~var_0) : ((367 ? var_1 : var_8)))), ((((arr_12 [i_2 + 1] [i_2] [i_3]) ? (arr_12 [i_2] [i_3] [i_4]) : var_4)))));
                    arr_16 [i_2] [i_3] = (((((((max(12629, 0))) ? (arr_14 [i_2 - 1] [1] [i_4] [i_4]) : (((var_10 && (arr_14 [i_4] [i_4] [i_4] [i_4]))))))) ? (((!(!var_11)))) : (!65162)));
                    arr_17 [i_2] [i_3] [i_3] = (-1 + -2147483647);
                    arr_18 [i_2] [i_2] = (arr_7 [i_3] [i_2]);
                    arr_19 [i_2] [i_3] [i_3] [i_2] = (~(max((((-(arr_7 [i_2] [i_2])))), (arr_9 [i_4] [1]))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_22 *= (((arr_20 [i_5]) ? var_10 : (arr_20 [i_5])));
        arr_23 [i_5] = 1;
        arr_24 [i_5] = (arr_21 [i_5] [i_5]);
    }
    /* LoopNest 3 */
    for (int i_6 = 3; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                {
                    arr_32 [i_6 - 2] [i_8] = (((arr_0 [14]) && var_8));
                    var_23 = var_8;
                    var_24 = 15;
                }
            }
        }
    }
    var_25 = ((~((5277 ? (var_9 && var_9) : var_12))));
    #pragma endscop
}
