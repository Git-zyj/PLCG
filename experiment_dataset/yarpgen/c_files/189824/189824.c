/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = arr_0 [i_0];
        var_16 += arr_0 [6];
        var_17 = (((arr_0 [i_0]) ? -1636007565 : (((((arr_0 [i_0]) || 4436054664253837976))))));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_18 = ((((max(var_8, (arr_4 [i_1 + 3])))) ? (arr_3 [4] [4]) : (max((((arr_4 [0]) ? var_1 : (arr_4 [i_1]))), var_0))));
        arr_5 [i_1] [i_1 - 1] = -1993042536;
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                {
                    arr_13 [i_4] [i_2] [i_4] [i_4] = var_11;
                    var_19 = var_8;
                }
            }
        }
        var_20 |= 1231059192;
        var_21 = 1830750957;
    }
    for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_16 [i_5 - 1] [i_5] = (max(30047, ((var_7 ? (((arr_11 [i_5]) ? 5294339494849526918 : 3858271097)) : (((var_1 ? var_13 : -2655)))))));
        arr_17 [i_5] = (max(((max(((max(var_10, 2655))), var_7))), var_13));
        var_22 = var_4;
    }
    var_23 = var_5;
    #pragma endscop
}
