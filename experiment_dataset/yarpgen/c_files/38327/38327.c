/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_20 = var_0;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_21 = var_13;
                                var_22 = var_18;
                            }
                        }
                    }
                    var_23 ^= var_1;
                    arr_14 [10] [i_1] [i_1] [i_1] = var_3;
                    var_24 = var_0;
                }
            }
        }
        var_25 = var_14;
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_26 = var_14;
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                {
                    var_27 = var_13;
                    arr_22 [i_7] [i_7] [i_5] = var_18;
                    var_28 = (max(var_28, var_7));
                }
            }
        }
    }
    #pragma endscop
}
