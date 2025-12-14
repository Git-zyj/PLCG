/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = ((((((arr_0 [i_0]) ? var_3 : (arr_0 [i_0])))) ? ((min((arr_0 [i_0]), -14))) : ((((max((arr_1 [i_0] [i_0]), -14))) ? (arr_1 [i_0] [i_0]) : (var_2 <= 6)))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] = var_1;
                        var_11 = (((((var_3 ? (arr_2 [i_2 + 2]) : ((max(19, (-127 - 1))))))) ? (!6) : -10256793047946711085));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = (max((arr_1 [i_0] [i_0]), (((arr_0 [i_0]) ? var_9 : (arr_3 [i_0] [i_0] [i_0])))));
        var_12 = (min(((((min(var_7, var_6))) ? (arr_2 [i_0]) : var_1)), (((((arr_1 [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : var_9)) >> 6))));
        arr_13 [i_0] = (arr_7 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_13 = (!-1);
                        var_14 = (((((var_9 >> (((~120) + 122))))) ? var_0 : (arr_21 [i_6 + 2] [i_6 + 1] [i_6 + 1] [i_6 + 1])));
                    }
                }
            }
        }
        arr_22 [i_4] = (min((max(((var_4 / (arr_17 [i_4]))), ((40760 >> (-1 + 17))))), ((~(arr_17 [i_4])))));
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
    {
        var_15 = (min(var_15, ((~(min((5532 < 43160), (~var_4)))))));
        arr_26 [i_8] &= (arr_19 [i_8] [i_8]);
    }
    var_16 = (min(var_5, ((var_5 ? var_7 : var_6))));
    var_17 = -23837;
    var_18 = var_2;
    #pragma endscop
}
