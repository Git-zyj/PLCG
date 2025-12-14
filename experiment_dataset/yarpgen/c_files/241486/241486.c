/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (3262491396 ? 18446744073709551596 : 1);
    var_15 = (((-60 * 0) ? ((((var_13 != (var_3 && var_9))))) : ((3262491398 ? 3226788360 : 70))));
    var_16 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_3] [i_4] [i_4] [i_0] [i_0] = var_13;
                                arr_12 [i_0] [i_4] [i_2] [i_0] [3] = (3262491388 & 832729312);
                            }
                        }
                    }
                    arr_13 [i_0 + 3] [i_1] [i_1] [i_2] = (arr_2 [i_2 - 1] [i_0 - 3]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [i_2] [12] [i_6] = (arr_16 [i_0] [i_5] [i_2 + 1] [i_5] [i_6]);
                                arr_21 [i_0] [3] [i_2 - 1] [i_5] [3] = ((-(var_3 <= var_4)));
                                arr_22 [i_5] [i_1] [0] [i_2] = ((var_7 > (arr_3 [i_2 - 1] [i_5] [i_6])));
                            }
                        }
                    }
                    arr_23 [i_0] [i_2 - 1] [i_0] [i_2] = (arr_1 [i_2]);
                }
                arr_24 [i_1] = (~var_10);
                arr_25 [i_0] [i_0] = var_12;
            }
        }
    }
    var_17 = ((((var_1 ? (1 + 862401268459905645) : 1032475900)) * (1 / 91)));
    #pragma endscop
}
