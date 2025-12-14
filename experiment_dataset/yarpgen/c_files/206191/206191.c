/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((-(61 || 0)))) ? ((58350 ? var_3 : (var_2 ^ var_7))) : 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (((arr_3 [i_0] [i_0]) ? (((arr_4 [i_1 - 2] [i_1 - 1] [i_0]) ? 4485746905990308894 : (arr_4 [i_0] [i_0] [6]))) : ((var_9 ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0])))));
                var_12 = (arr_0 [i_0]);
                var_13 = (((18446744073709551599 >> (18446744073709551615 - 18446744073709551587))));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_14 = (arr_6 [i_0] [12]);
                    var_15 = var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 = (((arr_0 [i_0]) < (!1528013841)));
                                var_17 = ((var_3 << ((((-117 ? 134217727 : 0)) - 134217711))));
                                var_18 = ((((~var_2) ? (arr_11 [i_1 + 1] [i_0] [i_2] [i_3] [1] [i_2] [i_1]) : (arr_11 [i_4] [i_4] [i_3] [i_2] [i_1] [i_1] [i_0]))));
                                var_19 = -var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_0;
    #pragma endscop
}
