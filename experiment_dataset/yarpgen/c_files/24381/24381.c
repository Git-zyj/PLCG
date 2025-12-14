/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_1] [8] [17] = -var_1;
                                var_14 = (+-123);
                                var_15 |= ((~((~(!var_7)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_23 [i_1] [i_1] [i_1] = ((~((~(~50257)))));
                                arr_24 [i_0] [i_2] [i_5] &= (--var_13);
                                arr_25 [i_1] = (--18);
                                var_16 = (((~(~var_8))));
                                var_17 = var_3;
                            }
                        }
                    }
                }
            }
        }
        var_18 = ((!((!(!237)))));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        arr_28 [i_7] [1] = (~1);
        arr_29 [i_7] = ((-(((-(arr_26 [i_7]))))));
        var_19 = (max(var_19, var_13));
    }
    var_20 = (~-var_2);
    var_21 &= (~(~-var_3));
    #pragma endscop
}
