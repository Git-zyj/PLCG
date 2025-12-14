/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    var_13 = (min(var_13, (arr_1 [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, -6));
                                var_15 = ((((var_6 / (arr_12 [i_0] [i_3] [i_2] [i_3] [i_2]))) != (((~(arr_2 [i_0]))))));
                            }
                        }
                    }
                    var_16 = var_9;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_17 = ((((arr_1 [i_0 + 1]) / 1)));
                                var_18 = (min((min(0, ((-2 ? (arr_5 [i_1]) : var_6)))), (arr_8 [i_2] [5])));
                            }
                        }
                    }
                    var_19 *= ((+(((1 / 47) + ((-(arr_9 [4] [2])))))));
                }
                var_20 = var_11;
                var_21 = (max(var_21, (arr_9 [i_0] [10])));
                var_22 = (((((+((max((arr_2 [9]), 208)))))) > var_10));
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_23 = ((6 ? (arr_21 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0]) : (!0)));
                                var_24 |= var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((-1096949391 + 2147483647) << (((-14811 + 14840) - 29)));
    #pragma endscop
}
