/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_14 ^= (((arr_0 [i_0] [i_0 - 2]) < (arr_0 [i_0] [i_0])));

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            var_15 = ((((((-(arr_1 [i_0])))) ? -1 : -8499308966543752887)));
            arr_4 [i_0] [i_0] [i_0] = 1;
            var_16 = (min(var_16, (arr_0 [i_0] [i_1])));
        }
        arr_5 [i_0] = (min((arr_0 [i_0] [i_0]), ((~(arr_0 [i_0] [i_0 - 1])))));
        var_17 = (((max(var_8, 255))));
        var_18 ^= 35948;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_8 [i_2] [i_2] &= (((((-(arr_6 [i_2] [i_2])))) ? (min(((((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_7 [i_2])))), 3554953089)) : (((((arr_7 [i_2]) >= (arr_7 [i_2])))))));
        arr_9 [i_2] |= (((~740014206) ? (arr_7 [i_2]) : (arr_6 [i_2] [i_2])));
    }
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        var_19 = (min(var_19, (arr_13 [i_3 - 1] [i_3])));
        arr_14 [i_3] = 740014226;
        var_20 = max((min((min(531285011, (arr_6 [i_3] [i_3]))), (arr_10 [i_3 - 1]))), (((!(((3554953089 ? 1 : 8717705354495277292)))))));
    }
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        arr_18 [0] [i_4] |= var_10;
        var_21 = (min(var_21, (((var_0 + 9223372036854775807) >> (((~78) + 119))))));
    }
    var_22 = var_11;
    var_23 = (max(var_23, 3554953070));
    var_24 = (min(var_24, ((((var_9 ? var_9 : var_9))))));
    #pragma endscop
}
