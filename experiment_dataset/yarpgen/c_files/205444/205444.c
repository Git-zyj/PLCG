/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((max((min(((max(var_9, var_17))), ((var_13 ? var_17 : var_11)))), var_13)))));
    var_19 &= ((~(!var_7)));
    var_20 &= var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_21 = ((((max(var_2, ((var_9 ? var_7 : var_7))))) ? (max(((var_10 ? var_14 : var_7)), ((var_15 ? var_13 : var_15)))) : (max((~var_0), var_5))));
                    arr_6 [i_1 - 3] [20] &= ((((min(((min(var_16, var_13))), (max(var_16, var_17))))) ? ((((min(var_5, var_16))) ? ((min(var_0, var_6))) : ((min(var_12, var_6))))) : (min(((var_4 ? var_3 : var_15)), ((min(var_15, var_1)))))));
                }
            }
        }
    }
    #pragma endscop
}
