/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (max((arr_0 [i_0]), (((((min(65529, 1))) > ((1 ? var_4 : 1)))))));
        arr_3 [i_0] = var_5;
        arr_4 [i_0] [i_0] = (arr_1 [i_0]);
        arr_5 [7] = (max(((((((!(arr_0 [i_0]))))) % (arr_0 [i_0]))), (35747322042253312 / 939524096)));
    }
    var_17 = (max(var_17, var_14));
    #pragma endscop
}
