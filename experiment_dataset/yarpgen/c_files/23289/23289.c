/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (max(var_5, (((var_12 | (var_0 & -1))))));
    var_18 = (((2 || -42) ? ((var_15 ? (-43 || 14) : -var_8)) : ((((var_11 ? var_15 : var_11))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_0] [4] [i_2] [i_0] = (((max((arr_6 [i_0 + 2]), ((max(var_4, var_15))))) <= (arr_2 [i_0 - 1])));
                    var_19 -= ((((min((3759579215 && var_13), ((-882230490 + (arr_3 [i_2 - 1] [i_2 + 4])))))) ? (11 | -6) : ((var_1 | (((arr_6 [i_0]) + var_12))))));
                    arr_11 [i_2] = -69;
                    var_20 = ((((min((((-(arr_2 [i_0])))), (max((arr_6 [4]), 252))))) ? (!-78) : (arr_4 [i_0] [i_0])));
                }
            }
        }
    }
    var_21 = var_2;
    var_22 &= ((min(var_5, (!var_15))));
    #pragma endscop
}
