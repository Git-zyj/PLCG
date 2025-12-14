/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = ((!(((-(arr_5 [i_0] [i_0] [i_2]))))));
                    var_16 = 1;
                    var_17 = ((((~((var_0 ? (arr_6 [i_2]) : (arr_3 [i_0]))))) != (arr_2 [i_1])));
                    var_18 = (((((~(min(2594380442, 2549449597))))) ? (((((var_4 ? 2549449597 : var_4))) ? ((var_2 ? var_2 : (arr_3 [i_0]))) : -2941012576830766676)) : (((-(arr_4 [i_0]))))));
                }
            }
        }
    }
    var_19 = var_2;
    #pragma endscop
}
