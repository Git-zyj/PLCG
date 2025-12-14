/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [7] = (min(((1 ? var_16 : (arr_1 [i_0]))), (((2622127617 | (((min((arr_0 [i_0]), var_8)))))))));
        var_18 ^= ((var_0 ? (~-18331) : -var_1));
    }

    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_19 = ((!((((max(18320, 58066))) <= 18329))));
        var_20 = (max(var_20, 18331));
        var_21 = (min((arr_7 [i_1]), (arr_4 [i_1] [1])));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_22 = (min(var_22, (arr_5 [i_2 + 2] [21])));
        arr_10 [i_2] [i_2 + 1] = ((((((arr_2 [i_2]) ? var_5 : (arr_2 [i_2]))))) ? (min((arr_9 [i_2 + 2] [i_2 + 2]), (((32767 ? (arr_7 [i_2]) : -1))))) : ((max((min((arr_2 [i_2]), var_0)), (arr_6 [i_2])))));
        arr_11 [i_2 + 2] = 14336;
        var_23 = (((((((min(1, 32767))) ? (arr_6 [10]) : (((min(1, 1))))))) ? (arr_2 [i_2 - 1]) : (((min(216, 0))))));
    }
    #pragma endscop
}
