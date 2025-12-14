/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_18 ^= arr_3 [i_0 + 2];
            var_19 = (arr_0 [1]);
            var_20 = (6614038523076222385 + -19885);
        }
        var_21 *= (((((((((arr_3 [i_0]) ? (arr_3 [i_0 - 1]) : var_11))) ? ((((arr_2 [i_0 + 1] [i_0] [i_0]) ? (arr_3 [i_0]) : (arr_2 [i_0] [i_0] [i_0 + 2])))) : (((arr_3 [i_0 - 1]) ? (arr_1 [i_0] [i_0]) : var_1))))) ? ((((var_10 << (((arr_2 [i_0] [i_0] [i_0 - 2]) - 1185909381886883049)))))) : (arr_0 [i_0 + 2])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_7 [i_2] = (((arr_1 [i_2] [i_2]) ^ ((17398 ? 19885 : 1))));
        var_22 = (arr_2 [i_2] [i_2] [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_23 = (((arr_10 [i_3]) - (arr_10 [i_3])));
        var_24 = (max(var_24, ((((((var_17 ? (arr_11 [i_3]) : (arr_10 [i_3])))) || (((var_0 ? var_10 : (arr_10 [i_3])))))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_25 = (arr_15 [i_3] [i_3] [i_5]);
                    arr_18 [i_5] [i_5] [i_4] [i_3] = ((arr_15 [i_3] [i_4] [i_5]) ? var_8 : (~var_6));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        arr_21 [i_6] [5] = (min(181, 19));
        var_26 = (((((min(var_11, (arr_14 [i_6] [i_6] [i_6])))) ? (arr_8 [i_6]) : (((arr_3 [i_6]) ? (arr_19 [i_6] [i_6]) : (arr_5 [i_6]))))));
    }
    var_27 = (((((-(min(var_11, var_2))))) ? (var_4 % var_12) : (var_0 * var_17)));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_29 [i_9] [i_8] [i_9] = (arr_9 [i_9]);
                    var_28 = (((((arr_1 [i_7] [i_7]) * (arr_1 [i_8] [i_8]))) / (arr_1 [i_8] [2])));
                }
            }
        }
    }
    #pragma endscop
}
