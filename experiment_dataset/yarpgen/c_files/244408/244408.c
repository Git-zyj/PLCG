/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = max((arr_1 [i_0]), (663985831 / 116));
        var_17 = (((-4 / -663985834) >> (((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) + 75))));
        arr_2 [i_0] = ((var_12 + (arr_1 [i_0])));
        var_18 = ((((min((!var_0), var_9))) ? (!var_1) : (max(var_8, (((arr_1 [i_0]) ? var_4 : var_11))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = ((!((min(var_2, (arr_4 [i_2 + 1] [i_3 - 1]))))));
                    arr_10 [i_1] [i_1] [i_1] [i_1] = ((((max(1125899906842616, ((var_0 ? (arr_6 [i_1]) : -30843))))) ? (max(663985829, var_3)) : (arr_5 [i_1])));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_19 = ((~((max((arr_11 [i_4]), (arr_11 [i_4]))))));
        var_20 = ((var_15 ? (max(var_15, (((2 ? var_13 : 390332076))))) : -169279713));
        var_21 &= var_9;
    }
    var_22 = (var_13 || var_7);
    #pragma endscop
}
