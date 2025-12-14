/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = var_5;
                var_18 += 4658803621807919817;
                arr_5 [i_0] [i_1] = var_13;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_19 |= (((((var_7 ? 16449 : -8378))) && ((((arr_4 [i_2 + 2] [i_6]) ? -12654 : (arr_4 [i_2 - 1] [i_2 + 2]))))));
                                var_20 = ((+(max((arr_2 [1]), ((18446744073709551615 ? 1 : var_1))))));
                            }
                        }
                    }
                }
                var_21 = (arr_8 [i_2] [i_3] [i_3]);
            }
        }
    }
    #pragma endscop
}
