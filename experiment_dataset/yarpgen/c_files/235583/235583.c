/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((((0 % 78) ? ((var_16 ? var_6 : (arr_1 [i_0]))) : (((((!(arr_1 [i_0])))))))))));
                var_21 = (max(var_21, (arr_1 [i_1])));
                var_22 = ((-(~var_16)));
                var_23 = (arr_2 [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_24 = (min(var_24, 0));

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_15 [i_2] [i_2] [i_2] |= ((0 ? (((min(-1, 8388607)) & (arr_11 [i_3]))) : (1751877950 / 1138455020)));
                    var_25 = ((((((var_15 ? var_14 : (arr_6 [i_3] [i_4]))) > ((var_16 ? var_3 : (arr_10 [i_2] [i_2]))))) ? (((arr_6 [i_2] [i_4]) ^ (arr_6 [i_3] [i_4]))) : ((((((var_8 ? (arr_8 [i_2]) : var_7)) > var_18))))));
                }
                arr_16 [i_3] [i_2] [i_2] = (~-7062470570626766631);
                var_26 = (max(((var_12 == (((arr_0 [i_2]) ^ (arr_7 [i_2] [i_3]))))), ((!(((arr_1 [i_3]) == var_11))))));
            }
        }
    }
    #pragma endscop
}
