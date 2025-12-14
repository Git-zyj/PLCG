/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_5 || ((max(var_0, var_17)))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = var_6;
        arr_3 [i_0] = var_7;
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] = (arr_4 [i_1 + 1]);
        var_19 = ((-0 ? (~var_1) : (((arr_5 [i_1 - 1] [i_1 - 1]) ^ (arr_5 [i_1 + 1] [i_1 + 1])))));
        var_20 = ((-var_14 > (arr_5 [i_1] [i_1 + 1])));
        arr_7 [i_1] [i_1 + 1] = var_14;
    }
    var_21 = (min(var_21, 1));

    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_22 &= (arr_9 [i_2]);
        var_23 = (max((arr_9 [i_2]), (((arr_9 [i_2]) ^ (arr_9 [i_2])))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        var_24 &= var_10;
        var_25 = (15492169096333048813 % 15492169096333048790);
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        arr_16 [i_4] [i_4] = (((15492169096333048813 ? -var_14 : var_17)));
        var_26 = (((((~(max(2954574977376502834, var_16))))) ? var_5 : ((((~(arr_9 [i_4])))))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_27 = -var_11;
                    arr_23 [i_5] [i_6 + 2] [i_5] = (((-7131268955234697975 ? -548663965246170693 : var_11)));
                    arr_24 [8] &= (((~15492169096333048790) ? -var_9 : (arr_10 [i_6] [i_6])));
                }
            }
        }
        var_28 = var_5;
        var_29 = (arr_20 [7] [i_5]);
    }
    var_30 = var_0;
    #pragma endscop
}
