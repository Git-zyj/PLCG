/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    var_19 = (min(var_19, var_14));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_20 &= ((min(44, (max(-1202012676, 0)))));
                                var_21 += (min(-1, 25));
                                arr_12 [i_0] [i_1] [i_3] [i_3] [i_4] = ((+((((max((arr_11 [i_0] [i_0] [6] [i_0] [6] [i_0] [i_0]), 1))) ? 24 : (arr_10 [i_3 + 1] [i_4 + 3] [8] [i_4 + 3] [i_4 + 4] [i_4 - 3])))));
                                var_22 = (min(65535, 2783737515));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_0] |= 65535;
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_23 = (min(var_23, ((min(((-(arr_14 [i_5 - 3] [i_5 + 2] [i_5 - 2] [i_5 + 1]))), (~var_7))))));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] |= (min(((min(((var_10 ? 1 : (arr_10 [4] [i_6] [i_6] [i_6] [i_6] [i_6]))), (((arr_4 [i_5]) ? 112 : var_4))))), (min((~4190457270), ((min((arr_7 [i_0] [i_6] [i_0] [i_5]), var_5)))))));
                            }
                        }
                    }
                    arr_21 [i_0] [i_1] [i_2] [i_2] &= 291106771;
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                {
                    var_24 += (min(1, 65535));
                    var_25 = var_8;
                }
                arr_24 [i_0] = (max(((-(arr_19 [i_0] [i_1] [i_0] [i_1] [i_1]))), ((min((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]), var_5)))));
            }
        }
    }
    var_26 -= var_9;
    #pragma endscop
}
