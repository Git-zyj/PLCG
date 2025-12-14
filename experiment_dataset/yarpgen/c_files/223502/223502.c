/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_1] = var_3;
                            arr_14 [i_0] [i_0] [i_2] = ((var_1 ? var_9 : 21));
                            arr_15 [i_0] [i_1] [i_2] [i_0] = (((arr_0 [i_2]) ? (arr_11 [i_3] [i_1 + 1] [i_3] [i_0]) : var_16));
                            var_17 = (max(var_17, ((min((max((!21), (arr_1 [i_2] [i_2]))), ((((!32) >> (((arr_8 [i_0] [i_1 - 1]) - 20449))))))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_27 [i_0] [i_0] [9] [9] = (min((((!var_11) ? (121 != 235) : 235)), (((248 ? -1312977089 : (arr_17 [i_4] [i_4]))))));
                                arr_28 [i_0] [i_0] [i_6] [i_6] [i_4] [i_6] = ((((min(9, 95))) ? ((((arr_3 [i_0] [i_0] [i_4]) > ((var_9 ? (arr_3 [i_0] [i_5] [i_0]) : 11))))) : ((((1312977073 ? var_10 : (arr_0 [i_0])))))));
                            }
                        }
                    }
                }
                var_18 = (max(var_18, ((min((min(((var_14 ? var_2 : 128)), -86)), (((arr_4 [i_1] [i_1] [9]) ? ((((arr_17 [i_0 + 1] [i_1 - 1]) != var_13))) : (arr_4 [i_1] [i_1] [i_1]))))))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_35 [i_0] [i_0] [i_0] [i_8] [i_0] = 2147483647;
                                var_19 = ((((((min((arr_7 [i_0] [i_0] [i_0]), (arr_10 [i_1]))) + 2147483647)) << ((((max(var_8, 32764))) - 32764)))));
                                var_20 -= (((((arr_23 [5] [i_1] [i_7] [i_7] [i_9]) ? 11 : var_13)) <= ((255 ^ (min((arr_25 [i_9] [i_8] [i_7] [i_1] [i_1 - 1] [i_0]), 1312977100))))));
                                var_21 = (min(var_21, ((((((0 ? (arr_5 [0]) : 642299222))) ? (((!(((85 << (((arr_9 [i_0] [i_0 + 3] [i_0]) - 60)))))))) : (min((46 | 235), ((-(arr_25 [i_0] [4] [i_7] [i_8] [5] [i_8]))))))))));
                                var_22 = ((118 ? ((~(min((arr_5 [i_0]), 244)))) : (min((((arr_10 [i_9]) ? var_6 : var_16)), 6))));
                            }
                        }
                    }
                }
                var_23 = var_14;
            }
        }
    }
    var_24 = (max(var_24, ((min((((var_14 || (!24158)))), ((var_3 ? (1466510307 && 5991) : (-5982 == -1174544546))))))));
    #pragma endscop
}
