/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 = var_2;
    var_19 = (~var_16);
    var_20 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_21 = (~-var_6);
                    arr_6 [i_0 + 1] [i_0] [i_1] [i_2] = ((~(!3085866941956211856)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_22 = ((!(arr_7 [i_1])));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [1] = ((~(~var_12)));
                            }
                        }
                    }
                }
                arr_13 [i_0] = ((-(~1024)));
                arr_14 [i_0] = (~-91);
                arr_15 [23] = (--1024);
            }
        }
    }
    #pragma endscop
}
