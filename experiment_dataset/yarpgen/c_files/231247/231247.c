/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 = ((((var_17 + 2147483647) >> (var_3 - 1030958566))));
        var_22 = var_14;
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_23 = (arr_2 [i_1 + 2] [i_1 + 2]);
        var_24 -= (!var_9);
        var_25 ^= ((~(~var_3)));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_26 ^= (((((var_4 ? (var_7 && var_16) : ((((arr_7 [i_2]) || var_11)))))) ? var_3 : (((var_2 || (!var_17))))));

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_27 = (min(var_27, (((var_18 ? (arr_8 [i_2]) : (~var_3))))));

            for (int i_4 = 1; i_4 < 24;i_4 += 1)
            {
                var_28 = ((~(arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])));
                var_29 ^= (((((var_13 & ((max(var_6, var_18)))))) ? ((((~(arr_7 [i_2]))))) : (min(var_12, var_2))));
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_30 = (((((((min(var_8, var_11))) || (!var_17)))) >> (var_2 <= var_8)));
                    var_31 = ((!(-var_19 < var_2)));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 3; i_7 < 20;i_7 += 1)
    {
        var_32 = var_10;
        var_33 = ((-(arr_15 [i_7] [i_7 - 1] [i_7 + 1] [i_7])));
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        arr_22 [i_8] [i_8] = var_9;
        var_34 |= ((((arr_13 [0] [i_8] [i_8]) ^ (arr_13 [0] [i_8] [i_8]))));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        arr_26 [i_9] [i_9] = (arr_16 [i_9] [i_9] [i_9] [i_9]);
        var_35 = ((((~((var_17 ? var_14 : var_14))))) ? (((!var_6) ? (var_15 <= var_13) : (~var_12))) : ((var_18 ? (((!(arr_16 [i_9] [i_9] [i_9] [i_9])))) : var_13)));
        var_36 = ((((!(arr_16 [i_9] [i_9] [i_9] [i_9])))));
    }
    for (int i_10 = 1; i_10 < 23;i_10 += 1)
    {
        var_37 = ((~(((arr_27 [i_10 - 1]) ? (arr_27 [i_10 + 1]) : (arr_27 [i_10 - 1])))));
        var_38 = (max(var_38, (((((max(((var_12 ? (arr_9 [i_10]) : var_1)), (min(var_1, var_10))))) ? var_17 : (((((min(var_17, (arr_5 [i_10]))) + 2147483647)) << ((((((var_0 ? var_5 : (arr_8 [i_10]))) + 1946687031)) - 16)))))))));
    }
    #pragma endscop
}
