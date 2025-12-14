/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((+(((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
        arr_4 [i_0] = (29 % var_11);
        var_12 += (arr_0 [i_0 - 1] [6]);
        var_13 = (min(var_13, ((max((((arr_2 [6]) ? ((34971 ? var_7 : var_5)) : var_1)), var_7)))));
        arr_5 [i_0] = (65522 && 251);
    }
    var_14 = (min(-2147483640, 18446744073709551600));
    var_15 = (-8424388083763134907 - 1011036457);
    var_16 = (((min(var_2, 1) / var_2)));

    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((var_3 ? ((min(1, 3435653081094367102))) : (((((-(arr_7 [i_1])))) ? ((var_9 ? var_7 : (arr_6 [13] [i_1]))) : (((var_8 + (arr_7 [i_1]))))))));
        var_17 = ((-var_2 ? (((((var_8 | var_2) >= (arr_7 [i_1]))))) : (arr_6 [i_1] [i_1])));
        var_18 = ((((((arr_7 [i_1]) ? (((min(var_10, 1)))) : ((~(arr_7 [i_1])))))) <= (((arr_7 [i_1]) ? var_7 : (arr_7 [i_1])))));
        var_19 = var_5;
    }
    for (int i_2 = 3; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = (~1);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_22 [i_2] [i_3] [i_2] [i_5] = ((~((var_5 ? (arr_21 [i_2] [i_2] [i_2 - 1] [i_4 + 1]) : (arr_16 [i_4 - 1])))));
                        var_20 = (arr_21 [i_2] [i_3] [i_4] [i_5]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
