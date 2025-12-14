/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    var_19 -= var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 += max((arr_5 [i_1 + 1]), (arr_5 [i_1 + 1]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 = (arr_4 [0] [i_2] [i_4]);
                                var_22 *= max((arr_8 [i_1] [i_2] [i_3] [i_4]), (min(9007199253692416, 16383)));
                                var_23 = (max(var_23, ((max(((((arr_5 [i_1 + 1]) / (max((arr_13 [i_0] [i_0] [i_2] [i_3] [i_4]), (arr_8 [i_0] [i_0] [i_0] [i_0])))))), (((arr_3 [i_1 + 1]) * (arr_3 [i_1 + 1]))))))));
                                var_24 = (min((max((((arr_12 [i_0] [i_0] [i_0]) - (arr_3 [i_1]))), (arr_7 [i_1 + 1]))), (arr_10 [i_1] [i_1 + 1])));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_1] [i_2] [i_1] [i_1] [2] [2] = (((max((arr_0 [i_1 + 1]), -49)) << (((arr_13 [i_1] [i_1 + 1] [i_1] [i_1] [i_1]) ^ (arr_13 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1])))));
                        arr_18 [i_0] = (arr_9 [i_1 + 1] [i_1 + 1] [i_2]);
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_6] [i_2] [i_1] [i_0] = (max((arr_1 [i_2]), (arr_1 [i_0])));
                        arr_22 [i_0] [i_1] [i_0] [i_1] [i_6] = (((min(((max((arr_4 [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_6] [i_2] [i_6])))), (max((arr_14 [i_0]), (arr_12 [i_0] [i_0] [11])))))) && ((((arr_15 [i_1 + 1] [i_1] [i_1]) % (arr_2 [i_1 + 1] [i_1] [i_1])))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_25 = (min((arr_26 [i_0] [i_1 + 1]), (min((arr_26 [i_1] [i_1 + 1]), (arr_26 [i_0] [i_1 + 1])))));
                                arr_29 [i_0] [10] [10] [i_7] [i_8] = (max(((min(-25881, 76))), (max(((15880810914727949666 ? -1225653671837379867 : 49)), -9))));
                                var_26 = (min(var_26, ((max(1, (min(194, 472887979893949845)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
