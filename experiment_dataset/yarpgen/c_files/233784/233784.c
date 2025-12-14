/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [3] = ((((arr_5 [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_2 + 2]) & var_3)));
                    arr_7 [i_1] = 1;
                }
            }
        }
    }
    var_10 &= ((((-1225454804 < ((4290772992 ? 1 : var_4)))) ? (-1225454832 && var_3) : (((((0 / 1430343749718777386) && (31 != 4724560691444728171)))))));
    var_11 = (max(var_11, ((((((0 ? var_7 : var_5))) * var_5)))));
    var_12 = ((((((1 % var_4) ? ((min(var_0, var_0))) : (~var_2)))) ? (max(1, (max(240, var_4)))) : var_1));
    var_13 &= ((var_4 / (8191 && var_3)));
    #pragma endscop
}
