/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 |= (min(1, (max((var_7 & var_4), -1194651012))));
        var_14 = ((var_0 > var_2) ? (((1194651040 ^ var_6) | (min(var_12, (arr_0 [i_0]))))) : (max((arr_1 [i_0]), var_7)));

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_15 = min(((((max(var_7, var_9))) ? var_8 : (((arr_5 [i_0] [i_0] [i_1]) ? -1194651012 : 1194651013)))), ((max(-66, -122))));
            arr_8 [i_0] [i_0] [i_1 + 1] = ((!(((-601586485 | ((var_9 ? var_0 : (arr_7 [i_0] [i_1 - 2] [i_1]))))))));
            arr_9 [i_0] [i_0] [i_0] = (((max((arr_4 [i_1 - 2] [i_1 - 2]), (arr_4 [i_0] [i_1 - 2])))) ? (((arr_4 [i_0] [i_1 + 2]) % (arr_4 [2] [i_1 + 2]))) : (((1194651001 < (arr_4 [i_0] [i_1 - 2])))));
            var_16 = ((1 ? ((1049350995 ? -287405970 : 1194651009)) : ((~(arr_1 [i_0])))));
        }
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            var_17 = ((!(((var_9 ? (arr_4 [i_2 - 1] [i_2 - 2]) : var_7)))));
            var_18 = (((((-var_0 ? (arr_5 [i_0] [i_2 - 2] [i_0]) : var_11))) ? (max((arr_1 [i_2 - 2]), (arr_1 [i_2 - 1]))) : (((1194651002 << (((((((arr_11 [i_0] [i_2 - 2]) % -2086538746)) + 1087139981)) - 9)))))));
        }
    }
    for (int i_3 = 4; i_3 < 18;i_3 += 1)
    {
        var_19 = (max((max((arr_5 [i_3] [i_3] [i_3 + 1]), (arr_0 [i_3 + 1]))), ((max((arr_6 [7]), (arr_5 [i_3] [i_3] [i_3]))))));
        var_20 |= max((max((min((arr_13 [i_3] [i_3]), (arr_2 [i_3]))), ((min(1, var_3))))), (((arr_11 [i_3 + 1] [i_3]) ? (arr_14 [i_3 - 3]) : (arr_2 [i_3 - 4]))));
    }
    var_21 = (var_8 | -var_0);
    var_22 = ((min((~var_2), var_2)) + ((((1833272220 ? (-127 - 1) : -4194304)) % (-141715064 ^ 1194650988))));
    #pragma endscop
}
