/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (max(((~(arr_1 [i_0 + 1] [i_1 + 2]))), (((var_3 == (arr_1 [i_0 + 1] [i_1 - 1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_1, var_12));
                                arr_14 [i_0] [i_1] [i_2] [0] [i_4] [i_3] [i_1] = ((-((~(((arr_12 [i_1] [i_1]) ? -21893 : var_1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_21 = ((-(8 != -64)));
                            arr_24 [i_5] [13] [i_5] [i_8] = -4301584760763289559;
                            var_22 = (arr_18 [i_5]);
                            arr_25 [1] [i_5] [i_5 - 1] = (((!-var_1) ? 4301584760763289559 : (((((18446744073709551615 ? (arr_21 [i_5] [11] [i_7] [i_8]) : (arr_15 [i_8]))))))));
                        }
                    }
                }
                arr_26 [i_5] = max(1, 15477747621101761096);
                var_23 = (min(var_23, 0));
            }
        }
    }
    var_24 = 12311797423945607878;
    #pragma endscop
}
