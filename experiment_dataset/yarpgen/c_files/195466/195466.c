/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_15 = ((18446744073709551615 ? 9929 : 18446744073709551615));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] [i_4] [i_2] [i_4] [i_0] = (((arr_0 [i_0]) ? 0 : (arr_0 [i_1 - 1])));
                                var_16 = (((-126 ? -9 : 11)));
                                var_17 = (((arr_10 [i_4 + 3] [i_4] [i_4] [i_4] [i_4] [i_1 - 3] [i_0]) >= (((arr_10 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_4] [i_0 + 1] [1]) * 228))));
                            }
                        }
                    }
                    var_18 = (min(var_18, ((((arr_8 [i_0 + 1] [14] [14] [14] [14]) ? (arr_8 [i_0 + 1] [3] [3] [i_1] [i_0 + 1]) : (arr_8 [i_0 + 1] [i_1 - 2] [i_2] [i_1] [i_0 + 1]))))));
                    var_19 = ((((1005 ? 0 : 8)) - (((65535 ? -9 : 9)))));
                }
                var_20 = ((1 & (max(((1023 ? -86 : -70)), (((arr_7 [i_1 - 2] [i_1] [i_0 + 1] [i_0 + 1]) ? 88 : 64530))))));
            }
        }
    }
    var_21 = (max(var_21, (64542 && var_1)));
    #pragma endscop
}
