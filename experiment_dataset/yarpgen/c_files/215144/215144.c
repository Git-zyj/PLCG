/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_16 ? ((((var_1 ? var_6 : var_13)))) : var_4));
    var_18 = -61440;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 *= ((1024 + (-2147483647 - 1)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_20 = ((~(arr_3 [i_2])));
                            arr_10 [i_3] [i_2] [i_2] [i_0] = (min(var_3, ((1 ? var_13 : var_14))));
                            arr_11 [i_2] [i_1] [i_1] = (((((1 >= -1915184768) ? (max(var_0, (arr_8 [10] [i_3]))) : ((((!(arr_0 [i_0]))))))) * ((max(var_3, var_7)))));
                        }
                    }
                }
                var_21 *= ((max((arr_6 [i_0]), (((arr_5 [i_0] [i_1] [i_0] [i_0]) ? (arr_1 [i_0] [i_1]) : 122)))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((-((((-19644 ? 1 : 1)) - ((max(var_2, var_11)))))));
                                arr_21 [1] [i_5] [11] [i_1] [i_0] = (-(arr_5 [i_0] [i_0] [i_0] [i_4]));
                                arr_22 [1] [i_1] [i_4] [i_5] [1] [i_5] [i_6] = 3189780504302550652;
                                var_22 = (arr_19 [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
