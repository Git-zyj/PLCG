/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 26709));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 -= (arr_1 [i_0] [7]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_1] = (min((arr_5 [i_1] [i_1]), ((262154536 ? var_2 : (-2147483647 - 1)))));
                    var_14 = (min(129, ((((1 != (arr_4 [i_1] [i_1] [i_1]))) ? (min(18, -1782553823443816140)) : ((min(1894011693, 1894011694)))))));
                    var_15 = 1894011672;
                    arr_7 [i_1] [i_2 - 3] = (+-10092);
                    arr_8 [i_0] [i_1] [i_0] = ((1894011682 ? 1894011697 : 20238));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_16 = (min(var_16, (((10092 ? 2400955599 : var_0)))));
        var_17 += ((0 ? var_0 : 2400955602));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_18 = ((57554 ? (((~2857756644) ? var_5 : ((-5311613035050782483 - (arr_10 [i_4] [i_4]))))) : (((min(1, (arr_13 [1] [i_4])))))));
        var_19 += ((var_8 ? ((((!-5311613035050782476) ? (5311613035050782483 >= 1) : var_10))) : (((((4356121986507307457 ^ (arr_13 [i_4] [3])))) ? ((var_11 ? (arr_12 [i_4]) : 88)) : (arr_11 [i_4])))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_20 = arr_15 [i_5] [i_5];
        arr_16 [i_5] &= ((((((arr_14 [i_5] [i_5]) ? (arr_13 [i_5] [i_5]) : 10092))) ? 1 : -var_6));
        var_21 = (((arr_15 [i_5] [i_5]) ? (arr_15 [i_5] [i_5]) : -21));
        var_22 = (max(var_22, var_11));
    }
    var_23 ^= -7710;
    #pragma endscop
}
