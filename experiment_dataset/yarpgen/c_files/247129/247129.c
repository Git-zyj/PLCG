/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, ((((((((max(-18, (arr_2 [i_2])))) >= ((var_5 - (arr_3 [i_0] [i_1])))))) - (min((var_1 || var_9), 14)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [9] [i_3] [9] [9] [i_4] [i_1] [i_1] = (arr_11 [18] [i_3] [i_1]);
                                var_11 *= (((((arr_9 [i_4 + 2] [i_4 + 4] [i_4 + 4] [i_4 + 4] [i_3]) || 4294967285)) || (((arr_9 [i_4 + 2] [i_4 + 3] [i_4 - 1] [i_4 + 2] [i_0]) > (arr_9 [i_4 + 2] [i_4 + 1] [i_4 + 3] [i_4 + 3] [i_3])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_12 *= ((((min((((10 >= (arr_8 [i_0] [i_2] [20] [i_2] [i_6 + 3] [i_6 + 3])))), (arr_15 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_0] [i_1])))) * (((var_2 * var_8) ? (arr_10 [i_5 + 1] [i_5] [i_5 + 1] [i_5] [i_5 + 1]) : (20 * var_5)))));
                                var_13 = -18;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (min(var_14, ((((2199023255551 ^ 4294967285) & var_7)))));
    #pragma endscop
}
