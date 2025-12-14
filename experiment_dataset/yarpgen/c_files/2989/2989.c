/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= 0;
    var_19 = ((var_13 != (((!(((421747737 ? var_3 : var_11))))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = ((+(((((var_12 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? ((((arr_0 [i_0]) || (arr_1 [i_0])))) : ((var_10 ? (arr_0 [i_0]) : (arr_1 [i_0])))))));
        arr_2 [i_0] = 4403575764577516829;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_21 -= (arr_3 [10]);
        var_22 = (((arr_6 [i_1] [i_1]) * var_8));
        var_23 = (arr_3 [i_1]);
        var_24 = ((((((arr_6 [i_1] [i_1]) ? (arr_3 [i_1]) : (arr_6 [i_1] [i_1])))) ? (var_2 || var_7) : (arr_5 [22])));
        arr_7 [i_1] = 1;
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_25 = (arr_4 [i_2] [i_2]);
        arr_10 [i_2] [i_2] = (max((min(41542, 23991)), 23993));
    }
    var_26 = (min(var_26, (((var_2 ^ ((var_13 >> (var_0 - 19652))))))));
    #pragma endscop
}
