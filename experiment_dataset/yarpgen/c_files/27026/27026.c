/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 += 2764353162;
        var_15 += ((arr_2 [i_0]) ? ((1634144983 ? (arr_0 [2]) : (arr_1 [i_0]))) : 2147483648);
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_16 = var_12;

            for (int i_3 = 4; i_3 < 10;i_3 += 1)
            {
                arr_14 [i_1] [i_1] [i_2] [i_3 - 2] = ((arr_8 [10] [i_1] [i_1]) ? (((((arr_11 [i_2]) || ((((arr_2 [6]) ? (arr_7 [i_1] [i_2]) : 2660822312))))))) : (arr_4 [i_3 - 1]));
                arr_15 [i_1] [i_2] [i_2] = arr_8 [i_1] [i_1] [2];
                arr_16 [i_1] [i_1] = arr_6 [i_1 + 2] [i_1 + 2];
            }
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                var_17 = (max(var_17, (arr_12 [i_4])));
                arr_20 [i_2] [i_2] [1] [i_4] = arr_11 [i_1 + 1];
            }
            var_18 = ((+((-62914560 ? ((2660822313 ? (arr_12 [i_2]) : (arr_9 [3]))) : var_1))));
            arr_21 [i_1] = var_13;
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_19 |= ((max((arr_9 [i_1]), 25)));
            arr_24 [i_1] [i_1] [i_5] = (~1634144984);
            var_20 = (var_8 ^ -62914560);
        }
        var_21 += (((max(var_0, (min((arr_7 [i_1] [i_1 - 1]), 1634144984))))) ? (arr_9 [i_1]) : ((-(4232052736 + var_11))));
    }
    var_22 = -var_5;
    var_23 = (var_13 > var_6);
    #pragma endscop
}
