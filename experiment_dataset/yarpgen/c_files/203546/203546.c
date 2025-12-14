/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_14));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_0] [4] [i_2] = ((((min(67, var_15))) ? (((arr_8 [i_0] [i_0]) ? (arr_8 [i_1] [i_1]) : (arr_7 [i_2]))) : (((arr_7 [i_0]) | (arr_3 [i_0] [i_1])))));
                    var_17 = -164;
                    arr_10 [12] [i_1] &= (~502997353);
                }
            }
        }

        /* vectorizable */
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            var_18 = 31;
            var_19 *= 0;
        }
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            var_20 = (min(var_20, (min(((((((1 ? (arr_11 [i_0]) : 1))) >= (min(var_10, 11))))), 1271031386065314677))));
            arr_16 [i_0] [i_4] = 74;
        }
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_21 -= ((1964101988 >= 17398) - 594837789);
        arr_20 [i_5] = (max((min((min((arr_7 [i_5]), var_13)), var_3)), ((((arr_17 [i_5] [i_5]) && var_13)))));
        var_22 = (max(var_22, (arr_8 [i_5] [i_5])));
    }
    var_23 = var_14;
    var_24 = (!var_14);
    var_25 = (min(((((0 > var_12) >= (min(var_10, 1964101997))))), var_7));
    #pragma endscop
}
