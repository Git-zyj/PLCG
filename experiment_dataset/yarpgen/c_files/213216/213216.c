/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 = ((~(arr_0 [i_0 - 1])));
        arr_3 [10] |= 67076096;
        var_19 += (max((arr_0 [i_0 - 1]), (max(var_1, (arr_0 [i_0 - 1])))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_20 = var_10;

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_11 [i_1] [i_2] = ((min((arr_8 [i_1] [i_1 - 1] [i_2]), var_12)));
            arr_12 [i_1] [i_2] [i_2 - 1] = (((((-50090749 ? -141938639 : (arr_6 [i_1] [2])))) ? (arr_6 [1] [i_2 - 1]) : ((50090749 ^ (17293822569102704640 ^ 50090736)))));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_21 = (max(var_21, (((((((((17293822569102704640 ? (arr_15 [i_1]) : -117567718))) ? var_13 : (arr_10 [i_1 - 1] [i_1])))) ? (max((var_10 < 3758096384), (min(-117567718, (arr_15 [i_1 - 1]))))) : (((arr_15 [i_1]) | (min(var_15, (arr_9 [i_1]))))))))));
            arr_17 [i_1] [i_1] [i_1] = (((2574783028859822295 > var_16) != ((~(((arr_5 [i_1 - 1]) & (arr_13 [i_1 - 1] [i_3] [i_1 - 1])))))));
            var_22 = (arr_8 [i_1] [i_1] [i_3]);
            var_23 = (arr_16 [i_1] [6]);
        }
    }
    #pragma endscop
}
