/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = ((var_3 * -1) ? 6066119108331749002 : (((-(arr_2 [i_0] [i_1] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_12 = 1536;
                            var_13 = (min(var_13, ((((~-24) ? ((max((arr_6 [i_0] [i_1] [i_3]), ((-24 ? 66 : (arr_9 [i_3] [i_2] [i_1] [i_1] [i_0] [i_0])))))) : (((23 || -1351556425861288474) ? (((arr_6 [i_2] [3] [i_2]) ? var_4 : var_2)) : -2147483644)))))));
                            var_14 ^= (arr_5 [i_0] [i_0] [i_2 - 1] [22]);
                            var_15 = ((!(arr_9 [i_1] [i_2 + 1] [i_2] [i_2] [i_3 - 2] [i_3])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((((((~9223372036854775803) ? (arr_0 [i_4] [i_5]) : (max((arr_12 [i_4] [21] [i_4] [21]), var_7))))) ? 33 : 7)))));
                                var_17 = (max(var_17, (((!((((arr_14 [i_0] [i_1] [i_6] [i_5]) ? (((arr_11 [i_1] [i_1]) ? (arr_9 [i_6] [i_5] [i_1] [i_1] [i_1] [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0]))) : ((max(-905691995, 1)))))))))));
                                arr_18 [i_0] [i_4] [i_4] [i_5] [i_6] = (min((((((292957979802739910 ? 52 : -28))) ? (max((arr_17 [i_0] [i_1] [i_1] [i_5] [i_6] [i_6] [i_4]), -2147483638)) : 110)), (arr_13 [i_6] [i_5] [i_1] [i_1])));
                                var_18 = var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((!-55) ? 2782952110352752663 : (((~(var_8 != 4973927725402713595)))));
    var_20 = ((~((var_3 ? var_1 : 5823775461227655737))));
    #pragma endscop
}
