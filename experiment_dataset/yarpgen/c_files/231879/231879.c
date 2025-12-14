/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_11 = (max(var_11, (((1 ? var_3 : (arr_0 [19]))))));
        arr_3 [i_0 + 4] &= ((-1876042980 ? 1212791210 : 251));
        var_12 = (max(var_12, (((-var_2 ? (~2878309864) : var_10)))));
        var_13 = (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1] = (max(var_10, var_5));
        var_14 = ((var_4 ? ((((min(var_5, var_10))) ? (!1) : 3082176085)) : var_1));
    }
    for (int i_2 = 2; i_2 < 7;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 7;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 8;i_4 += 1)
            {
                {
                    arr_16 [i_3] [i_3] [i_3] = var_6;
                    var_15 = (max(((((((arr_14 [i_2] [5] [i_3 - 1] [i_4]) ? (arr_7 [i_2 - 2] [i_3 - 3]) : (arr_10 [4]))) < var_8))), (((((var_3 ? 44070 : var_5))) ? ((var_4 ? var_1 : var_6)) : (((max(var_5, (arr_5 [i_2 + 2])))))))));
                }
            }
        }
        arr_17 [i_2] = ((~(max(var_6, (arr_7 [i_2 - 2] [i_2])))));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 6;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                {
                    var_16 = (max(var_16, ((max((((!((max(1, var_6)))))), (((var_3 + var_4) ? (var_6 != var_2) : ((min(var_2, var_7))))))))));
                    var_17 += var_3;
                }
            }
        }

        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            arr_25 [i_7 - 1] [1] [0] = (max((((!(((arr_15 [i_2] [i_2] [i_7 + 1]) && (arr_20 [i_2 + 1] [2])))))), ((~(arr_2 [i_2 + 2] [i_7])))));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_18 = 1416657419;
                            arr_32 [i_2] [i_8] = (max((((min(var_10, 1)))), (arr_31 [i_2 - 1] [1] [i_8] [i_9])));
                        }
                    }
                }
            }
        }
        arr_33 [3] = (min(var_7, (max(var_1, (arr_4 [i_2 + 2] [i_2 - 2])))));
    }
    /* LoopNest 3 */
    for (int i_11 = 4; i_11 < 14;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                {
                    arr_44 [i_12] [i_12 + 1] [i_13] = -116;
                    var_19 = (min(var_8, (((-(max(1212791218, var_0)))))));
                }
            }
        }
    }
    var_20 = var_1;
    var_21 = (max(-60, ((var_6 ? 3082176055 : (var_6 ^ var_2)))));
    #pragma endscop
}
