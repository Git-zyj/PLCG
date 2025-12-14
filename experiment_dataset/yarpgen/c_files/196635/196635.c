/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 42321;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = var_13;
                var_21 = -30943;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_22 = (((((-var_14 ? ((max(var_7, var_9))) : ((var_11 ? var_3 : var_16))))) ? (((((arr_8 [i_0] [i_1] [i_2] [i_3]) != 63137)))) : (((arr_5 [1] [1] [i_2]) ? -11289005539427438861 : var_2))));
                            var_23 |= ((~((12965177859272534582 / ((8436909240003224142 ? var_11 : var_13))))));
                            var_24 = (max((159 && 6383343984262715334), var_12));
                        }
                    }
                }
                var_25 = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                var_26 = (-((((arr_7 [i_0] [i_1] [i_1]) != (arr_7 [i_0] [i_0] [i_1])))));
            }
        }
    }
    #pragma endscop
}
