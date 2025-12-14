/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((!-769814791107265289) && var_4));
        arr_3 [i_0] = (((((81 ? -8663713658957092275 : 0))) || (0 || -86)));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_12 = (min(var_12, (-1152507156 <= 0)));
        var_13 += ((max(-108, var_7)));
        var_14 = (((-((-1 ? (arr_4 [i_1] [i_1]) : 255)))));
    }
    for (int i_2 = 4; i_2 < 23;i_2 += 1)
    {
        arr_8 [i_2] = (min(((((max(var_4, (arr_7 [i_2])))) & (min(var_0, 352082827)))), ((((arr_6 [i_2] [2]) ? var_0 : (((arr_7 [i_2]) & (arr_6 [i_2] [i_2]))))))));
        arr_9 [i_2] = (arr_7 [i_2]);
    }
    var_15 = var_7;
    var_16 &= var_6;
    #pragma endscop
}
