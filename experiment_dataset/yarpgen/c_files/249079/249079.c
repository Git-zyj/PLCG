/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((((~var_6) <= ((((max(var_6, var_7))) ? ((var_0 ? var_1 : var_10)) : var_7)))))));
    var_12 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((((max(((~(arr_2 [i_0 - 1] [i_1] [20]))), (arr_0 [i_0 + 1])))) ? (((((arr_5 [i_0] [10] [i_0 + 2]) >> 1)) ^ (arr_4 [i_1] [i_1] [0]))) : (min((arr_0 [i_1]), ((var_6 ? (arr_4 [i_0] [i_0] [20]) : (arr_5 [i_1] [16] [16]))))))))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_14 = (min(var_14, (arr_1 [6])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] = (arr_10 [i_0] [i_1]);
                                var_15 = (max(var_15, (((-(arr_7 [i_0] [i_1] [10] [i_0]))))));
                                arr_15 [i_0] [i_0] [i_0] = ((((~(arr_0 [i_3]))) < ((((((1 ? 1 : -60))) < var_3)))));
                                arr_16 [i_4] [i_0] [i_3] [1] [i_2] [i_0] [i_0 + 2] = ((-114 ? 95 : 1));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_18 [i_0] [i_0] [i_0] [i_0]);
                                arr_27 [i_0] [i_0] = (min(((1 ? 1 : var_3)), ((((arr_6 [i_0 + 2] [i_1] [i_0 + 2] [i_0]) ? var_1 : var_2)))));
                                arr_28 [i_0] [i_6] [i_6] [i_0] [i_6] [i_6] [i_6] = (arr_2 [i_0] [1] [i_0]);
                                var_16 -= ((-(arr_17 [i_5] [i_5] [i_5])));
                            }
                        }
                    }
                    var_17 = var_0;
                }
                var_18 = ((~(!1)));
            }
        }
    }
    var_19 = (max(var_19, var_4));
    #pragma endscop
}
