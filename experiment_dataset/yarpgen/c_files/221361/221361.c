/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] &= (max(((((-2748 ? 232 : 36)) <= 202)), (!var_4)));
        var_14 = (min(var_14, ((-228 ? (((var_9 ? var_13 : var_12))) : (min(var_0, -43))))));
        var_15 = (((max(var_4, ((var_3 ? var_3 : var_6)))) / var_4));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_17 [i_3] = (((min((var_12 & var_9), (min(var_12, var_5)))) & (~var_7)));
                                arr_18 [i_1] [i_2] [i_2] [i_3] [i_2] [i_4] [i_5 + 1] = ((-(max(var_9, var_1))));
                            }
                        }
                    }
                    var_16 = var_4;
                    arr_19 [i_1] [2] [i_3] = ((!(var_7 - var_7)));
                }
            }
        }
        arr_20 [i_1] = (min(((((var_6 && var_13) && var_7))), (((!var_10) ? (!var_7) : var_10))));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {
        var_17 = ((-8093359748021749695 ? 3604321099 : -121));
        var_18 &= (0 && 1614197247808735018);
        var_19 &= (((var_13 ? var_13 : var_11)) / (~var_13));
    }
    var_20 &= var_12;
    #pragma endscop
}
