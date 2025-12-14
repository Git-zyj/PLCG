/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 ^= max(4253326725, 0);
        var_18 = (max(var_18, ((((max(-60, -67108864))) ? (arr_0 [1] [i_0]) : 134216704))));
        var_19 = (max(59520438, (max(4294967295, -1467749246))));
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_20 = (max(var_20, (arr_0 [i_1 - 2] [i_1 - 2])));
        var_21 &= ((max((((!(arr_2 [i_1 - 2] [i_1 + 1])))), (((arr_0 [6] [i_1]) ? (arr_1 [i_1]) : (arr_0 [i_1] [i_1]))))));

        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            var_22 &= var_0;
            var_23 *= (((((14887220277591680811 ? 1 : (max(538846188890205506, 42408))))) ? -1094563691 : (max(18446744073709551609, 70368744177656))));
        }
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            var_24 = ((max(var_4, (arr_7 [i_3] [i_3] [i_1]))) | (((-127 - 1) ? ((0 ? 42 : 25824)) : (arr_4 [i_3]))));
            var_25 = (max(var_25, (max((((arr_6 [i_3 + 1] [i_3]) ? (((arr_3 [7]) ? 178 : 1735936206)) : ((((arr_3 [i_3]) ? var_15 : 134216704))))), (((~(arr_5 [i_1] [i_1 + 2] [i_3 - 1]))))))));
        }
    }
    for (int i_4 = 3; i_4 < 10;i_4 += 1)
    {
        var_26 = (max(var_26, ((134216701 ? -28 : 8148))));

        for (int i_5 = 4; i_5 < 10;i_5 += 1)
        {
            var_27 -= (((((var_16 ? (max(var_15, var_6)) : (max(-333057785, 3871941792))))) || ((max(var_1, ((58 ? var_9 : (arr_11 [i_4 - 1]))))))));
            var_28 = (arr_9 [i_5 - 2]);
        }
    }
    var_29 = (max(var_29, 3571443153));
    #pragma endscop
}
