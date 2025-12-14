/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_10 = var_1;
            var_11 ^= (arr_1 [i_0] [i_0]);
        }
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            arr_11 [1] [i_0] [2] = ((var_1 ? (arr_10 [i_0]) : 3674066917));
            arr_12 [i_0] [i_2] [i_0] = var_2;
            arr_13 [i_2] [i_2] [i_0] = (((arr_1 [i_2 - 3] [i_2 + 2]) ? (arr_1 [i_2 + 2] [i_2 - 1]) : (arr_1 [i_2 - 3] [i_2 - 1])));
            arr_14 [i_2] = (arr_4 [i_0] [i_2] [i_2]);
        }
        arr_15 [i_0] = ((var_1 ? 39 : (arr_10 [i_0])));
        var_12 *= (arr_4 [i_0] [i_0] [i_0]);
        var_13 = (arr_8 [i_0] [i_0] [i_0]);
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        arr_19 [i_3] = 18446744073709551615;
        arr_20 [i_3] [i_3] &= (arr_7 [i_3]);
        var_14 = (max(var_14, (arr_17 [i_3])));
        arr_21 [i_3] [i_3] = (arr_18 [i_3]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_15 = ((101 ? (arr_7 [i_4]) : (arr_10 [i_4])));
        var_16 = (arr_4 [i_4] [i_4] [i_4]);
    }
    var_17 = (max(var_17, (((min(var_1, (((var_8 ? var_7 : 155)))))))));
    var_18 = 2533783277;
    #pragma endscop
}
