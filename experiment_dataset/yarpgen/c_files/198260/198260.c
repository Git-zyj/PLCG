/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 += (((~var_11) >= var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = 104;
                var_20 = (((var_6 ? (arr_2 [i_0] [i_0]) : 3073125143)) % (10538 + var_7));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 23;i_4 += 1)
            {
                {
                    var_21 = ((((!((max((arr_14 [i_2] [i_2] [i_2]), 9678))))) ? -630 : ((((!var_2) != (~-630))))));
                    var_22 += (((24012 & -1662999885) & var_5));
                }
            }
        }
    }
    var_23 = (max(var_3, var_4));
    #pragma endscop
}
