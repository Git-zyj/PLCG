/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((~((var_18 ? var_14 : var_14))))) ? var_2 : var_16));
    var_21 = var_19;
    var_22 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_23 = (((var_2 ? var_3 : (arr_3 [i_0] [i_0 + 1]))));
                    var_24 = ((8 ? ((((arr_0 [i_0]) && (~15)))) : 93));
                    arr_8 [15] [15] [i_1] [11] = ((-(((((42 ? 1311536425814854855 : 3))) ? (((((-2147483647 - 1) && var_5)))) : (max(var_2, var_1))))));
                    arr_9 [i_2] [i_1] [i_0] = (((arr_0 [i_0 + 1]) ? -var_5 : (1 - 1)));
                }
            }
        }
    }
    var_25 = (((((var_10 ? var_12 : var_8))) ? var_6 : (((!(((0 ? var_14 : var_1))))))));
    #pragma endscop
}
