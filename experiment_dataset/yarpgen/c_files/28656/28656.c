/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(((var_10 ? 0 : var_5)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = ((((max(var_3, 26))) % var_5));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = -var_8;
                    arr_8 [i_0] = (min((((-95 == ((((arr_5 [i_2] [i_1] [0]) / (arr_6 [i_2]))))))), (((arr_0 [i_2]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : ((((9503 > (arr_5 [i_0] [i_1] [i_1])))))))));
                    var_18 = (((arr_7 [i_0] [i_0] [i_1] [i_2]) ? (((arr_0 [i_0]) / (arr_5 [i_0] [i_2] [i_2]))) : (arr_0 [i_0])));
                    var_19 = ((~((max((max(9503, var_3)), -9503)))));
                    arr_9 [i_0] [1] [i_2] = (9492 > -9536);
                }
            }
        }
        arr_10 [i_0] = ((((max(-48, 9519))) | ((-48 ? -31 : 30))));
        arr_11 [15] = (((var_14 >> 31) ? ((-var_4 ? ((var_9 ? -9504 : (arr_6 [i_0]))) : (arr_0 [i_0]))) : var_4));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_20 = ((((min((((arr_14 [i_3]) ? 26881 : (arr_12 [2]))), var_14))) ? ((min((arr_12 [i_3]), (arr_12 [i_3])))) : var_11));
        var_21 = ((-9504 ? (((((var_4 ? (arr_12 [i_3]) : (arr_14 [i_3])))) ? ((-1855513185 ? var_14 : var_9)) : ((-(arr_14 [i_3]))))) : var_10));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_22 = (((((((max(17, var_9))) ? (((arr_14 [i_4]) ? -9504 : 1761907492)) : ((var_0 << (var_14 - 19918)))))) ? (arr_3 [i_4] [19] [i_4]) : 28));
        arr_17 [i_4] = ((((min(18446744073709551603, (((var_13 ? var_11 : 9501)))))) ? (((9514 - ((var_12 ? var_5 : var_6))))) : (max((arr_7 [3] [7] [i_4] [i_4]), (var_12 % var_10)))));
    }
    var_23 = var_10;

    /* vectorizable */
    for (int i_5 = 4; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_24 = ((!(((9528 ? var_3 : -25138)))));
        arr_22 [i_5] = (((arr_1 [i_5 - 1]) <= (arr_6 [i_5 + 1])));
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_25 = (max(var_25, var_4));
        var_26 = (max(var_26, ((((arr_21 [i_6 + 3] [i_6 + 2]) ? var_2 : (arr_18 [i_6 - 3]))))));
        var_27 = ((arr_1 [i_6]) + (arr_24 [i_6]));
        arr_26 [i_6 - 2] [i_6] = (arr_21 [i_6 + 2] [i_6 + 3]);
    }
    #pragma endscop
}
