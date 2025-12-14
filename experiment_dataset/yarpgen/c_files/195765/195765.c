/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [1] [i_2] [i_0] = (min(((+((min((arr_8 [i_1] [i_1] [i_2] [i_3] [i_2] [i_2]), (arr_3 [i_1])))))), (((!var_12) << ((((var_5 ? var_14 : var_15)) - 28))))));
                            var_16 = (max((arr_2 [i_1] [i_0]), ((((!var_3) || ((min(16, var_0))))))));

                            for (int i_4 = 2; i_4 < 17;i_4 += 1)
                            {
                                var_17 = ((((arr_8 [i_0 + 2] [i_2] [i_4 - 2] [i_4 - 1] [i_4] [12]) + -2469151190050409245)));
                                var_18 = (min(-9223372036854775804, (arr_5 [0] [0])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_19 [i_1] [i_5] [i_5] [i_0] = 7;
                            var_19 = (240 || var_0);
                            var_20 ^= ((!((!(((-9223372036854775804 ? var_8 : 214)))))));

                            for (int i_7 = 0; i_7 < 18;i_7 += 1)
                            {
                                var_21 *= var_3;
                                var_22 = (((-955274369 + 2147483647) << (15360 - 15360)));
                                var_23 = (min(var_23, -var_7));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (max(var_24, ((((((max(var_8, var_15) <= (!var_10)))))))));
    var_25 = (min(var_6, var_9));
    var_26 &= ((((((min(var_12, var_15))) << (240 <= 25749))) < ((var_15 ? ((var_9 ? var_14 : var_7)) : (-119 - 64)))));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 14;i_9 += 1)
        {
            {
                var_27 = (arr_25 [i_9]);
                var_28 = ((17 <= 354731548) >= ((var_5 / (arr_15 [i_9] [i_9] [i_9]))));
            }
        }
    }
    #pragma endscop
}
