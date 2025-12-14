/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((max((arr_3 [i_0] [i_1] [i_1]), (arr_3 [i_0] [i_0] [i_1]))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] = (max(96, 4294967290));
                    var_17 -= (((arr_6 [i_1]) ^ (min(var_8, var_11))));
                }
                var_18 = (max(var_18, ((((((max(var_8, (arr_6 [i_1])) < (max(var_12, 10129))))))))));

                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_19 = (min(var_19, 142));
                    var_20 = (max((arr_1 [i_3]), ((((min((arr_6 [i_1]), var_10))) ? (max(var_4, 248)) : (((min(168, (arr_1 [i_3])))))))));
                    var_21 -= 81;
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    arr_14 [i_0] [i_0] [i_4] [i_0] = 615370297;
                    var_22 = ((!(((-(arr_2 [i_1] [i_1]))))));
                    arr_15 [i_1] [i_1] [i_1] [i_0] = var_11;
                }
                for (int i_5 = 3; i_5 < 21;i_5 += 1)
                {
                    arr_18 [i_0] [1] [i_0] = 84;
                    arr_19 [i_0] [i_0] = (arr_4 [i_0]);
                    arr_20 [i_0] [i_0] = 22;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_23 = var_3;
                                arr_28 [i_1] [i_5 + 1] [i_0] [i_7 - 1] = (max(((max((arr_25 [i_7] [i_7] [1] [i_7] [i_7 - 1] [i_7]), (arr_25 [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1])))), -680153966));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
