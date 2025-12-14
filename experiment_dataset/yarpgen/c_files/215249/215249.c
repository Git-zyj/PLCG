/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = 114;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2 + 1] [i_1] [i_3 - 1] [i_2 + 1] [i_1] = ((70 ? 65535 : 65535));
                                arr_14 [12] [i_1] [i_2] [i_2] [i_2] [i_3 + 1] [i_2] |= 4294967295;
                                var_20 = var_4;
                                var_21 += (min(70, (min((arr_3 [i_0] [i_4 - 2] [i_0]), 17))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = 70;
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_25 [i_6] [i_6] [i_5] [i_5] [i_7] = ((((max((arr_16 [i_5]), (arr_16 [i_5])))) ? (((-(arr_16 [i_5])))) : 18446744073709551615));
                            var_23 = (30 < -1);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_24 = (((1 ? 1 : 9)));
                            var_25 = (min(var_25, var_15));
                            var_26 = -var_7;
                        }
                    }
                }
                var_27 += var_8;
                var_28 -= ((62 ? -32 : 12243));
            }
        }
    }
    #pragma endscop
}
