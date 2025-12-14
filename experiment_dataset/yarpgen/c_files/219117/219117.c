/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_1;
    var_17 |= ((((max((((57389 ? var_0 : var_11))), (min(70368744177663, 0))))) && var_6));
    var_18 = (-var_2 && 4294967295);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((((max((arr_3 [i_0]), var_9))) ? ((var_13 ? var_3 : (arr_3 [i_0]))) : ((min(var_11, var_5))))))));
                var_20 = ((70368744177663 ? ((((arr_4 [i_0] [i_1]) && (((var_9 ? var_12 : (arr_2 [i_0] [i_0]))))))) : (((arr_2 [6] [i_1 - 1]) ? (arr_4 [9] [i_1]) : (arr_4 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
                            {
                                arr_13 [i_1] [i_3 - 1] [11] [i_1] [i_1] = var_9;
                                arr_14 [16] [16] [i_4] [i_2 - 1] [i_4] [i_0] [i_0] |= (min(var_12, (arr_9 [i_3] [i_0] [8] [i_0])));
                                arr_15 [i_1] [i_2] [i_2] [10] [i_4] = -70368744177664;
                            }
                            for (int i_5 = 2; i_5 < 15;i_5 += 1) /* same iter space */
                            {
                                var_21 = (arr_3 [i_1]);
                                var_22 += (~var_14);
                            }
                            for (int i_6 = 2; i_6 < 15;i_6 += 1) /* same iter space */
                            {
                                var_23 = ((-(max(var_12, (((arr_1 [i_2 + 2]) ? 5714 : var_15))))));
                                arr_21 [i_1] [i_1 + 1] [0] = (((var_7 && (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1] = ((!(((~((min(var_9, var_6))))))));
                            }
                            var_24 = (max(var_24, var_1));
                            var_25 = ((~((~(arr_10 [i_3 - 2] [i_3 + 1] [i_1] [i_3 + 2])))));
                        }
                    }
                }
            }
        }
    }
    var_26 = -var_0;
    #pragma endscop
}
