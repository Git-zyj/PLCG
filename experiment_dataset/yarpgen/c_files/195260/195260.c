/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_6 ? var_13 : var_4))) >= 9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((~(max(var_3, 11300492991504365673))));
                    var_17 = ((((((arr_3 [i_1 + 2] [i_2 + 2] [i_2]) ? (arr_3 [i_1 + 1] [i_2 + 1] [i_1 + 1]) : (arr_3 [i_1 - 2] [i_2 - 1] [i_1 - 2])))) ? (((arr_3 [i_1 - 1] [i_2 + 3] [i_2 + 3]) ? (arr_3 [i_1 + 1] [i_2 - 1] [i_2]) : (arr_3 [i_1 + 1] [i_2 + 2] [i_2]))) : (((arr_3 [i_1 + 2] [i_2 + 3] [2]) ? 57899 : (arr_3 [i_1 + 3] [i_2 + 3] [i_2])))));
                    arr_10 [i_0] [i_0] = ((var_4 ? (((7 ? var_14 : var_10)) : (((arr_3 [i_0] [i_0] [i_0]) & var_11)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            {
                arr_16 [i_3] [i_4] [i_3] = (max((max((arr_7 [i_3] [i_3] [i_3]), (arr_6 [i_4] [i_4] [i_3]))), (arr_4 [i_4 - 3] [i_3] [11])));
                var_18 = (min(((max((min(-2815837079870201639, -8728717298401083465)), 33095))), (~var_0)));
                arr_17 [7] [i_4] = (arr_8 [17] [i_4]);
            }
        }
    }
    var_19 = ((((((max(744662782783123355, var_8)) && var_9)))));
    #pragma endscop
}
