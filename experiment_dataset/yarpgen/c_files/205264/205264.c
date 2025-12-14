/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_11 = (((max((1773384138595758784 + 1773384138595758784), ((((arr_1 [i_0] [i_0]) << (var_6 - 33)))))) & (((((var_3 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))))))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_12 = (((arr_1 [10] [i_1]) ? (arr_2 [i_0]) : (((var_1 > (-1773384138595758784 % -491635594))))));
            var_13 = (((((1773384138595758808 & (arr_1 [i_1] [i_0])))) ? ((var_5 ? 1169400635887472289 : (arr_1 [i_1] [8]))) : (arr_1 [i_0] [i_1])));
        }
        for (int i_2 = 4; i_2 < 15;i_2 += 1)
        {
            var_14 = (!var_4);
            var_15 = 1169400635887472309;
        }
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_16 = -var_6;
        var_17 = (((arr_2 [2]) ? -var_0 : (((min(var_0, (arr_4 [i_3]))) % var_6))));
        arr_8 [8] [8] = var_2;
    }

    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_18 = ((((((((arr_10 [i_4] [i_4]) & -1169400635887472309))) ? (arr_11 [i_4]) : (arr_9 [i_4]))) ^ (arr_11 [i_4])));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_19 = ((4194304 ? -1344727417848050112 : 51370));

            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                var_20 = arr_12 [i_6] [i_6] [i_6];
                arr_20 [i_4] [i_5] [i_5] = (var_6 & var_1);
            }
            arr_21 [i_5] = 172;
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_21 += ((((((arr_15 [4] [i_4]) ? (arr_19 [i_7] [i_4]) : -1725991533))) ? (arr_22 [20]) : ((((max(var_3, var_6))) ? (arr_18 [2] [2] [i_7] [2]) : (arr_10 [i_7] [i_4])))));
            arr_24 [i_7] = 1169400635887472289;
            var_22 = ((((var_8 ? 109 : -58559921))));
            arr_25 [6] [i_7] &= -1773384138595758785;
            var_23 = var_4;
        }
        arr_26 [15] |= (((((var_8 ? 7626846945019920637 : (arr_9 [i_4])))) ? (((arr_22 [10]) ? (arr_15 [20] [i_4]) : var_3)) : var_5));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        arr_29 [i_8] = ((((max((arr_5 [i_8]), var_2))) ? ((var_2 ? var_4 : (arr_0 [i_8]))) : (((max(var_6, 110))))));
        arr_30 [13] = 169;
    }
    var_24 = 14143368374410230379;
    #pragma endscop
}
