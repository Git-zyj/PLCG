/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_20 = var_12;
        var_21 -= arr_0 [i_0 - 1];
        var_22 = ((((((min(var_1, 125)) + ((((arr_0 [i_0]) / (arr_1 [8] [11]))))))) ? 13898 : (((min(-126, 125))))));
        var_23 -= var_11;
        arr_2 [i_0 - 3] = ((~(((arr_1 [i_0] [i_0 + 2]) - (arr_1 [i_0] [i_0 - 1])))));
    }

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            arr_18 [i_2] = var_2;
                            var_24 -= (max(var_2, ((((var_9 - (arr_16 [0] [0] [i_3] [0] [i_5] [1]))) - (((-125 ? (arr_15 [i_1] [i_5] [i_3] [7] [3]) : (arr_6 [i_2] [i_1] [0]))))))));
                            var_25 = 255;
                        }
                        arr_19 [i_2] = (min((((arr_4 [i_4 - 2] [i_2 - 2]) ? (arr_9 [i_4 + 2] [i_2 - 1]) : (arr_4 [i_4 + 2] [i_2 - 2]))), (arr_9 [i_4 + 3] [i_2 + 2])));
                    }
                }
            }
        }
        arr_20 [i_1] &= ((-(((arr_4 [i_1] [i_1]) & (((((arr_15 [9] [i_1] [i_1] [i_1] [i_1]) <= var_18))))))));
        var_26 = (arr_5 [i_1] [i_1]);
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_25 [i_6] [i_6] = ((((((arr_4 [i_6] [i_6]) ? (~var_14) : (((arr_21 [i_6]) ? 126 : var_4))))) ? (arr_17 [i_6] [i_6] [i_6] [i_6] [i_6]) : ((var_17 ? (arr_17 [i_6] [i_6] [i_6] [i_6] [i_6]) : var_1))));
        arr_26 [i_6] = (arr_12 [i_6] [i_6] [0] [11]);
    }
    #pragma endscop
}
