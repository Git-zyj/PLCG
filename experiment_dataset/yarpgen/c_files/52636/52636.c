/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((2147483647 << ((((var_2 ? var_2 : var_14)) - 48856))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((((((~3542562666675726879) >> (((arr_2 [i_0 - 1] [i_0 - 1]) - 3702))))) ? ((((arr_1 [i_0] [i_0]) ? 8714693706794208685 : 4152031195))) : (((arr_0 [1]) % (arr_2 [i_0 - 1] [i_0 - 1])))));
        arr_4 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_18 = var_12;
        var_19 = (arr_2 [i_1] [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_20 = ((var_13 * (arr_9 [i_3 + 3] [i_3 + 3] [i_3] [i_3 + 3])));
                        arr_13 [i_4] [0] [i_2] [0] = ((-1 ? (arr_1 [i_3 + 3] [i_2 - 2]) : (arr_9 [i_1] [i_2] [i_3 + 2] [4])));
                        arr_14 [i_1] [i_4] [i_4] [i_4] [i_2] = (arr_8 [i_4]);
                        var_21 = (((1 != 62688) != 9223372036854775804));
                    }
                }
            }
        }
    }
    var_22 = var_2;
    var_23 = var_0;
    #pragma endscop
}
