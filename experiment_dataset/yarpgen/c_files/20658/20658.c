/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (max((((2043019607 <= (((arr_1 [i_0] [i_0]) ? var_0 : var_11))))), (~var_17)));
        arr_3 [i_0] = ((((max((arr_0 [i_0 + 2]), 8840))) | ((max((arr_0 [i_0 - 1]), (arr_0 [i_0 + 2]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] = ((var_0 ? (min((arr_12 [i_1] [i_3 + 2] [i_0 + 2] [i_3] [i_1]), ((max(var_10, 52037))))) : var_15));
                        arr_15 [i_0] [i_0] &= (+(((arr_7 [i_3 - 2] [i_0 + 1] [i_0 + 2]) ? (arr_4 [i_3 - 1] [i_3]) : (arr_4 [i_3 - 2] [i_3]))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_20 [i_4] = (!var_10);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_19 = (max(var_4, (((((var_6 / (arr_16 [i_4] [i_4])))) ? var_7 : (max(-123, var_16))))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_20 = max((max(8825, (-109 * 10))), var_4);
                                arr_32 [i_4] [i_5] [i_7] [i_4] = ((((max(2032, (8840 / var_0)))) ? ((~(~var_17))) : -var_13));
                            }
                        }
                    }
                    var_21 = var_9;
                    var_22 = min(var_3, ((~(arr_22 [i_4]))));
                }
            }
        }
    }
    var_23 = ((((max((min(2754697942, var_0)), (1 * 3968)))) ? (((min(var_6, ((max(var_12, var_12))))))) : (((1 ? var_11 : var_18)))));
    var_24 |= ((var_17 ? var_0 : -var_13));
    var_25 ^= (65535 ^ 8840);
    var_26 = var_9;
    #pragma endscop
}
