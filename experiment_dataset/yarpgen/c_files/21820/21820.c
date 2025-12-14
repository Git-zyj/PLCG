/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1432071507;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] &= var_14;
        arr_4 [i_0] = ((!90) ? ((54374 ? (max(var_11, (arr_0 [i_0] [i_0]))) : var_7)) : ((((min((arr_1 [i_0]), var_1))) ? (max((arr_0 [i_0] [i_0]), 4158340655)) : (max(-5983, var_12)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_16 ^= (arr_1 [i_2 + 1]);
                        var_17 = (((arr_0 [i_2 - 1] [i_2 + 1]) ? (arr_0 [i_2 - 1] [i_2 + 1]) : (((arr_0 [i_2 - 1] [i_2 + 1]) ? (arr_0 [i_2 - 1] [i_2 + 1]) : (arr_0 [i_2 + 1] [i_2 - 1])))));
                        var_18 ^= ((((max((arr_1 [i_0]), (arr_2 [i_2])))) ? ((+(max((arr_5 [i_0]), (arr_11 [i_0] [i_2 + 1] [10] [i_0]))))) : var_6));
                        arr_12 [i_1] [i_1] [10] [i_1] [i_1] = (((-(((arr_1 [i_0]) ^ var_1)))));
                    }
                    for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
                    {
                        var_19 = (~55019);
                        var_20 = ((27 == ((((min((arr_8 [i_0] [i_0] [18]), var_5))) ? (((arr_8 [i_0] [1] [i_4]) ? var_4 : (arr_9 [i_1] [i_1] [i_1] [i_1]))) : ((((arr_0 [i_2] [i_4]) ? (arr_10 [2] [i_1] [i_1] [i_1]) : (arr_10 [12] [1] [12] [i_1]))))))));
                        var_21 = (arr_0 [i_4] [i_4]);
                        arr_16 [9] [i_2] [i_1] [i_4] = arr_15 [i_0] [i_2 - 1] [i_4 + 1] [i_1];
                    }
                    for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                    {
                        var_22 ^= max((arr_13 [i_5 + 1] [i_2 + 1]), (((!(arr_19 [i_0] [i_0] [i_0])))));
                        var_23 = (arr_0 [i_5 + 1] [i_0]);
                        arr_20 [i_1] [i_1] [i_1] [4] [i_5] = ((+(((max((arr_7 [i_1] [i_2 - 1] [i_1] [i_1]), (arr_0 [20] [i_2]))) ^ (arr_7 [i_5] [i_5 + 1] [i_5] [i_1])))));
                        arr_21 [i_0] [i_1] [i_2] [i_0] = 726139813;
                        var_24 -= (((((((arr_2 [i_0]) - 17179869183))) ? (((max((arr_19 [i_0] [i_0] [i_0]), var_8)))) : 55019)));
                    }
                    var_25 *= (-5983 > ((((arr_9 [i_0] [15] [7] [i_1]) && var_11))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_26 -= var_14;
                        var_27 *= (-8695455972993040104 || 1432071507);
                        var_28 = (max(var_28, ((-0 ? (arr_17 [i_0] [i_0] [i_0] [i_0]) : var_10))));

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_27 [i_0] [16] [4] [i_6] [i_1] [i_1] [i_2] = ((arr_8 [i_6] [i_1] [i_2 + 1]) ? (arr_8 [i_0] [22] [i_2 + 1]) : (arr_8 [20] [20] [i_2 + 1]));
                            var_29 |= (((arr_10 [16] [i_2] [i_6] [i_7]) - (var_4 < 136626640)));
                            var_30 = var_10;
                        }
                    }
                    arr_28 [i_1] [i_1] = (((((~(((arr_17 [i_0] [i_1] [i_1] [i_1]) ? (arr_7 [i_0] [i_0] [i_0] [i_1]) : (arr_5 [i_1])))))) ? ((max(var_2, (arr_5 [i_1])))) : (arr_22 [i_0] [1])));
                    arr_29 [i_0] [i_0] [i_1] [i_0] = ((+(((arr_18 [i_2 + 1] [i_2 + 1] [i_2] [20] [i_1]) ? (arr_18 [i_2] [i_2 - 1] [21] [i_2] [i_1]) : var_8))));
                }
            }
        }
        var_31 = (min(var_31, var_3));
        var_32 = (min(var_32, ((min(1, (max((arr_26 [i_0] [i_0] [i_0] [i_0]), (arr_23 [1] [2] [i_0] [i_0]))))))));
    }
    var_33 = (max(var_33, var_4));
    #pragma endscop
}
