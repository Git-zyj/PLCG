/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 28552;
        arr_3 [i_0] = 18872;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (~(max(((2620021862 ? -18873 : -5354)), 97)));
        var_16 = -var_2;
        var_17 = 18882;
    }
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        var_18 = var_3;
        arr_10 [i_2] [i_2] = 0;
        var_19 = (max(var_19, 194));
        var_20 = (min(((max((max(643513366, 18882)), (((112 ? var_3 : 1)))))), (min(4294967295, var_5))));
    }
    var_21 += max((((var_11 ? 0 : 112))), ((max(var_3, ((2650864682 ? 18894 : 18900))))));
    #pragma endscop
}
