/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_7 * var_7) | ((var_4 ? var_5 : var_2)))) >= ((((var_7 || var_5) == var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] &= (((((var_13 < (~var_5)))) >> (((((var_3 < var_2) << (-var_0 - 48))) - 23))));
                var_15 = (((var_10 && var_7) / ((-(var_3 <= var_9)))));
                var_16 = (max(var_16, (((!(var_8 * var_7))))));
                var_17 = ((var_12 ? var_6 : ((((((var_12 ? var_4 : var_9))) || (var_10 + var_11))))));
                arr_7 [i_0] = var_9;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_18 &= (((!var_7) || ((((!var_5) ? var_12 : ((var_6 ? var_6 : var_3)))))));
                    arr_17 [i_2] [i_4] = (-126 - -var_12);
                }
            }
        }
    }
    #pragma endscop
}
