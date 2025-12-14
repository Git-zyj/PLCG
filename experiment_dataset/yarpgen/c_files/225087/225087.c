/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = var_1;
        arr_2 [7] [i_0] = arr_1 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_11 = ((((31554 & (arr_0 [i_2]))) <= (var_4 || 4064894076)));
                    arr_7 [i_0] [i_2] [i_2] [15] = (((arr_5 [0] [0] [i_2 - 1]) % (((arr_1 [i_0]) / 4064894098))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = var_8;
                    var_12 = ((~(arr_6 [i_0] [13] [i_2 + 1] [2])));
                }
            }
        }
        arr_9 [i_0] = var_2;
        var_13 = (((arr_6 [i_0] [6] [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_4 [4] [4])));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_13 [9] [i_3] = ((4064894098 ? 2059563596 : 2204188497));
        var_14 &= (((((arr_6 [i_3] [i_3] [8] [i_3]) ? var_9 : (arr_10 [i_3]))) << ((((var_3 ? (arr_11 [i_3]) : (arr_11 [i_3]))) - 5760910235048805828))));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_15 = ((((((1578364105 * 230073219) < 230073201)))) >= (max(2059563596, 6843)));
        arr_18 [i_4] = ((((((arr_6 [5] [0] [0] [i_4]) | ((((arr_16 [i_4]) && var_3)))))) ? (max(4564, 2059563617)) : (!-18291)));
    }
    var_16 |= ((var_4 ? ((var_2 - ((max(213, 1352637087))))) : var_8));
    #pragma endscop
}
