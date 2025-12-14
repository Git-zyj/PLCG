/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_9;
    var_12 = (min(16, (min((!10), ((23 ? 4097041877 : 0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (~18446744073709551609)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_14 += (((((arr_5 [i_0] [i_0] [7] [1]) + 2147483647)) << (((min((6278887992361752230 | 2529737926), (((var_7 ? var_5 : -87))))) - 219))));
                            var_15 = ((-1 ? 76 : (arr_5 [i_0] [i_0] [i_0] [i_0])));
                            var_16 = (max(var_16, ((((((((var_2 ? var_0 : (arr_5 [i_0] [i_0] [i_2] [i_3 - 1]))) - var_9))) ? (-724155630 < var_7) : ((((105 % var_1) == 14))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_17 = (max(var_17, (((((((var_1 ? -724155622 : var_4)) % (arr_9 [i_5] [i_4 - 2] [i_4 - 2] [10]))) ^ -1)))));
                            arr_12 [i_1] [i_0] = (min((((arr_2 [i_1] [i_4] [i_1]) - var_7)), (~1)));
                            var_18 = (max(var_18, (((((((arr_6 [i_0] [i_0] [i_5] [i_0]) >= var_1))) <= (((!(((arr_6 [i_0] [i_0] [i_5] [i_0]) < (arr_6 [i_0] [2] [i_5] [2])))))))))));
                            var_19 = (min(var_19, (((~(max(-77, (arr_7 [i_5] [i_4] [i_4] [i_4 + 1]))))))));
                        }
                    }
                }
                var_20 ^= ((((((arr_4 [i_0] [i_0] [i_0]) || var_9)) ? (!-18924) : ((((arr_10 [i_0] [i_1]) && var_8))))));
            }
        }
    }
    #pragma endscop
}
