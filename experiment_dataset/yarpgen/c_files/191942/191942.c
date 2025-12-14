/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (max(var_18, ((((((var_9 ? var_8 : var_0))) ? (var_17 & var_1) : (~var_15))))));
        var_19 |= (min(((var_1 ? var_4 : var_1)), ((0 << ((((-28157 ? var_6 : 20097)) + 4730))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            {
                var_20 = ((((var_11 <= ((var_5 ? var_6 : var_10)))) ? ((((max(var_0, var_15))))) : (min(var_8, var_4))));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_16 [i_4] [i_2] [i_4] [i_4] [6] [i_1] = (min(6520435245118669036, 1));
                                var_21 = (((-45 & 11926308828590882563) ? ((var_12 ? var_10 : var_13)) : (((var_7 >> (var_2 - 1003347573))))));
                                arr_17 [i_4] [i_4] = max(-6844853895322410613, 10697376265097053388);
                                arr_18 [i_1] [4] [i_1] [i_1] [i_4] = (min(148, -6844853895322410589));
                            }
                        }
                    }
                }
                var_22 = (min(var_22, var_9));
            }
        }
    }

    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_23 = (var_2 % 115);
        var_24 |= ((((min(var_6, (~107)))) ? (((var_3 | var_7) ? ((6844853895322410622 ? 27383 : -6844853895322410625)) : var_1)) : (167 % -6844853895322410622)));
    }
    #pragma endscop
}
