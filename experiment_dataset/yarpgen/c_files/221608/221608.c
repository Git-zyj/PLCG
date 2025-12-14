/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((max((arr_5 [i_0] [i_2] [i_4]), (~1))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (((1 + (arr_2 [i_1 - 2]))));
                                var_18 += (!(-9223372036854775803 / 11427));
                                var_19 = (min(var_19, (((((max(var_6, var_5)) * 0))))));
                            }
                        }
                    }
                }
                var_20 = (((((arr_3 [i_0 - 3] [i_0 - 1]) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0 - 2] [i_0 - 2]))) | (arr_3 [i_0 - 2] [i_0 - 1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                var_21 = (max((((-976509691 + 2147483647) << (976509710 - 976509710))), 1));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_22 = (~9223372036854775807);
                    var_23 -= (((arr_9 [i_6] [i_6]) ? (arr_9 [i_6] [i_6]) : (arr_9 [i_6] [i_6])));
                }
            }
        }
    }
    #pragma endscop
}
