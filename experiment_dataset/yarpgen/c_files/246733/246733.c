/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (max((max((arr_0 [i_0]), ((max(1, var_3))))), (arr_1 [i_0])));
        var_10 ^= var_1;
        var_11 ^= (((((((arr_2 [i_0]) + 2147483647)) << (1 - 1))) <= ((1 ? (-1142 + 1) : -29671))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_12 -= (arr_6 [i_1 - 1] [i_1 + 2]);
        arr_7 [i_1] = (((((!(arr_4 [i_1 + 2])))) != (arr_5 [i_1 - 3] [i_1])));
        arr_8 [i_1] = ((!(((var_2 ? (arr_5 [i_1 - 3] [i_1]) : (arr_6 [i_1 + 2] [i_1 - 1]))))));
    }

    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_13 += (((((arr_5 [i_2] [i_2]) + 2147483647)) << 0));
        arr_12 [i_2] [i_2] = max(var_8, 15023742700368350850);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_14 = (((arr_14 [i_3]) ? 61456 : (((!(arr_5 [i_3] [i_3]))))));
        arr_16 [i_3] = 4232210216;
        arr_17 [i_3] &= var_2;
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        var_15 *= (((arr_18 [2] [i_4 + 1]) ? (arr_18 [4] [i_4 - 1]) : ((12663658496781982010 ? (arr_18 [10] [i_4 + 1]) : (arr_18 [8] [i_4 - 1])))));
        var_16 ^= ((~(arr_20 [12])));

        for (int i_5 = 4; i_5 < 10;i_5 += 1)
        {
            var_17 = ((((((var_3 ? (arr_19 [i_4]) : (arr_23 [i_4 - 1] [i_5 - 3] [i_4]))) <= var_8)) ? (max(((var_2 ? -250207045 : (arr_19 [i_4]))), var_3)) : ((max((-44039344336618610 == 1), (arr_18 [i_4] [i_5 - 3]))))));
            var_18 = (1204407045 > 8);
            arr_24 [i_4 - 1] [i_5 - 1] [i_5] &= ((arr_20 [i_5]) ? ((((min((arr_20 [i_5]), var_8))) ? (arr_4 [i_5 - 1]) : (max((arr_22 [i_5]), var_9)))) : var_6);
        }
        arr_25 [i_4] [i_4 + 1] = ((-((((21637 >> (456169605 - 456169595)))))));
        arr_26 [10] &= 8410587962694793145;
    }
    #pragma endscop
}
