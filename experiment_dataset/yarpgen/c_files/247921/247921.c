/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((-17478 ? 762732487 : -17478)))) ? -762732487 : -762732473);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = (((((arr_0 [i_1 - 1] [i_1 - 1]) ? 1 : (arr_0 [i_1 + 1] [i_1 - 1])))) ? var_6 : (~65535));
                                arr_14 [i_0] [i_1] [0] &= -0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (min(1, 3731879380));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                var_20 = (max(var_20, 1695211817));
                var_21 = (min(var_21, (((-((38 ? (arr_11 [i_6] [i_5]) : var_17)))))));
            }
        }
    }
    var_22 = var_12;
    #pragma endscop
}
