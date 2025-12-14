/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 65526;

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_21 ^= ((-(((65526 ? 15856064925775060169 : 863168316)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_6 [5] = (arr_1 [i_0] [i_0]);
            var_22 = 23;
            var_23 += ((-15125 ? ((23036 ? 46 : 0)) : 249));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_24 *= (((((((arr_4 [i_0] [i_0 + 1] [i_0 + 1]) < 191)))) < (arr_10 [i_0 + 1] [i_0 + 1] [i_0 - 1])));
            var_25 = (((min((arr_1 [i_2] [i_0 - 1]), (arr_1 [9] [i_2])))) == (((arr_1 [i_0 - 1] [i_0 + 1]) - var_10)));
            var_26 *= (arr_3 [i_0]);
            arr_11 [1] [11] [i_2] = ((-(min((arr_8 [i_2]), (min((arr_9 [i_0] [i_2]), -68))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_27 = (var_1 >> (((arr_9 [i_0 - 1] [8]) - 2095822687)));
            var_28 = (min(var_28, (((!(((var_14 ? (arr_9 [i_0] [2]) : var_0))))))));
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_29 = (((arr_3 [i_4]) / var_12));
        var_30 ^= (arr_4 [i_4 + 1] [i_4] [i_4 - 1]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_20 [i_5] = (((arr_19 [10] [3]) < (arr_1 [i_5] [i_5])));
        var_31 = (arr_3 [i_5]);
    }
    var_32 = (min(((var_2 ? 118 : var_10)), var_18));
    #pragma endscop
}
