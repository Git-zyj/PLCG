/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= 102;
    var_19 = 84;
    var_20 = (~4294967289);
    var_21 = (11666 | 7);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = var_2;
                var_23 *= (min((max(((var_2 ? (arr_2 [i_1] [i_0]) : -106)), (((64142 ? 1 : 102))))), 7));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_24 = ((+(((arr_0 [i_0]) ? var_14 : (((arr_9 [i_0] [i_0] [i_0] [i_1]) + var_5))))));
                                var_25 -= 1;
                                var_26 = 8;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_27 = var_10;
                                var_28 = 0;
                                var_29 = (((arr_18 [i_1] [i_7 - 2] [i_7] [i_7] [1] [i_1]) && (arr_18 [i_1] [i_7 - 2] [3] [i_7] [i_7] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
