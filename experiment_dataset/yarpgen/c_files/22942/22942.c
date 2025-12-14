/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [16] &= (((((min(var_12, var_12))) ? (((arr_7 [i_2] [i_1]) ? var_8 : -3170784900002464555)) : var_10)));
                    var_19 = -1602248048;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_17 [i_4 - 1] [i_3] [i_2] [i_3] [i_2] [i_2] = 4096;
                                var_20 = (((((arr_9 [i_0] [i_0] [i_0] [i_0]) ? var_12 : var_2))));
                                var_21 ^= ((+((var_4 ? (arr_16 [i_1] [i_1 - 1] [i_2] [i_3 + 2] [i_4 + 1] [i_1]) : (arr_3 [i_3 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    var_22 = (min(var_22, (1602248048 ^ var_10)));
                    arr_26 [i_5] [i_6] [8] [i_7] = (1602248048 ? 0 : (arr_0 [i_5 - 3]));
                    var_23 *= (((arr_4 [i_5 - 1]) ? -9223372036854775789 : var_14));
                }
            }
        }
    }
    var_24 = 65535;
    #pragma endscop
}
