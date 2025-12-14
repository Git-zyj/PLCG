/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_2 [i_0 + 2]) > (arr_2 [i_0 + 2])));

        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_0] = (arr_4 [i_0] [11]);
            arr_8 [i_0] [i_0] [i_1] = (arr_6 [i_0 - 1]);

            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                var_13 = (arr_1 [i_1 - 2]);
                var_14 += var_4;
                arr_12 [i_0] [i_1] [i_0] = ((-(arr_10 [i_0 - 1])));
            }
            var_15 = (i_0 % 2 == 0) ? (((2907286382721315066 >> (((arr_11 [i_0 + 3] [i_0] [i_1 - 4]) - 147))))) : (((2907286382721315066 >> (((((arr_11 [i_0 + 3] [i_0] [i_1 - 4]) - 147)) - 25)))));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                {
                    arr_19 [i_0] [i_0] [2] = arr_9 [i_0] [i_0] [i_0] [i_4];
                    arr_20 [i_0] [i_3] [i_0] = (855598956250961150 / 1570068966);

                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        arr_24 [i_4 - 1] [i_3] [i_4] [i_4] [2] |= (arr_23 [i_0] [i_3] [i_3] [i_4 + 1] [i_5 - 2] [i_5]);
                        var_16 = (((arr_21 [i_5] [i_3] [i_4 - 1] [i_5] [i_5 - 1] [i_0 + 2]) >> (-22 + 53)));
                        var_17 = (min(var_17, ((((arr_22 [i_3] [i_0 + 3] [i_4 - 1] [i_5] [i_5]) ? ((7302999839139760966 ? var_3 : (arr_1 [i_5 - 3]))) : (-855598956250961151 != 855598956250961139))))));
                        var_18 = ((((855598956250961120 ? (arr_16 [i_0] [i_0] [11]) : (arr_5 [i_3] [i_3] [i_5]))) >= (!224)));
                    }
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        var_19 = (max(var_19, var_1));
                        var_20 = (~6);
                    }
                    for (int i_7 = 3; i_7 < 14;i_7 += 1)
                    {
                        arr_30 [i_0] [i_0 - 1] [i_3] [i_0] [i_4 + 1] [2] = (((576320014815068160 << (((((arr_26 [12]) + 21597)) - 15)))));
                        var_21 = (((arr_28 [i_0] [i_0] [i_0] [i_7 + 3]) ? ((-1271576109 & (arr_10 [i_4]))) : (-230 <= -107)));
                        var_22 = -73;
                    }
                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        arr_34 [i_0] [i_3] [i_0] = (((arr_16 [i_0] [5] [i_0 + 1]) ? (arr_15 [i_8 - 1] [i_4 + 1] [i_0 - 1]) : (arr_23 [i_0] [i_0] [i_0] [i_0] [8] [i_0 - 1])));
                        var_23 = (((arr_22 [i_0] [i_4] [i_3] [i_3] [i_0]) * (arr_22 [i_0] [i_4 - 1] [i_3] [i_0] [i_0])));
                    }
                    var_24 = (((~855598956250961150) ? (arr_27 [i_4 + 1] [i_0] [i_4] [i_4 + 1] [i_4 + 1]) : ((-107 ? var_6 : var_3))));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_40 [i_10] [i_0] [8] [i_0] [4] = (((arr_22 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0]) ? (arr_27 [i_0] [i_0] [i_4 - 1] [i_9] [i_10]) : 81));
                                arr_41 [i_0] [i_3] [i_4] [i_0] [i_10] = (((arr_2 [i_0 + 2]) ? (arr_11 [i_4] [i_0] [i_9 + 2]) : (arr_2 [i_0 + 3])));
                            }
                        }
                    }
                }
            }
        }
        var_25 = 64;
    }
    #pragma endscop
}
