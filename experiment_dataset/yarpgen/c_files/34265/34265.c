/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [12] [12] = (((arr_1 [i_0]) ? ((((min(var_1, (arr_0 [i_0])))) ? var_11 : (arr_1 [i_0]))) : (((max((arr_0 [i_0]), 15340)) / (arr_0 [i_0])))));
        var_13 += ((73 ? (min(((var_2 ? var_10 : var_2)), var_5)) : var_6));
        var_14 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_15 = (((127 ? (arr_0 [i_1]) : (arr_0 [i_1]))));
        var_16 = ((((min((arr_3 [i_1]), var_4))) >> (arr_6 [1] [i_1])));
        var_17 = (max(var_17, (max(((-((var_8 ? 1 : var_10)))), ((-20662 ? ((-(arr_6 [i_1] [i_1]))) : (arr_1 [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((((~(arr_3 [i_2])))) ? ((((max(-12848, var_8))) ? -1 : (arr_8 [i_2]))) : (arr_8 [i_2]));
        var_18 = ((((min(var_2, ((var_4 ? (arr_1 [i_2]) : var_2))))) ? (((arr_5 [i_2]) ? (arr_8 [i_2]) : var_11)) : (((arr_6 [i_2] [i_2]) * (arr_7 [i_2] [i_2])))));
        var_19 = (min(var_6, (arr_6 [i_2] [i_2])));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_20 -= ((((((var_5 ? (arr_12 [i_3]) : (arr_4 [i_3])))) ? (arr_10 [i_3] [i_3]) : var_4)));
        var_21 |= (max(((var_0 ? (arr_11 [i_3]) : ((var_8 ? var_12 : var_9)))), (max(var_4, (~var_7)))));
        var_22 = (((var_10 / (arr_12 [i_3]))) * ((66 ? (arr_8 [i_3]) : (arr_5 [i_3]))));
        var_23 = (arr_7 [i_3] [i_3]);
    }
    var_24 = -1870214701;
    var_25 = var_8;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                var_26 = arr_17 [i_4] [i_4];

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_21 [i_6] [i_5] [11] = var_7;
                    var_27 *= (arr_15 [i_5]);
                    var_28 = (arr_13 [i_6]);
                }
                var_29 = var_7;
                var_30 |= (arr_20 [i_4] [i_4] [10] [i_5]);
                var_31 = ((73 ? (((arr_13 [i_4]) >> (((arr_13 [i_4]) - 14378835643820167323)))) : 15462449072925722842));
            }
        }
    }
    #pragma endscop
}
