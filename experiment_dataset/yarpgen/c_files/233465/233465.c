/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (1 <= 1023)));
    var_15 = -var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (!1)));
                                var_17 = ((((arr_5 [i_1 + 4] [i_1 - 1]) ? (((arr_9 [7] [i_2] [i_1 - 1] [i_0 - 3]) ^ var_12)) : (32512 | var_10))) * (((((((arr_0 [i_0]) ^ var_6)) <= ((((arr_3 [i_1] [i_2] [i_2]) && var_9))))))));
                                var_18 = (max(var_18, (arr_5 [i_1] [i_3])));
                                var_19 = (32498 | 0);
                                var_20 = 18446744073709551615;
                            }
                        }
                    }
                }
                var_21 = var_4;
                var_22 = (min((!103), (arr_4 [i_0])));
                var_23 = (arr_6 [i_1 + 4] [i_1 + 4] [i_0 + 1]);
            }
        }
    }
    #pragma endscop
}
