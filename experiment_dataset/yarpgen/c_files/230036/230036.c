/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_20 ^= var_0;
                            var_21 = 2147483647;
                            var_22 = ((((((((~(arr_8 [i_3] [i_3] [i_3] [i_3 - 2]))) + 2147483647)) >> ((((1 ? -5296219687439254834 : (arr_3 [i_0] [i_0] [i_0]))) + 5296219687439254860)))) & (((((var_13 ? var_7 : (arr_3 [i_0] [2] [i_1])))) ? var_1 : (arr_6 [i_0])))));
                        }
                    }
                }
                var_23 = (var_9 & 53069);

                /* vectorizable */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    arr_11 [i_0] [i_0] [i_0] [i_4] = ((arr_3 [i_0] [i_0] [i_0]) ? ((671417585 ? (arr_10 [1] [i_1]) : var_13)) : -838895740);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_24 = (~1);
                                arr_18 [9] [i_0] [i_0] [i_4] [i_0] [i_1] [i_0] = ((var_19 && (var_8 <= -5296219687439254834)));
                            }
                        }
                    }
                }
                arr_19 [i_0] [i_1] [i_1] = var_4;

                /* vectorizable */
                for (int i_7 = 3; i_7 < 11;i_7 += 1)
                {
                    var_25 = (arr_2 [i_0] [i_1] [1]);
                    var_26 = ((((2147483647 ? -671417586 : var_1))) ? 84 : var_11);
                }
            }
        }
    }
    var_27 = (max(((var_4 ? (!63731) : var_18)), -632963470));
    var_28 = var_14;
    #pragma endscop
}
