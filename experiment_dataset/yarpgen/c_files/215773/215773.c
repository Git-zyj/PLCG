/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_14 = (max(var_4, ((0 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_2 [i_0] = ((-(max(0, (arr_0 [i_0])))));
        var_15 = (max(var_15, ((((((~(arr_1 [4])))) ? (((arr_1 [8]) ? -1 : 0)) : ((((((var_7 ? -690094077 : (arr_0 [6])))) ? (arr_1 [2]) : var_3))))))));
        var_16 = (max(var_16, (((!(!-var_7))))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_17 = ((~((var_9 ^ (var_1 - var_13)))));
        var_18 = ((~(((arr_1 [2]) ? (arr_1 [1]) : var_10))));
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        arr_9 [i_2] = (!var_7);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        arr_16 [i_5] [i_4] = ((((((26 << (arr_7 [i_2 + 2])))) ? (arr_13 [i_5] [i_5] [i_5]) : -9223372036854775805)));
                        arr_17 [15] = (((((((-(arr_10 [i_2] [i_2] [i_2])))) && var_6)) ? (max(((((arr_13 [i_2 - 1] [i_2] [i_2]) || (arr_8 [i_3] [i_5])))), ((var_7 ? (arr_12 [i_5] [12] [i_3] [12]) : -6198609183759643196)))) : (((((-1 ? var_13 : var_12))) ? (~-1) : var_8))));
                    }
                }
            }
        }
    }
    var_19 = var_2;
    #pragma endscop
}
