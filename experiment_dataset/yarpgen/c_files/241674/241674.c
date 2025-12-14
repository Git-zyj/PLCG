/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((var_7 == ((max(var_7, var_4)))))), (((16872424642564572454 / var_7) - (!var_6)))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_13 = (((arr_0 [i_0]) ? (((!((min(251658240, 11147946071575283760)))))) : (!var_4)));
        arr_3 [i_0] = (min((arr_1 [i_0 - 1] [i_0 + 1]), ((((arr_1 [i_0 - 1] [i_0 + 1]) && (arr_1 [i_0 + 1] [i_0 + 1]))))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = var_10;
        arr_8 [i_1] [i_1] = (!7298798002134267845);
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] &= (7298798002134267855 >> 63);
        var_14 = var_10;
        var_15 ^= (((!((max((arr_5 [i_2 - 1] [i_2 - 1]), var_1))))));
        arr_12 [i_2] [i_2] = (((arr_2 [i_2 + 2] [i_2]) - (((((arr_10 [16]) - var_5)) - (arr_4 [i_2] [i_2 + 2])))));
        var_16 = var_6;
    }
    #pragma endscop
}
