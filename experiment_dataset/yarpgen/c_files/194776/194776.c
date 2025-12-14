/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = (min((((var_10 ? (arr_3 [i_1] [i_2 - 1] [i_3 - 1]) : var_3))), ((max((var_13 <= var_0), var_4)))));
                                arr_12 [i_4] [i_4] = (min(-182882825, -1922255936));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_18 = (max(var_18, ((((-var_16 >> (!var_5)))))));
                        arr_17 [i_0] [i_0] [i_0] [i_2 - 2] [i_5] = -9223372036854775807;
                        var_19 = var_8;
                        arr_18 [i_0] [0] = 9223372036854775807;
                    }
                }
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    var_20 = ((((min((!var_15), (arr_13 [i_6 + 1] [i_6 + 4] [i_6] [i_6] [i_6 + 4])))) <= (arr_4 [i_6 - 1])));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_21 = (min((arr_2 [i_0] [i_7 - 1]), -9223372036854775807));
                                var_22 -= (((((max(var_7, var_15))) ? ((var_5 ? 1257345639575710777 : var_3)) : var_9)));
                                var_23 -= (((min(var_7, -3370))) ? ((var_10 ? 1257345639575710758 : ((min(var_16, var_4))))) : var_12);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_24 = (arr_16 [i_0] [i_10 + 3] [i_10] [i_10 + 2]);
                            arr_33 [i_0] [9] [i_9] [4] = (~var_3);
                        }
                    }
                }
                var_25 = ((min(((max(var_12, var_6)), ((7736106660753361015 ? var_14 : 9223372036854775781))))));
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        {
                            arr_39 [i_12] [i_12] [i_11 - 2] [i_12] = (min((max((max((arr_3 [i_0] [3] [18]), 1257345639575710756)), ((max(var_1, 1))))), ((max(var_0, var_8)))));
                            arr_40 [i_0] [i_12] [i_12] [i_11 - 2] [i_12] = (min(((((max(-3352, (arr_37 [i_12])))) ? (min(var_2, var_13)) : var_8)), (!15729167460895973703)));
                        }
                    }
                }
            }
        }
    }
    var_26 = ((var_9 / (min(((var_0 ? var_2 : var_11)), -var_3))));
    #pragma endscop
}
