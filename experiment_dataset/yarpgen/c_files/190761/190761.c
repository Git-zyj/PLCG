/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 = var_3;
    var_17 = (max(var_12, (~var_11)));
    var_18 = ((var_6 ? var_4 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = -956620911;
                arr_7 [i_0] [i_0] [10] &= (max((~6938), (arr_3 [12] [i_1 - 1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_19 = (max(((min(6935, 31672))), (((arr_10 [i_1 + 2] [i_0] [i_2] [i_0]) >> (31667 - 31661)))));
                            var_20 = ((min(6926, (arr_10 [i_0] [i_0] [i_0] [i_1 + 3]))));
                            var_21 &= ((!(((arr_9 [i_1 + 3] [i_1 - 1]) != 2271043459))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
