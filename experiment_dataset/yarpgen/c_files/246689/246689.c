/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (61128 / var_12);
    var_14 = ((-(((-2098682559 == var_8) | ((32761 ? 60 : 2098682542))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_15 += 40040;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_16 *= ((-(arr_0 [i_1 + 1] [i_0])));
                    var_17 = (((arr_6 [i_2] [i_1] [i_0] [i_0]) + 221));
                    var_18 = (((arr_4 [i_0] [5]) ? var_3 : (arr_4 [i_1 + 1] [i_0 + 1])));
                    var_19 = var_9;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_20 = -var_9;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_21 = ((((!((!(arr_15 [6] [i_1] [i_3] [i_4] [i_5]))))) ? ((max(65524, (!2098682559)))) : var_7));
                                var_22 = (max(((193 ? (arr_9 [i_0] [i_0 - 1] [i_1 - 1]) : var_7)), (arr_9 [i_0 + 3] [i_0 + 4] [i_1 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 -= var_11;
    #pragma endscop
}
