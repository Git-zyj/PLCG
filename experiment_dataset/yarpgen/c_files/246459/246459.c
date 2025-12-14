/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((((var_12 ? 1 : var_17))) ? (var_8 && var_7) : (1 >= 1)))) ? ((((max(1, 157))))) : (max((max(var_11, var_7)), (var_11 + var_7)))));
    var_21 = (min(((2147483631 && ((min(var_14, 193))))), (((((var_5 ? -101 : var_8))) && 83))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (min(var_18, (min(((max(var_10, var_10))), (max(var_2, var_3))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((((!(var_12 && var_16))) || ((((var_12 * 83) ? var_4 : var_7)))));
                    var_22 = (max(var_22, ((max(((((~var_19) & ((min(1, 116)))))), (((var_5 >= var_1) ? (~var_2) : (((var_6 ? 109 : var_5))))))))));
                }
            }
        }
    }
    var_23 = (max(var_23, var_9));
    #pragma endscop
}
