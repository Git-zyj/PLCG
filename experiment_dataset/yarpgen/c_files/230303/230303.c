/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_13 >= var_12) ? 57 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 &= var_0;
                var_17 = min(54, (min((min((arr_5 [i_0] [2] [9]), -8809243525380414697)), ((min(var_6, var_12))))));
                var_18 = (max(-19413, -51008901977473879));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_19 = (max(var_13, (arr_9 [11] [i_0] [10] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = 57;
                                var_21 = ((-(((arr_4 [i_0]) ? var_7 : var_8))));
                                var_22 = (((((6 ^ (arr_11 [i_4 - 1] [i_4 + 1] [i_4 - 1] [11])))) && (((var_5 ? (arr_11 [i_4 - 2] [i_4 - 1] [0] [i_1]) : (arr_11 [i_4 + 1] [i_4 + 1] [i_3] [i_1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_23 = 57344;
                                var_24 = (min((arr_9 [i_6] [i_0] [i_0] [i_0]), (((arr_25 [i_0] [i_6 - 1] [i_6] [i_6 - 3] [i_6 + 2] [i_0]) ? var_5 : var_10))));
                                arr_26 [i_0] = (arr_3 [i_0]);
                            }
                        }
                    }
                    arr_27 [i_0] [6] = (min(((((((arr_11 [i_0] [i_1] [i_1] [i_2]) ? 51008901977473878 : (arr_20 [i_0] [i_1] [i_2] [i_2])))) ? var_10 : ((var_3 ? var_8 : var_14)))), (((var_2 > (arr_11 [i_0] [i_0] [i_2] [i_1]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            {
                arr_34 [i_8] [i_7] = var_1;

                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    arr_37 [i_7] [2] [9] = (min(4176511711590370217, 0));
                    var_25 *= arr_36 [i_7] [i_7] [i_9];
                    var_26 = var_13;
                    arr_38 [i_9] [i_8] [i_7] = ((-((65529 + (arr_32 [i_7] [i_7] [i_7])))));
                }
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    var_27 += var_12;
                    var_28 += ((65518 ? 25747 : 16777184));
                }
                for (int i_11 = 1; i_11 < 19;i_11 += 1)
                {
                    var_29 = 524286;
                    arr_46 [17] [i_8] [i_11] = var_13;
                    arr_47 [i_7] [i_7] [5] [7] = var_9;
                    arr_48 [i_8] [i_8] [i_7] [i_7] = var_9;
                }
            }
        }
    }
    var_30 = (max(4194240, var_3));
    #pragma endscop
}
