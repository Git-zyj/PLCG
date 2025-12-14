/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_18 = (min(var_18, (arr_1 [i_0 + 1])));
        var_19 = ((-(((max((arr_0 [i_0 - 1]), (arr_1 [i_0 - 1]))) >> ((((arr_1 [i_0 - 1]) <= var_6)))))));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_20 = (min((arr_6 [i_1 - 3] [i_1 + 1] [i_1 + 2]), (max(((((arr_3 [i_2]) ? (arr_2 [i_1 - 1]) : var_0))), (((arr_2 [i_1 + 3]) ? (arr_7 [i_1 - 3] [i_1 - 3]) : var_13))))));
            var_21 = var_3;

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_22 = (max(var_22, ((((((arr_3 [i_1 + 3]) - (arr_3 [i_1 - 1]))) & ((~(arr_9 [i_3] [i_2] [i_1 + 2] [i_1 + 1]))))))));
                var_23 = -1;
                var_24 = min((arr_10 [i_2] [i_2] [i_2] [i_2]), (arr_9 [i_2] [i_1 + 1] [i_1 + 1] [i_1 + 3]));
                var_25 = ((~(arr_4 [i_1 + 2])));
                var_26 = (arr_9 [i_2] [i_3] [i_3] [i_3]);
            }
            var_27 = (max(var_27, (((((!((max((arr_2 [i_1 - 2]), (arr_11 [i_1 - 2])))))) && ((min((arr_11 [i_1 - 1]), (arr_5 [i_1 - 1] [i_2])))))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_28 = (-2147483641 | 1);
            var_29 = ((~(arr_4 [i_1 + 3])));
            var_30 = (max(var_30, (((~(arr_5 [i_1 - 3] [i_1 + 1]))))));
        }
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            var_31 = (min(var_31, (arr_14 [22])));
            var_32 = (max(var_32, ((min((arr_11 [i_1 + 1]), (((((max((arr_13 [12] [i_5 + 1] [i_5 + 2]), (arr_13 [16] [i_5 + 1] [i_5 + 2]))))) - (((arr_11 [i_1 - 2]) / (arr_13 [10] [i_1 - 1] [i_5 + 1]))))))))));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_33 = (arr_16 [i_6] [i_1 - 2]);
            var_34 = var_2;
        }
        var_35 = (max(var_35, ((max(-10355, (((max((arr_8 [i_1 + 3] [i_1 - 1] [i_1 - 3]), (arr_2 [i_1 - 3]))) | var_8)))))));
        var_36 = (min(var_36, (arr_14 [4])));
        var_37 = (arr_15 [i_1 + 1] [i_1 + 3]);
    }
    var_38 = ((-(min(var_9, var_5))));
    #pragma endscop
}
