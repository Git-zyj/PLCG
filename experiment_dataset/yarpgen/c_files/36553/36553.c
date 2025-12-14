/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = (max((((((6930 ? var_3 : 49152))) ? var_3 : 57658)), 22));
                                arr_12 [8] [i_1] [i_2] [i_2] [i_4] = (min(((max((arr_3 [i_1] [i_2] [i_3]), (58611 <= 1)))), (arr_5 [i_0 - 1] [i_0 - 1])));
                                arr_13 [10] [i_0] [8] [i_2] [i_3] [i_4] &= 0;
                            }
                        }
                    }
                }
                var_20 = var_7;
                var_21 = ((var_6 ? (min(((max(3, 1))), (max(1, var_14)))) : (arr_5 [i_1 - 1] [15])));
                var_22 = (min(1, 1953610803727295354));
            }
        }
    }
    var_23 *= var_0;
    #pragma endscop
}
