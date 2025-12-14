/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((max(((22727 ? 32767 : var_3)), ((var_7 ? var_2 : 0)))) | ((39 ? var_9 : ((var_8 ? 0 : var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0 + 2] [i_1] [i_0] = (((((4173344697 ? ((((arr_1 [i_1]) && var_10))) : (40 <= 42810)))) ? (arr_5 [i_0] [i_0 + 1]) : (((((((!(arr_0 [3] [3])))) >= ((max((arr_5 [i_0] [i_0]), 40)))))))));
                var_16 += (-8271973766173141133 != 9725);
                var_17 = ((!(((-(~22727))))));
            }
        }
    }
    var_18 = var_6;
    #pragma endscop
}
