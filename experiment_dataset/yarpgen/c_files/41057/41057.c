/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = (((arr_4 [i_0] [i_0]) ? ((((var_10 != (arr_7 [i_0] [i_0] [i_0]))) ? (arr_0 [i_0 + 2]) : ((var_9 ? var_11 : (arr_5 [i_0] [i_0]))))) : ((max((((!(arr_9 [i_0] [i_2] [i_0])))), (arr_7 [i_0 - 1] [i_1 + 1] [i_1 + 1]))))));
                    arr_10 [i_0] [i_0] [i_0] = -31407;
                    arr_11 [i_0] [i_0] [i_2] = (((arr_6 [i_2]) ? (min(1, 9223372036854775807)) : ((max(((var_9 ? var_7 : var_5)), (~var_3))))));
                    var_13 *= ((((max((arr_0 [i_0 + 2]), (arr_0 [i_0 + 1])))) ? (((arr_5 [i_0] [i_0]) ? ((1 & (arr_6 [i_2]))) : ((var_10 >> (((arr_3 [i_2]) - 42996)))))) : (((arr_9 [i_1 + 1] [i_0 + 2] [i_0 + 2]) / (arr_6 [i_0 + 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] = ((((max(62268, 62268))) ? (arr_16 [i_4] [i_4] [i_4] [i_4] [i_3] [i_2] [i_1 - 1]) : (((arr_8 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 + 1]) ? (arr_16 [i_2] [i_4] [i_4] [i_4] [i_1 - 1] [i_2] [i_1 - 1]) : (arr_0 [i_0 + 1])))));
                                var_14 *= (var_11 ? ((((((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) / -9223372036854775807))) ? (var_2 / 57060) : (max(-9223372036854775807, 15051210646738382293)))) : ((((!28466) ? var_6 : var_7))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = 28466;
    var_16 = (((((var_7 * (!1)))) != (min(((155 ? 514441125 : 456103492)), var_9))));
    #pragma endscop
}
