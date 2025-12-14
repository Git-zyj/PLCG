/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_11 ? var_16 : ((var_18 ? var_14 : var_18))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_20 *= (((((-92 ? 444125245 : 4))) ? (((var_18 ? var_8 : var_8))) : (((var_10 ? var_15 : (min(var_14, var_1)))))));
                            var_21 = (min(((((min(var_12, var_18))) && var_9)), ((var_16 >= (min(var_12, var_18))))));
                        }
                    }
                }
                arr_10 [i_1] = (((min(var_0, var_0))) ? ((((min(var_3, var_5))) / ((var_17 ? var_16 : var_2)))) : var_3);
                var_22 -= ((var_15 ? (var_18 >= var_16) : (var_5 | var_9)));
                arr_11 [i_0 - 2] [i_1] = ((((((var_1 ? var_7 : var_13))) ? var_12 : var_16)));
                var_23 = ((var_14 & (max(var_8, var_2))));
            }
        }
    }
    #pragma endscop
}
