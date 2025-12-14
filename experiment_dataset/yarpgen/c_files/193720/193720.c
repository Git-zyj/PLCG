/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_4 [i_0] = (max(((((-1486782223 > 510104804) == (((arr_2 [i_0]) ? var_9 : (arr_3 [i_0])))))), (max((510104809 >= var_1), -2147483647))));
        arr_5 [i_0] = (max((max(((((arr_0 [i_0] [i_0]) != (arr_2 [i_0])))), 2147483647)), ((-0 ? ((1904545989 / (arr_3 [i_0]))) : (((!(arr_1 [i_0] [i_0]))))))));
        arr_6 [i_0] [i_0] = (~var_10);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_11 [i_1] = (((arr_8 [i_1] [i_1]) + (-2147483647 - 1)));
        var_11 = (min(var_11, (min((arr_7 [i_1]), ((var_5 ? (22 || var_8) : 2117377239))))));

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_12 *= 2147483629;
            arr_15 [i_1] [i_1] = (((510104802 * (arr_13 [i_2] [1]))) == (((arr_0 [i_2] [i_2]) ? var_5 : 4095)));
        }
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        arr_19 [i_3] = (max((~1428792670), var_4));
        arr_20 [i_3] = (-((~(arr_18 [i_3] [i_3]))));
        arr_21 [i_3] = ((arr_13 [6] [i_3 + 2]) ? (4106164271 > var_1) : (arr_7 [i_3 + 2]));
    }
    var_13 = 510104802;
    var_14 = var_5;
    #pragma endscop
}
