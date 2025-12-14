/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (!var_11);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 2] = (!34314);
                            arr_12 [i_0] [i_1] [i_0] [i_1] = (-(arr_6 [i_0] [i_0] [i_3 + 1]));
                            var_20 = ((-(((!(arr_3 [i_3 + 1]))))));
                            var_21 |= (((arr_5 [i_3]) * ((var_0 ? ((((!(arr_3 [i_0 + 1]))))) : (((-9223372036854775807 - 1) ? var_14 : (-9223372036854775807 - 1)))))));
                            var_22 = var_7;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            arr_18 [i_1] [i_0] [i_5] = var_7;
                            var_23 = (-9223372036854775807 - 1);
                            var_24 = ((932542947 ? (arr_9 [i_0] [i_0] [i_0] [i_5 + 1]) : 3343464737));
                        }
                    }
                }
                arr_19 [i_0] [i_0] [i_0] = (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {

                /* vectorizable */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    arr_27 [i_6] [i_7] = (((arr_24 [i_6] [i_7]) ? (arr_20 [i_7] [i_6]) : (((((arr_20 [i_6] [i_7]) && (arr_23 [i_6] [i_7])))))));
                    var_25 = var_9;
                }
                /* LoopNest 3 */
                for (int i_9 = 3; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            {
                                var_26 = (max(var_26, var_6));
                                arr_36 [i_7] = ((!(arr_28 [i_6] [i_7] [i_7] [i_11])));
                                arr_37 [i_6] [i_7] [i_6] = (arr_23 [2] [i_7]);
                            }
                        }
                    }
                }
                arr_38 [i_6] [i_7] = (arr_31 [i_7] [11] [i_6] [i_6]);
            }
        }
    }
    var_27 = var_14;
    #pragma endscop
}
