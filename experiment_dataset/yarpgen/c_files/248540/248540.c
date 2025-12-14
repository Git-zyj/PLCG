/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_12 = (53 - 26);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 *= ((~(-7473854720229842797 & var_9)));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_1] [i_1] [1] = (((arr_10 [i_3 - 1] [i_1 - 1]) ? ((var_7 ? (arr_11 [i_0] [1] [1] [i_3] [i_3] [i_4]) : 18446744073709551590)) : (((arr_2 [i_1]) ? (arr_12 [i_0] [1] [i_0] [3] [i_0]) : 18446744073709551604))));
                                arr_15 [i_0] [14] [i_0] [i_0] = ((81 == (arr_4 [i_0])));
                            }
                        }
                    }
                    var_14 += ((-(~789267206591460567)));
                }
                var_15 = (max((arr_1 [i_1 + 1] [i_1 + 1]), (arr_13 [i_0] [i_1] [i_1 + 1] [i_1] [12])));
                arr_16 [i_0] [i_1] [8] = ((28672 ? 1 : 8404));
            }
        }
    }
    var_16 = var_2;
    var_17 = (0 ^ 1);
    var_18 = var_2;
    var_19 -= 44;
    #pragma endscop
}
