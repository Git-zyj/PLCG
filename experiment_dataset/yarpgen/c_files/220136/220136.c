/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 = (((((~9223372036854775807) < (((9223372036854775807 ? 255 : (arr_6 [i_2]))))))) >> (var_7 + 20));
                                arr_11 [i_2] [i_3 + 2] = (min((((arr_9 [i_0 - 3] [i_0 - 2] [i_0] [i_0] [i_0 - 1] [i_2 - 2] [i_3 - 1]) ? var_16 : (arr_9 [17] [17] [i_0 - 3] [17] [i_0 - 2] [i_2 - 1] [i_3 - 1]))), var_16));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_19 ^= 9223372036854775807;
                                arr_18 [i_1] [i_6] [i_2 - 2] [i_1] [i_6] [i_2 - 2] [i_6] = (arr_12 [i_0] [i_0 - 1] [15] [10] [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_23 [i_7] [i_1] = (max((~var_15), (((1241302547 | (arr_22 [i_1]))))));
                                arr_24 [15] [17] [i_2] [i_7 - 1] [i_7] [i_8] [17] = (arr_17 [i_2 - 2] [i_1] [17] [i_7 - 3] [i_8 - 1]);
                                var_20 = (((arr_4 [0]) ? ((((arr_5 [i_2 - 1] [i_2 - 2] [i_2]) > (arr_5 [i_2 + 1] [i_2 + 1] [i_2])))) : 2141693206));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_16;
    #pragma endscop
}
