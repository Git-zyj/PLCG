/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_8 ? (!var_7) : (((!var_2) ? (max(-2117222054, var_9)) : ((var_5 ? var_10 : var_9))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = 1;
                    var_17 = 1;
                    var_18 = ((((!((min(1, 2147483647))))) ? (((!(arr_0 [i_0])))) : var_0));
                    arr_6 [1] [i_1] [i_2] [i_2] = (max((arr_0 [i_2]), (max((arr_3 [i_2 + 2] [i_2 - 1] [i_2 + 2]), (arr_0 [i_1])))));
                }
            }
        }
    }
    var_19 = 2147483647;
    #pragma endscop
}
