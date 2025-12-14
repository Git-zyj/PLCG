/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_14 *= ((var_1 < (11607369537820540477 >= 96)));
                                var_15 = var_1;
                                var_16 -= (~var_3);
                                var_17 = (max(var_17, var_7));
                            }
                        }
                    }
                    var_18 = (max(var_18, var_1));
                    arr_12 [i_1] [i_1] [i_2] = ((((-9223372036854775807 + 9223372036854775807) >> (var_2 + 6294797602780481414))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_19 = (((18 % var_6) ? (-1962085827 & 18446744073709551615) : var_8));
                                arr_20 [i_6] [i_1] [i_2 + 2] [i_2 + 2] = ((312522545 ? 0 : (arr_6 [i_0] [i_0 - 1] [i_0] [i_0 + 2])));
                                arr_21 [i_0 + 1] [i_1] [i_6] [i_6] [i_6] = max((arr_9 [i_2 + 2] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 + 1]), (((arr_9 [i_2] [i_2 - 1] [i_2 + 2] [i_2] [i_2 + 1] [i_2 - 1]) * (arr_9 [i_2] [i_2 + 2] [21] [i_2] [3] [i_2 + 2]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
