/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_10 = (arr_1 [i_0 - 1] [i_0 + 1]);
        arr_3 [i_0] = 12554;
    }

    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_11 = ((+((min((arr_7 [2] [i_1]), (arr_7 [i_1] [i_1]))))));
        arr_8 [i_1] = 1;
        var_12 = ((+(min(((max((arr_7 [i_1] [i_1]), var_9))), (min(var_1, 0))))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_13 = (max(var_13, (arr_0 [i_2])));
        arr_11 [i_2] = (arr_10 [i_2]);
        var_14 ^= (((((((((arr_2 [i_2] [i_2]) <= (arr_5 [i_2] [i_2])))) & (arr_2 [i_2] [i_2])))) && ((((arr_4 [i_2] [5]) ? (arr_5 [i_2] [i_2]) : (arr_7 [i_2] [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_15 -= (((arr_13 [i_3] [i_3]) == (arr_10 [i_3])));
        var_16 ^= (min(((((arr_7 [i_3] [i_3]) && ((var_0 == (arr_2 [i_3] [i_3])))))), (max(var_2, (min((arr_1 [i_3] [i_3]), (arr_10 [i_3])))))));
    }
    #pragma endscop
}
