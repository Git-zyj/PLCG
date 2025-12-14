/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = (arr_0 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_12 = (arr_6 [i_1] [i_1] [i_0]);
                            arr_12 [i_0] [i_1] [i_0] [i_3] = var_8;
                        }
                    }
                }
                var_13 -= ((!(!var_1)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                {
                    var_14 = (min(((min((arr_19 [i_4] [i_5] [i_6 - 2]), var_9))), (((arr_16 [i_6] [i_6] [i_5 - 1]) ? (arr_16 [i_6 - 1] [14] [i_5 - 3]) : 3838653171))));
                    var_15 = var_2;

                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        arr_23 [i_4] [i_6] [i_7] = (((!446364362) ? var_3 : ((-(arr_19 [i_5 - 3] [i_7 - 1] [i_6])))));
                        arr_24 [i_6] [i_5] [i_4] &= (min(var_1, (((~(((arr_20 [i_5] [20] [i_7 - 1]) ? var_7 : 201)))))));
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        arr_27 [i_8] [i_6] [i_5] [i_4] |= (arr_18 [i_4] [i_5]);
                        var_16 = ((+((((arr_25 [i_5] [i_5 + 3] [i_6 + 1] [i_6]) == var_1)))));
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, (((var_0 ? ((((var_5 == 6965) - var_10))) : var_9)))));
    var_18 ^= ((((min(-4315189070558747500, var_3))) && (((var_10 ? 84 : var_4)))));
    #pragma endscop
}
