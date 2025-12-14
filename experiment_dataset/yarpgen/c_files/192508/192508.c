/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((((min(((var_4 ? -3318282317370201069 : var_8)), 141528380461193764))) ? var_10 : var_10))));
    var_13 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = (8039491662048739400 ? -13 : (max(-12, 2384512201597799805)));
                    var_15 = ((!(((arr_3 [i_0] [i_1] [i_2]) <= (arr_5 [i_0] [i_1] [i_2] [i_2])))));
                    var_16 = (~((+(((-13 + 9223372036854775807) >> (((arr_0 [i_0] [i_1]) + 5074370374094622409)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            {
                var_17 = ((!(((((-3045441658188940801 ? (arr_11 [i_3] [i_4]) : var_3))) || var_0))));
                arr_13 [i_3] = max((max((arr_11 [i_3 - 2] [i_3 + 2]), (arr_11 [i_3 + 1] [i_3 + 1]))), (((!((((arr_10 [i_3] [i_4]) ? var_1 : var_2)))))));
            }
        }
    }
    var_18 = max(8576156435149137526, -13);
    #pragma endscop
}
