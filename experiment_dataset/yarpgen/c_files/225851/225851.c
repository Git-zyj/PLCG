/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((!var_4) && var_13));
    var_20 = (max((((var_0 != var_13) ? (var_16 >= var_15) : (min(var_14, var_7)))), ((max((max(180, 44138)), ((max(var_4, var_7))))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (((var_4 - (0 + 17))))));
        var_22 = (-9223372036854775807 - 1);
        var_23 = ((arr_0 [i_0]) ? var_0 : (arr_0 [i_0]));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_24 *= ((!(((((!(arr_0 [16]))))))));
        var_25 = (max(2061015385, 1));
        var_26 &= (arr_2 [i_1 - 1]);
        var_27 -= var_5;
    }
    for (int i_2 = 4; i_2 < 23;i_2 += 1)
    {
        var_28 = (max(var_28, ((((arr_6 [i_2 - 4]) ? (((max(var_4, (arr_6 [i_2 - 4]))))) : (arr_5 [i_2 + 1] [i_2 - 4]))))));
        var_29 = ((+(min(var_13, ((18 ? (arr_4 [i_2 - 3] [i_2]) : (arr_6 [i_2 - 2])))))));
    }
    var_30 ^= var_14;
    #pragma endscop
}
