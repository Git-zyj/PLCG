/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        var_17 *= var_5;

                        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                        {
                            var_18 = var_12;
                            var_19 = (min(12253, 99));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            var_20 = 73;
                            var_21 = var_8;
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_22 = var_10;
                                arr_19 [i_6] = 1;
                            }
                        }
                    }
                    var_23 = (min(var_23, ((max(var_2, (min(-7, var_13)))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_26 [i_0] [i_0] [3] [i_0] [i_0] = (max(31, (max(var_6, var_9))));
                                var_24 = (min(var_24, var_4));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 ^= var_3;
    var_26 = var_1;
    var_27 = var_1;
    #pragma endscop
}
