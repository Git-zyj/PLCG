/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = var_8;
                arr_6 [i_0] [i_1] = (arr_2 [i_1]);
                arr_7 [i_0] = var_6;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 *= (~var_2);

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                arr_15 [2] [i_3] [i_2] [i_3] [i_4] = var_4;
                                var_16 = (max(var_16, (!var_11)));
                            }
                            var_17 = (((!var_4) ? (min(var_10, -4294967295)) : (((((((arr_8 [i_0 + 1] [14] [14]) / var_7)) > 47))))));
                            var_18 = ((~(max(var_1, ((var_11 ^ (arr_4 [i_1] [i_1] [i_3])))))));
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(var_19, var_8));
    var_20 += ((max(var_1, (var_3 % 435449425))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_21 = (min(var_21, ((((~var_8) <= (((!var_4) >> (!var_11))))))));
                arr_22 [7] [i_5] = (arr_11 [i_5] [i_5] [i_6] [i_6]);
            }
        }
    }
    #pragma endscop
}
