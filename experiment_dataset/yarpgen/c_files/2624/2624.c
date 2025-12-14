/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_17 = ((min((arr_1 [9]), (((-3670319515593299695 ? 0 : 119))))));
        var_18 = (((((~(arr_0 [7] [i_0]))) % ((277453109 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_19 = (((((-(((arr_2 [i_1] [i_1]) - (arr_3 [i_1 - 2])))))) ? ((((min((arr_2 [i_1 + 2] [i_1 + 2]), -842294922))) ? (((24 & (arr_3 [i_1])))) : (((arr_3 [i_1 - 1]) ? 0 : (arr_2 [i_1] [i_1]))))) : (1 <= 1)));
        arr_4 [i_1] = (arr_3 [i_1]);
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_10 [i_3] = (((-(((arr_5 [i_3]) ? (arr_8 [i_3]) : 15)))));
            var_20 = ((2 ? 8 : (min((~82), (32767 ^ 7)))));
            arr_11 [i_3] [i_3] = (arr_8 [i_3]);
            var_21 = (max(((((arr_6 [i_3]) ? (arr_6 [i_2]) : (arr_6 [i_2])))), (min((arr_6 [i_3]), (((arr_5 [i_2]) ? (arr_9 [i_2] [i_3] [i_2]) : (arr_5 [i_3])))))));
        }
        arr_12 [i_2] = ((((((1 << (18446744073709551615 - 18446744073709551595)))) ? 14870595223254333040 : 4022406055)));
    }

    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_22 = 7522;
            arr_18 [i_4] [i_4] = (((arr_13 [i_4]) || (28289 | 8034068438810894388)));
            arr_19 [i_4 - 1] [i_4] = (min((arr_17 [i_4 + 1] [i_4] [i_4 - 1]), (((arr_15 [i_4] [i_4 + 1]) - (arr_15 [18] [i_4 - 1])))));
        }
        arr_20 [i_4] = (((((arr_3 [i_4]) ? (max(1, -13)) : (((~(arr_15 [i_4 + 1] [13])))))) <= (arr_3 [i_4 + 1])));
        arr_21 [i_4] [i_4] = -699368706;
    }
    var_23 = (var_12 != (max((var_7 / var_4), var_7)));
    #pragma endscop
}
