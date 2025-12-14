/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = ((158 ? 2192630885 : (~2102336411)));
        var_13 = var_1;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_14 = (min(var_14, (((!(((3573036912 & (arr_3 [i_0] [i_1])))))))));
            arr_5 [2] [i_0] [i_0] &= (arr_0 [i_1]);
            arr_6 [i_0] [i_0] [i_0] = (max((((arr_4 [i_1] [i_1] [i_1]) / (arr_0 [i_0]))), ((((arr_0 [i_1]) <= (arr_0 [i_0]))))));
        }
        var_15 |= (~2102336410);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_10 [8] |= (1 ? 65535 : 65532);
        var_16 = (max(var_16, (65535 >= 65535)));
    }
    var_17 = (min(var_17, ((((((1 ? var_11 : var_5))) ? (max(10010168765703367038, var_8)) : var_10)))));
    var_18 = (min(var_18, (((((min((min(2192630891, var_1)), var_8))) ? var_7 : (var_11 | var_3))))));
    #pragma endscop
}
