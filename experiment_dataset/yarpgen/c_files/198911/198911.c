/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] = (arr_6 [i_0] [i_0 + 2] [i_2] [i_3]);
                                arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_4] = ((~((((arr_2 [i_0] [i_1]) != ((((-9223372036854775807 - 1) ? (arr_10 [i_0] [i_1] [i_2] [3] [i_4] [i_4]) : var_3))))))));
                                var_16 *= ((!(3734206817 - 9223372036854775807)));
                            }
                        }
                    }
                    var_17 ^= (arr_11 [i_0] [i_1]);
                    var_18 = (-115 | 136);
                }
            }
        }
    }
    var_19 = (-9223372036854775807 - 1);
    #pragma endscop
}
