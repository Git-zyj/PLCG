/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [13] [i_2 + 4] [0] [i_0] = ((!(arr_5 [i_1] [13])));
                    var_20 *= (arr_6 [i_0] [i_1] [11]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 |= (+-2147483648);
                                arr_15 [i_0] [4] [i_2] [4] [i_4] = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_13;
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 11;i_6 += 1)
        {
            {
                arr_23 [i_5 + 1] = ((((~239) / var_18)) * ((max(2147483648, var_17))));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_23 |= (arr_22 [5]);
                    arr_28 [i_7] [i_6 - 3] = ((10097813759577633449 ? (arr_4 [i_6 - 2] [i_6 - 1]) : (arr_4 [i_6 - 1] [i_6 - 3])));
                    arr_29 [i_6] [i_6] = var_4;
                }
            }
        }
    }
    var_24 = 65535;
    var_25 = 2147483647;
    #pragma endscop
}
