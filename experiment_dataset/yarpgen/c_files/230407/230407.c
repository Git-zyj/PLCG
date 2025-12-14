/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((127 >= -67) ? ((-11 + ((-41 ? 36733 : 62)))) : var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] [i_0] = var_6;
                            var_17 = (max(var_17, ((max(-44, (arr_3 [i_2]))))));
                            var_18 = (min(var_18, ((min(((((-(arr_7 [i_2] [i_2] [i_0] [i_0]))) % var_13)), (67 / 65530))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_19 *= (((~3) >> ((((~(~63))) - 59))));

                            for (int i_6 = 2; i_6 < 22;i_6 += 1)
                            {
                                var_20 = ((~((-75 ? ((min(14, 144))) : (arr_0 [i_0])))));
                                var_21 = var_7;
                                var_22 = (((((arr_8 [i_1 - 1]) - var_13)) - ((-(arr_0 [i_0])))));
                                arr_18 [i_5] [i_5] [i_5] [i_0] [i_5] [i_5] = ((!(((~(!12))))));
                            }
                            for (int i_7 = 0; i_7 < 23;i_7 += 1)
                            {
                                arr_22 [i_0] [i_1] [i_4] [i_0] [i_7] [i_0] = (((((arr_1 [i_0]) ? (((var_12 == (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : ((15 >> (65518 - 65508))))) & ((((min(var_15, (arr_14 [i_1])))) ? var_0 : var_2))));
                                arr_23 [i_4] [i_7] [i_7] [i_0] [i_4] [i_7] [i_0] = var_11;
                            }
                            for (int i_8 = 1; i_8 < 21;i_8 += 1)
                            {
                                var_23 -= (max((~-41), ((var_5 ? 151 : (arr_17 [i_5] [18] [i_5 - 1] [i_1] [i_1] [18] [i_1])))));
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_13 [i_1] [i_1 - 1] [i_0] [i_0]) ? 9 : (!-1)));
                                var_24 = arr_3 [i_0];
                            }
                            var_25 = ((((min(101, 43900))) ? 65535 : (min(-110, 65510))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
