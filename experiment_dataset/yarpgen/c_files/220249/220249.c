/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((var_14 ? ((max(0, 1))) : 2147483647)), (!var_11)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = ((~(arr_1 [i_0] [i_0])));
        var_20 = ((var_6 ? var_3 : (arr_0 [i_0])));
        var_21 = 0;
    }
    var_22 = ((var_8 ? var_2 : ((var_9 ? (!var_15) : ((1411854810 ? var_2 : var_5))))));

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_23 = (((max((arr_3 [i_1] [i_1]), var_2))) ? var_1 : ((min((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1])))));
        var_24 = ((((((arr_3 [i_1] [9]) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_1])))) ? ((~(arr_3 [i_1] [i_1]))) : ((var_17 ? var_0 : (arr_3 [i_1] [i_1])))));
        var_25 = (((max(1411854815, (arr_4 [i_1])))) ? ((~((max(1, var_12))))) : ((~(~2147483647))));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        var_26 = var_7;
                        arr_16 [i_2] = var_8;
                    }
                }
            }
        }
        var_27 = 2147483619;
        arr_17 [i_2] = (arr_8 [i_2]);

        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            arr_20 [i_2] = (arr_8 [i_6 - 1]);
            var_28 = (max(-283833705, (max(1411854810, -1597344522))));
            arr_21 [i_2] [i_6] [14] = ((((max((arr_12 [i_6] [i_6] [i_2]), (arr_2 [i_6 + 1])))) || (!var_10)));
        }
        var_29 = arr_7 [i_2];
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_28 [i_8] [i_8] = var_12;
                    var_30 = ((var_0 ? 2251549853112536305 : 2147483639));
                    arr_29 [i_9] [i_9] [i_9] = (arr_27 [i_7] [i_8] [i_8] [i_8]);
                    var_31 = (((var_6 >= (arr_23 [i_9]))));
                    arr_30 [i_7] [i_7] = ((~(arr_22 [i_8] [i_7])));
                }
            }
        }
        var_32 = (((arr_24 [i_7]) ? (!var_4) : var_16));
    }
    #pragma endscop
}
