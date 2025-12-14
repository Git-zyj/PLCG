/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_12 = (((var_4 ? var_4 : (var_5 || var_6))));
        var_13 -= (1 > 1815664062);
        var_14 &= var_9;
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_15 &= (((max(1, (arr_4 [i_1 + 2]))) / ((((72057594037925888 ^ (arr_0 [i_1])))))));
        var_16 = (1453875996 ^ var_1);
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
    {
        var_17 = (((((arr_6 [i_2] [i_2 + 1]) - (arr_6 [i_2 - 1] [i_2 - 1])))) || (((var_4 ? (1261431784 - 1) : var_4))));
        var_18 = (max(var_18, var_1));
    }

    /* vectorizable */
    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {
        var_19 = (max(var_19, ((((!var_8) || var_7)))));
        var_20 ^= (~-1);
        arr_11 [1] = (((var_0 == var_2) - var_10));
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        var_21 = var_5;
                        var_22 &= ((var_0 % (((arr_16 [i_3] [i_4] [i_5 - 2] [i_5 - 2]) / 1))));
                        var_23 = (max(var_23, (arr_19 [i_6] [i_4] [12] [13])));
                        arr_20 [i_4] [i_3] [1] [13] [i_6] = (((arr_15 [i_4] [i_4]) > var_4));
                    }
                }
            }
        }
    }
    var_24 = var_8;

    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_25 &= 13771627869827265805;
        var_26 = (min(var_26, (((var_3 ? (min((arr_22 [i_7]), (arr_22 [i_7]))) : -24797)))));
        var_27 = var_7;
    }
    #pragma endscop
}
