/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(23, ((var_9 ? var_2 : var_3))));
    var_17 += ((var_11 & ((var_5 ? ((var_5 ? var_0 : 142)) : var_8))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 *= max(255, 110);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_4] = var_0;
                                arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] = var_7;
                                var_19 = (max(var_19, ((min(((16 ? (arr_5 [i_1] [i_2] [i_1]) : ((((arr_1 [i_1]) > 124))))), ((~(arr_11 [i_1] [i_0 - 1] [i_0] [i_1]))))))));
                                arr_15 [i_1] [i_0] [i_3] = (((arr_5 [i_3 + 1] [i_0 - 2] [i_0]) ? -81 : (arr_2 [i_0])));
                                var_20 = (min(var_20, ((((((24 ? 178 : (arr_0 [i_4 - 1])))) ? 96 : 98)))));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_1] [i_0] = (((arr_7 [i_1] [i_0]) ? ((~(arr_5 [i_0 + 1] [i_0 + 1] [i_0]))) : ((min((min((arr_5 [i_0 - 2] [i_1] [i_0]), (arr_3 [i_1]))), 118)))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_21 -= ((~((max((arr_3 [i_6 - 1]), 1)))));
                                var_22 += 0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = 233;
    #pragma endscop
}
