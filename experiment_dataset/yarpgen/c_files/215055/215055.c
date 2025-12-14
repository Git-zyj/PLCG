/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_1] [1] [1] = (~15612519093471944268);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_14 [i_3] [7] [i_1 - 4] [i_3] = (((arr_1 [12]) ? (arr_2 [i_0]) : (arr_10 [i_3])));
                        arr_15 [i_3] [i_3] [8] = (((((!(126 >= 254)))) >> (((arr_6 [i_0] [i_1] [i_2]) - 3338463889))));
                    }
                }
            }
            arr_16 [16] = (max(((((arr_7 [i_1 - 3] [i_1 - 4]) ? (arr_12 [i_1 - 4] [1] [i_0] [1] [i_0]) : (arr_7 [i_0] [i_1])))), (((arr_9 [i_0]) ^ var_10))));
            arr_17 [i_0] [i_0] = (-134217728 ? -1 : (arr_1 [i_0]));
            var_13 = (min(var_13, 12));
        }
        var_14 |= (arr_6 [i_0] [i_0] [i_0]);
        arr_18 [i_0] [i_0] = min(((15612519093471944268 ? 12 : 72057594037927872)), (((arr_6 [i_0] [i_0] [i_0]) ? (arr_9 [i_0]) : (arr_6 [i_0] [3] [i_0]))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_15 = (min(var_15, (arr_6 [3] [i_6] [13])));
                        arr_29 [i_4] [i_4] [12] [i_4] [6] [i_4] |= (arr_12 [i_7] [i_7] [i_7] [14] [i_7]);
                        var_16 ^= -134217728;
                        var_17 = (min(var_17, ((((arr_9 [i_6 + 2]) ? (((arr_8 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6]) ^ (arr_10 [1]))) : ((var_1 | (min((arr_3 [i_4] [1] [i_6]), (arr_8 [i_7] [i_5] [i_5] [i_4]))))))))));
                        arr_30 [i_4] [i_5] [i_6] [i_7] = ((-(((arr_22 [i_6] [i_5]) ? (((arr_27 [i_7] [i_5] [i_5] [i_4]) ? var_8 : (arr_20 [i_4]))) : (((arr_10 [i_5]) ? 27 : 65535))))));
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            arr_34 [i_4] = ((((77 < (arr_1 [4]))) ? (((arr_20 [i_8]) ? (((2834224980237607370 ? (arr_26 [i_4]) : (-32767 - 1)))) : 15612519093471944265)) : (((-(max((arr_12 [i_4] [i_8] [i_4] [6] [4]), (arr_0 [i_4] [i_8]))))))));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_18 = (min(var_18, (arr_38 [i_4] [8] [i_9] [i_10 + 1] [i_11] [i_8])));
                            arr_41 [i_4] [i_8] [i_8] [i_9] [i_10] [i_11] = (arr_40 [5] [i_8] [i_9] [i_10 - 1] [5] [i_10 - 1] [i_9]);
                            arr_42 [i_4] [i_8] [4] [i_10 - 2] [i_4] &= ((15612519093471944268 ? (arr_12 [i_4] [8] [i_9] [18] [i_11]) : (arr_2 [i_9])));
                            arr_43 [i_9] [i_10] [i_11] = (~(arr_20 [i_10 - 3]));
                        }
                    }
                }
            }
        }
        arr_44 [i_4] = var_8;
    }
    var_19 |= (((27 == var_12) ? ((((var_10 ? var_0 : 255)) & 236)) : (min(((var_5 ? var_9 : var_12)), var_9))));
    #pragma endscop
}
