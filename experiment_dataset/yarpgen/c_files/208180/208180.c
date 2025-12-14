/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] [10] [i_0] [i_2] = (((~(arr_5 [i_2 + 3]))));
                    var_20 = (((((((arr_3 [i_0] [i_1] [i_2]) ? var_16 : 5270))) ? 0 : ((var_11 ? (arr_3 [0] [i_1] [i_2]) : (arr_0 [i_0] [i_1]))))));
                    arr_9 [10] [i_1] [i_2] = arr_5 [i_1 - 2];
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                {
                    var_21 = (max(var_21, ((max((((-683620353 ? 1976953843 : -38))), ((-48 ? (arr_12 [17] [i_3]) : ((-104 ? var_7 : var_3)))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_22 = (max(var_22, (((((((((var_17 ? var_9 : var_2))) ? (arr_13 [i_3 + 2] [i_3]) : var_12))) * var_4)))));
                                var_23 = (((!104) && ((((((4294967288 ? 12 : -5644476213139174410))) ? -22620 : var_13)))));
                                arr_22 [i_3] [16] [i_5] [i_6] [i_6] [i_7] = (((arr_21 [i_3 - 3] [i_5 + 2] [i_5 + 1] [i_7 - 1] [i_7 - 2] [i_7 - 1] [i_7 - 1]) < var_16));
                            }
                        }
                    }
                    arr_23 [i_3] [i_4] [2] = (min((((var_14 ? var_9 : var_2))), var_9));
                    var_24 = (min(var_24, (arr_17 [i_3] [3] [i_4] [6])));
                    var_25 = (((((arr_18 [i_5 + 1] [i_3] [i_3 - 2] [i_3 - 2]) ? (arr_15 [i_3] [i_3 + 1] [i_4] [i_5 - 1]) : (arr_15 [i_3] [i_3 + 2] [i_4] [i_5 - 1]))) * (((((arr_18 [i_5 - 1] [i_3] [i_3 + 2] [i_3 + 1]) || var_15))))));
                }
            }
        }
    }
    #pragma endscop
}
