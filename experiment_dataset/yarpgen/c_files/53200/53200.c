/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        arr_9 [i_3] [i_1] [i_2] = 1007;
                        var_12 |= (((arr_7 [i_3 - 1] [i_3 - 1]) > (arr_7 [i_3 - 1] [i_3 - 1])));
                        var_13 = (arr_8 [i_1] [i_1]);
                    }
                    arr_10 [16] [i_2 + 2] [i_2 + 2] = (((((max((arr_6 [i_2] [i_2] [21] [i_2]), (arr_4 [i_2] [i_2 - 1]))))) ? ((((-(arr_7 [i_0] [i_2]))))) : ((((var_8 ? var_0 : (arr_0 [i_0]))) | ((var_2 ? var_2 : var_0))))));
                    arr_11 [17] [i_0] [i_0] = (((((((1188457712662582182 ? var_4 : (arr_0 [i_1])))) ? (arr_6 [i_0] [i_1] [i_1] [i_2]) : (((((arr_1 [i_0]) >= (arr_1 [i_0]))))))) > (((((max(var_5, var_10))) ? ((-27335 ? 64526 : 1698262322)) : (max(var_3, var_3)))))));
                    var_14 = ((((((arr_4 [i_0] [i_2 - 3]) ? (arr_4 [15] [i_2 - 3]) : (arr_4 [7] [i_2 - 1])))) ? (((arr_4 [i_0] [i_2 + 1]) ? (arr_4 [i_0] [i_2 + 2]) : 18446744073709551607)) : var_8));

                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        var_15 = (arr_13 [i_0] [i_0] [i_0] [i_0]);
                        arr_16 [i_0] [i_0] = ((((((var_11 ? (arr_0 [i_0]) : (arr_14 [i_0] [i_1] [2] [2] [i_2] [i_2]))) / ((var_1 ? 2998104318 : (arr_4 [i_0] [i_0])))))) & -var_9);
                        var_16 = (((((!var_10) ? (((arr_7 [i_4] [i_2]) ? (arr_7 [5] [i_1]) : 2998104330)) : (((var_11 ? (arr_5 [i_0]) : (arr_5 [i_2])))))) & (((((arr_4 [i_0] [i_1]) < ((113 ? var_4 : var_9))))))));
                        var_17 = (max(((max((arr_0 [i_4 + 1]), (arr_0 [i_4 + 1])))), (((arr_0 [i_4 + 1]) ? (arr_0 [i_4 + 1]) : (arr_0 [i_4 + 2])))));
                        arr_17 [i_1] [i_1] [i_0] = var_6;
                    }
                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        var_18 = ((((!(arr_6 [i_0] [i_1] [i_2 - 3] [i_5 - 3]))) && (arr_5 [i_2 + 2])));
                        var_19 = -var_2;
                        arr_21 [i_0] [i_1] [i_2 + 2] [i_5 - 3] [i_0] [i_2] = (arr_14 [i_2 + 2] [i_5 + 1] [i_5 + 1] [i_5 + 3] [i_5] [i_5]);
                        arr_22 [i_2] [i_2 - 1] [i_2] [i_2] = ((var_8 >= (arr_5 [i_2 - 3])));
                        arr_23 [9] [i_2 - 2] [i_1] [i_0] = ((19868 == (arr_1 [i_2 + 2])));
                    }
                }
            }
        }
        var_20 = ((2596704974 ? (max(1296862972, -200)) : var_6));
    }
    var_21 = var_2;
    #pragma endscop
}
