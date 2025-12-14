/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = min(var_15, 17594);
    var_20 |= (~((17594 - (min(var_8, var_13)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 *= (min((((!(arr_3 [i_2] [i_1] [i_0])))), (min((arr_5 [7] [7]), (((!(arr_4 [i_0] [i_0] [i_0]))))))));
                                var_22 += ((~(min(((var_3 ^ (arr_12 [i_4] [i_0] [i_0] [i_0] [i_1] [i_0]))), 23585))));
                                var_23 = (min((((var_7 <= ((var_12 ? (arr_10 [i_4] [i_1] [i_1] [i_0]) : 8378185430982115536))))), var_6));
                            }
                        }
                    }
                    var_24 = (max(((min(22088, (arr_4 [i_2] [i_1] [i_0])))), (arr_9 [i_0] [9] [i_0] [i_0] [i_0])));
                    var_25 = ((((-(arr_5 [i_2] [i_1]))) <= (min((((arr_5 [i_2] [i_0]) - var_0)), var_4))));
                }
            }
        }
    }
    var_26 = (min((var_14 - var_12), ((47941 + ((var_1 ? var_16 : var_15))))));
    var_27 = (max(var_27, ((max((min(((var_14 ? 0 : 511)), (var_17 == 4294967280))), (max(var_18, (min(var_10, 17594)))))))));
    #pragma endscop
}
