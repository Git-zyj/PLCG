/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (var_2 <= 547902570)));
    var_14 = ((((-(min(var_6, -179110518)))) >= var_8));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-var_4 ? (max((min((arr_0 [i_0]), (arr_0 [i_0]))), (arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])));
        var_15 = ((var_3 ? ((((arr_1 [i_0] [i_0]) != 179110499))) : var_1));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_16 = (min(var_16, ((+(((arr_1 [i_0] [i_0]) ? var_5 : (arr_0 [i_1])))))));
            var_17 = ((!(arr_1 [i_0] [i_1])));
            var_18 = (12026228966368724110 - 6185);
        }
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_7 [2] [2] = (((arr_6 [i_2] [i_2]) ? ((((max((arr_1 [i_2] [i_2]), (arr_3 [i_2] [i_2])))) ? (arr_5 [i_2]) : (max(124, var_5)))) : ((((min(var_12, -126117199)) / ((var_10 ? (arr_1 [i_2] [i_2]) : var_11)))))));
        var_19 -= (max((((-935039463 ? (arr_4 [i_2] [i_2] [i_2]) : (min(var_9, (arr_1 [12] [i_2])))))), (((arr_1 [i_2] [i_2]) / 12444818079372958336))));
        arr_8 [i_2] [i_2] = var_11;
    }
    var_20 = var_10;
    var_21 = ((var_11 ? -1291460496 : (((((var_5 ? 62576 : var_6))) ? ((var_11 ? var_7 : -1291460517)) : (var_12 && var_1)))));
    #pragma endscop
}
