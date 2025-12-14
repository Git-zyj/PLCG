/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_5;
    var_19 = (((!1227313503) ? (min(3889587214, -1)) : (((((var_9 ? -1 : var_14)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [10] [i_4] [i_1] [0] = (((((0 ? 1 : 31))) ? -4 : (((((arr_0 [i_0] [i_1]) > var_15))))));
                                var_20 = ((((1 * (min(437371542, (arr_2 [i_1] [i_1] [i_4]))))) * ((-1 * ((var_15 / (arr_7 [i_1] [i_1] [i_1] [1])))))));
                                var_21 = (min(var_21, (((((min(((1505401992 ? var_17 : var_1)), (arr_4 [i_0] [i_0])))) ? ((-54 ? ((max((arr_11 [i_0] [i_2]), (arr_10 [i_0] [i_0] [i_0 - 4] [i_0] [i_0 - 4])))) : (((var_11 > (arr_8 [i_4] [i_4] [i_3] [i_1] [i_1] [i_0])))))) : (~var_0))))));
                            }
                        }
                    }
                }
                arr_13 [i_1] [i_1] = (min((((min((arr_5 [i_0] [i_0] [10]), var_12)) / (((max(var_6, var_3)))))), (((var_8 ? (((arr_9 [i_0] [i_0 - 1] [i_1]) + (arr_10 [i_0] [i_1] [i_1] [i_0] [i_1]))) : 1)))));
                var_22 = (min((max((max(1354409753, 1)), -14)), (((arr_8 [i_0] [i_0 - 4] [i_0 - 1] [i_0 - 1] [i_0] [i_0]) ? var_6 : ((var_4 ? (arr_7 [i_1] [i_1] [i_1] [i_1]) : (arr_5 [i_1] [i_0 - 1] [i_0 - 1])))))));
            }
        }
    }
    #pragma endscop
}
