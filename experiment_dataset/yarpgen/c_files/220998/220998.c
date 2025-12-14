/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = ((!1) ? var_7 : ((((((!(arr_5 [10] [10] [20]))) && var_17)))));
                arr_6 [3] = ((-((~(arr_1 [2] [11])))));
                arr_7 [2] = ((~((~((-19068 ? var_4 : 19))))));
            }
        }
    }
    var_20 = ((((~var_17) ? ((1 ? var_6 : var_11)) : var_13)));
    var_21 = ((((((min(2697815273, var_4))) && var_6)) ? ((var_10 ? -33499 : var_7)) : ((max(25, var_11)))));
    var_22 ^= var_7;
    #pragma endscop
}
