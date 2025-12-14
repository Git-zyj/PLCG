/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((((max(var_9, 1)))) + ((-576 ? 1261850124 : var_0))))) + (((7685 + var_4) - var_7))));
    var_13 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((max((arr_4 [i_1]), (((((var_5 ? var_6 : 226))) ? ((554 >> (68 - 63))) : 168)))))));
                    var_15 -= (max(((-8 ? (arr_8 [i_2] [i_1] [i_0]) : (max(var_11, var_2)))), (((((arr_4 [i_2]) && (arr_6 [i_0] [i_1] [i_2]))) ? 0 : (arr_1 [i_1] [i_2 - 2])))));
                }
            }
        }
    }
    #pragma endscop
}
