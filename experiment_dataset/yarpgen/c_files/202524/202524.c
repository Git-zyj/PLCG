/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = 10854759113240500063;
        var_11 = ((arr_1 [i_0] [i_0]) > (arr_1 [i_0] [i_0]));
        var_12 = ((1 ? 4294967295 : (arr_1 [8] [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    arr_10 [1] [i_2] [i_3] |= 1714;
                    var_13 |= 7591984960469051569;
                    arr_11 [i_1] = (1 ^ 10854759113240500067);
                }
            }
        }
        var_14 = (max(var_14, ((((((((10854759113240500078 % var_2) > 15882821028663984040)))) | ((((min(31952, 7591984960469051549))) ? (arr_5 [6] [i_1]) : ((7591984960469051538 | (arr_8 [22]))))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        var_15 ^= (((((((arr_3 [i_4]) >= var_1)))) != (arr_0 [i_4] [i_4])));
        var_16 -= (((arr_6 [i_4] [12]) || (arr_6 [i_4] [i_4])));
    }
    var_17 ^= 4294967295;
    #pragma endscop
}
