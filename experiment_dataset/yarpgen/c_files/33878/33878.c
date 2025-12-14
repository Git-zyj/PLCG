/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((!(17116 || 17093)));
                var_10 = (~var_4);
                var_11 *= ((var_0 & (~var_4)));
            }
        }
    }

    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        var_12 = 62325;
        var_13 = (~32544);
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                arr_16 [6] [i_4] = var_2;

                for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    arr_19 [12] [i_5] [i_5] = var_0;
                    arr_20 [i_3] [i_3] [i_4] [i_5] = (!var_0);
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    var_14 += var_8;
                    var_15 = (max(var_15, var_6));
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                {
                    var_16 |= var_0;
                    var_17 = var_9;
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                {
                    arr_28 [i_3] [i_4] [i_8] = (((var_9 <= var_0) | (~var_5)));
                    arr_29 [i_3] [i_8] [i_8] &= var_6;
                }
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 20;i_10 += 1)
                    {
                        {
                            var_18 |= var_8;
                            var_19 = var_2;
                            var_20 = var_5;
                        }
                    }
                }
            }
        }
    }
    var_21 = var_5;
    #pragma endscop
}
