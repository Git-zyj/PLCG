/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = (((arr_2 [i_0]) ? (((arr_2 [i_0]) ? 32766 : (arr_2 [i_0]))) : (((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0])))));
        arr_4 [i_0] = (((32767 ? -1 : 0)));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_12 = ((-((((12969306294331318848 < (arr_0 [i_1])))))));
        arr_7 [i_1] = (!12969306294331318867);
        var_13 = ((+(((arr_3 [i_1]) ? (arr_5 [i_1] [i_1]) : 5477437779378232752))));
        arr_8 [i_1] = (((((~(~4094)))) ? (((~((min(var_10, var_9)))))) : (((arr_1 [i_1] [i_1]) ^ (arr_1 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_12 [i_2] = (((!(arr_3 [i_2]))));
        var_14 = ((arr_1 [i_2] [i_2]) > (arr_10 [i_2]));
        var_15 = ((var_2 != (arr_10 [i_2])));
        var_16 = (arr_2 [i_2]);
    }
    var_17 = var_2;
    #pragma endscop
}
