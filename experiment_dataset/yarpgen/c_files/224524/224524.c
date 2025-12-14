/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_2;
    var_18 = 0;
    var_19 = (!var_1);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = (max(var_20, 8792905463156007398));
        var_21 = ((((max(-26733, 1636710906121217643))) | (((((!(arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_22 ^= (((arr_3 [i_1]) << (((arr_3 [i_1]) - 1155505530))));
        arr_4 [i_1] = (((((1636710906121217643 ? var_3 : var_5))) & (arr_3 [i_1])));
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        var_23 = 16810033167588333978;
        var_24 = (max(var_24, (((-(((-(arr_8 [20])))))))));
    }
    #pragma endscop
}
