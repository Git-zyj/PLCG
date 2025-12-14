/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= -var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = ((!(((min(0, var_10))))));

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        arr_8 [i_3] [i_3] = (((min(39649, var_6)) / ((2305843009213693824 ? 106 : 142))));
                        arr_9 [i_3] = var_16;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_21 = var_2;
                        arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] = 106;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_22 = (max(var_22, ((((149 + var_17) ? var_1 : var_5)))));
                        var_23 = (min(var_23, (((107 ? -203160472 : (var_8 == var_11))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_24 = (min(((max((min(var_1, var_13)), 171))), (!1)));
                                arr_22 [1] [i_1] [10] [i_1] [11] [i_1] [i_1] = (max((1 || var_11), (~var_17)));
                                var_25 &= (max(((~(var_0 == var_15))), 106));
                                var_26 = (((((~((min(147, 0)))))) ? 1 : 1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (min((min(((max(47903, 105))), ((var_4 ? 255 : 1)))), var_6));
    var_28 = (min(6343115090494264340, (((~(16 != 149))))));
    #pragma endscop
}
