/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;
    var_21 = (((((((((-127 - 1) ? var_5 : (-127 - 1)))) ? (max(var_7, var_8)) : var_19))) ? var_15 : var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_22 = (-100 ? (-127 - 1) : var_7);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0 + 1] [i_3] [i_0 + 1] [i_0] = (min(1, (min(-5, (~-42)))));
                                var_23 = ((((((-127 - 1) | (arr_6 [i_0 + 1] [i_1 - 3] [i_3 - 3] [i_4 + 2])))) ? ((max((!121), ((-(arr_11 [i_0] [i_1] [i_2] [i_3 - 2] [i_4 + 2])))))) : var_0));
                                var_24 = ((~(max(41, 144115188075855871))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_1] [i_2] = (arr_7 [i_0] [i_1 - 4] [i_0]);
                    arr_14 [3] [i_0 + 1] [i_0 + 1] [i_2 - 3] = (arr_7 [i_0 + 1] [i_1 - 3] [i_1 - 3]);
                }
            }
        }
    }
    var_25 *= ((((min((((var_9 + 2147483647) << (var_0 - 6161066681886972867))), var_16))) < var_4));
    var_26 = var_16;
    #pragma endscop
}
