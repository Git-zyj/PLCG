/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = (min(var_12, 18366094406322562055));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((((((!6870485394872864642) + (max((arr_5 [i_0] [i_0] [i_0]), var_10))))) ? (arr_3 [i_0]) : (-100 * -109)));
                var_13 = (min(var_13, var_7));

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 = (arr_2 [i_0] [i_1]);
                                var_15 = 2147483647;
                                var_16 = (-127 - 1);
                            }
                        }
                    }
                    var_17 = 4767281975526792111;
                    var_18 = 16944956377767536286;
                }
            }
        }
    }
    #pragma endscop
}
