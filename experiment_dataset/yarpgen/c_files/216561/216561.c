/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216561
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
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((118 ? -99 : (min((((var_18 ? -6226415614821113607 : var_2))), ((1 ? var_10 : var_14))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = (max(((244 ? ((1 ? 0 : (arr_4 [i_3]))) : (arr_11 [i_0] [i_0] [i_0] [3] [22] [19]))), var_12));
                                arr_12 [i_2] [i_2] [i_2] = 148;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((((((var_4 << (37 - 29)))) ? (((var_13 + 2147483647) >> var_6)) : var_17))) ? (max(((var_18 ? -6226415614821113614 : var_13)), var_14)) : ((((~1152921504606846975) ? ((max(var_17, -10410))) : ((var_4 ? var_15 : var_7)))))));
    #pragma endscop
}
