/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_12;
    var_21 = -var_5;

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_22 = var_10;
        var_23 = ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0 + 2]))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_24 &= ((((var_17 ? ((var_16 | (arr_2 [i_1]))) : (arr_3 [i_1 + 1]))) << (((17592186042368 & 9223372036854775807) - 17592186042368))));
        arr_5 [i_1 + 1] = (arr_1 [2] [i_1 - 1]);
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_25 = (max(var_25, (((arr_8 [i_2] [i_2]) ? (((((!var_5) && (arr_8 [i_2] [i_2]))))) : (min(var_7, -1317349477626659315))))));
        arr_9 [i_2] = (((arr_8 [i_2] [i_2]) ? (((!var_10) - ((2114553808200210157 ? 11852843065871760624 : 9223372036854775807)))) : (((arr_8 [i_2] [i_2]) | var_15))));
        arr_10 [2] &= var_16;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_26 = (((arr_6 [i_3]) == (arr_6 [i_3])));
        var_27 = (((arr_12 [i_3] [i_3]) * (arr_12 [i_3] [i_3])));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_28 = (11 ^ 1788705185480943780);
        arr_18 [i_4] = ((!(!var_10)));
    }
    #pragma endscop
}
