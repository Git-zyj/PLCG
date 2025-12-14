/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 ^= ((var_5 <= (((((arr_1 [i_0] [i_1]) == (arr_4 [i_0] [i_0])))))));
                var_13 = (min(var_13, (!0)));
                var_14 = (min(var_8, (arr_3 [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((((!((!(arr_9 [i_0])))))))));
                                var_16 = ((min((!4095), (max((arr_13 [i_0] [i_0] [i_1] [i_2] [i_4] [i_4]), -2147483640)))));
                                var_17 = 19487;
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_18 = (((((var_5 ? (arr_7 [i_0] [i_1] [i_0] [i_0]) : 64718))) ? ((((!(arr_13 [i_5] [i_5] [13] [i_1] [i_5] [i_0]))))) : 4294967279));
                    arr_16 [i_0] [i_5] [i_1] [i_5] = 19;
                }
                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {
                    var_19 = (max(var_19, ((((arr_7 [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 2]) ? ((-(((arr_13 [i_0] [i_1] [i_6] [i_6] [i_6] [i_0]) * (arr_8 [i_0] [12]))))) : var_4)))));
                    var_20 = 0;
                    var_21 = (max((((var_9 <= ((-(arr_1 [i_1] [i_6])))))), (arr_17 [i_0] [i_1] [10] [i_6 - 2])));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] = (((min((max(234, 3832595175942865575)), (((1 ? 112 : var_8))))) == (max((((-(arr_4 [i_0] [i_0])))), 3832595175942865569))));
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_8] = (arr_24 [i_7] [i_6 + 1] [i_6 - 2] [i_6] [i_6 - 2]);
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    var_22 = 3341466931;
                    arr_29 [i_0] = (arr_9 [i_9]);
                    var_23 *= 3832595175942865590;

                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_24 ^= (arr_20 [i_0] [i_1] [i_9] [7]);
                        arr_32 [i_0] [0] [0] = ((!(arr_6 [i_0] [i_1] [i_9] [i_10])));
                        var_25 = (max(var_25, (arr_10 [i_0] [i_1] [i_0] [7])));
                    }
                }
            }
        }
    }
    var_26 = var_2;
    #pragma endscop
}
