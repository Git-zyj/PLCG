/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -25825;
    var_18 = var_13;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = (((min(1742395885285161284, 116)) >= (((~191) ? 3927000051373071424 : 4968645301581533122))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_3] [i_1] [19] = var_4;

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            var_20 *= ((!((((arr_14 [i_4] [i_4 + 1] [i_4] [i_4 - 1] [i_4] [1]) ? (arr_8 [i_1] [i_2] [i_2] [15]) : -28594)))));
                            var_21 = ((var_12 & (arr_6 [1] [i_1])));
                        }
                        arr_16 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] = (!447379313);

                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            var_22 = 1533345030;
                            var_23 *= (!-28591);
                            var_24 &= ((((var_11 ? 1533345050 : -16895)) ^ (((var_12 ? (~6869) : (!var_16))))));
                            arr_20 [i_0] [i_3] [i_3 + 1] [i_3 + 1] = ((!((!(arr_3 [i_3 + 1] [i_5 - 1])))));
                        }
                        var_25 = ((~(max((arr_11 [i_3] [i_3 + 3] [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_3 + 2]), (arr_11 [i_3] [i_3] [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 3])))));
                    }
                }
            }
        }
    }
    var_26 = ((var_4 <= var_5) ? var_7 : (((var_1 << (var_6 - 10806000076056020235)))));
    #pragma endscop
}
