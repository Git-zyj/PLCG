/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((var_5 ? var_2 : var_3))) ? var_12 : ((var_13 ? var_0 : var_4))))) ? (((-var_11 >= (~var_7)))) : var_3);

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_17 = var_10;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] = ((arr_8 [i_0] [8] [i_2 + 1]) / (max((arr_8 [i_0] [i_1] [i_2]), (arr_5 [0] [i_1] [i_0]))));

                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            arr_13 [i_4] [16] [i_0] [i_0] [3] [i_0] = (max(-var_14, -var_12));
                            arr_14 [i_3] [i_1] [i_1] [i_3] [i_3] &= (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_15 [i_0] [5] [i_0] [i_3] [i_4] [9] [5] = ((!(arr_6 [i_2] [i_2] [i_0])));
                            arr_16 [i_0] [i_0] [i_0] [i_3] [i_4 - 1] = (max((((arr_8 [i_4] [i_0] [i_0]) % (max((arr_7 [6] [17] [6]), var_7)))), ((max((((-(arr_8 [i_1] [i_3] [i_4])))), (max(var_2, var_14)))))));
                        }
                        var_18 = (max((arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 1]), ((((max((arr_4 [i_0] [i_0] [1]), (arr_11 [i_0] [i_0])))) ? (arr_4 [i_0] [i_0 + 2] [i_0]) : (min(var_5, (arr_0 [i_2])))))));
                    }
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        var_19 = (max((arr_17 [i_5]), (((arr_5 [i_5] [i_5] [i_5]) ? (arr_3 [i_5 - 3]) : (((0 ? 4023417759 : 0)))))));
        arr_20 [i_5] = (max((arr_0 [i_5]), ((max(var_15, ((var_5 | (arr_4 [0] [i_5] [i_5]))))))));
        var_20 *= var_1;
    }
    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        var_21 = (min(var_21, (((max((max(4414597660717749435, 0)), ((min(var_10, (arr_4 [22] [22] [22])))))) >> ((((~(arr_12 [i_6] [i_6 - 1] [8] [i_6 - 1] [i_6 + 1] [i_6]))) + 54))))));
        var_22 = (min(var_22, (((+((min((arr_2 [0] [i_6 - 1]), var_13))))))));
    }
    var_23 = ((~((var_5 ? (~var_5) : ((var_14 ? var_12 : var_7))))));
    var_24 = (max((max((max(var_12, var_2)), ((min(var_15, var_13))))), var_0));
    #pragma endscop
}
