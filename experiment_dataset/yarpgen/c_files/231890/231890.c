/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((var_11 ? (((var_7 < ((51479 ? var_2 : var_2))))) : var_15)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = (((var_11 ? (arr_5 [i_0 + 1] [i_0 - 1]) : var_13)));
                    var_19 = (((arr_2 [i_0] [i_1] [i_0]) + (((((min((arr_2 [i_0] [i_1] [i_0]), 0))) ? ((max(var_11, var_16))) : ((min(var_0, 0))))))));
                    arr_7 [i_0] [i_1] [i_0] [i_1] = ((!(max(1, 1))));
                }
            }
        }
    }
    #pragma endscop
}
