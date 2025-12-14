/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (((((((var_7 ? 11069633448008855003 : 15566)) ^ (9223372036854775807 <= 847654599)))) ? (27451 == 7377110625700696613) : var_14));
                var_21 += var_5;
                var_22 = (max((arr_5 [i_0] [i_0] [i_0]), ((var_12 ? var_17 : (arr_5 [i_0 - 2] [i_1] [i_1 + 1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_19 [i_6] [i_5] [i_3] [i_3 + 1] [i_2] = 1257565198;
                                var_23 |= (((((arr_8 [i_2 + 1] [i_3 + 3]) * 1))) ? (((arr_8 [i_2 - 1] [i_3 + 1]) ? var_11 : (arr_8 [i_2 - 1] [i_3 + 3]))) : (((!(arr_8 [i_2 + 2] [i_3 + 1])))));
                                var_24 = (min(((2180805936 ? ((var_11 ? var_12 : 2147483647)) : ((((arr_9 [i_6] [i_3 + 2] [i_2 + 2]) - (arr_7 [12])))))), (arr_14 [i_3] [11] [13] [10] [15])));
                                var_25 = (min(var_25, (arr_14 [i_5] [i_3 - 1] [i_4] [14] [i_6])));
                            }
                        }
                    }
                    var_26 = var_0;
                }
            }
        }
    }
    #pragma endscop
}
