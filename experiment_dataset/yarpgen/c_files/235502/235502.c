/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_0] [i_2] [i_4] [i_4] = (((-6343416995180988258 + 9223372036854775807) >> (((-81 % 6687998831946836291) + 137))));
                                var_17 = var_9;
                                var_18 = 22;
                                arr_16 [3] [i_1] [i_2] [5] [i_0] [i_4] = ((((((((max(var_3, (arr_2 [i_0] [i_0])))) > ((2147483647 ? 1 : 1)))))) <= (18446744073709551615 % 18446744073709551589)));
                            }
                        }
                    }
                }
                var_19 = (min(var_19, (((((((arr_12 [i_1 + 1] [i_1 + 1] [i_0] [18]) ? (arr_12 [i_1 + 2] [i_0] [i_1] [14]) : 18446744073709551592))) || (((127 ? 1 : -126))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_20 = ((-92 <= ((min(1, 125)))));
                arr_21 [i_5] = (28 < -114);
                arr_22 [i_5] [i_6] = ((var_5 << (((((((151 ? -3381 : 248))) * ((var_8 ? var_1 : var_7)))) - 16624316450547060485))));
            }
        }
    }
    #pragma endscop
}
