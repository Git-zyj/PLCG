/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((12 ? 61 : var_7));
    var_11 = (((var_5 - var_8) + (((var_3 | var_7) ? (var_2 && var_3) : var_1))));
    var_12 = (((((var_4 - var_9) ? (((var_9 ? var_8 : var_7))) : (var_6 ^ var_2))) > ((var_9 ? (((var_6 ? var_9 : var_0))) : var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((61 ? (((-20399 / -50) ? (-62 / 49983) : 15564)) : ((-5546306230888350953 ? 1 : 7729))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_13 = ((var_3 ? ((((var_8 && (var_0 == var_9))))) : var_1));
                            var_14 = ((((var_7 > var_7) ? (var_2 % -47) : (var_2 <= var_9))) * var_5);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
