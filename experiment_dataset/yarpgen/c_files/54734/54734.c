/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_9 < var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1 + 2] = ((172 ? ((((1583874711 & 1) > 160))) : 196));

                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_12 = ((((((max(28419, (arr_3 [i_1] [i_2]))) - ((max((arr_2 [i_1] [i_1]), var_1)))))) ? -117 : (((-67 + var_4) + 61071))));
                        arr_10 [i_1] = (arr_7 [i_0] [15] [i_2]);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 24;i_5 += 1)
                        {
                            {
                                arr_17 [i_1] [i_1] = ((((((arr_15 [i_0] [i_1 + 3] [i_2] [23] [i_0]) ? (803792504232166949 >= 65534) : ((~(arr_4 [i_0] [i_1] [i_0])))))) <= ((var_3 ? (arr_8 [i_0] [i_2 + 1] [i_5 - 1]) : (max((arr_15 [i_0] [i_1] [i_1] [1] [i_5 - 1]), 195))))));
                                arr_18 [i_0] [i_1] [i_0] [i_0] = var_2;
                                var_13 = (arr_9 [i_4]);
                            }
                        }
                    }

                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        arr_21 [16] [1] [i_1] [i_1 - 1] [i_0] = (max(((3759579144 ? (arr_20 [i_0] [19] [i_1]) : var_6)), ((min(((var_9 & (arr_2 [20] [i_1]))), ((-(arr_1 [i_2]))))))));

                        for (int i_7 = 3; i_7 < 24;i_7 += 1)
                        {
                            var_14 = (((((max((arr_14 [i_0] [i_1 - 1] [i_2 - 1] [i_2 - 1] [i_0]), var_3)))) * (3846145729857022444 + -var_0)));
                            arr_24 [i_0] [i_1 + 3] [i_1] [i_1 + 3] [13] [i_1] [i_7] = ((((max((arr_3 [i_1] [i_6]), var_4))) ? (min(var_8, var_2)) : (((var_0 % (arr_13 [1] [13] [i_6] [13] [i_1 + 3] [i_0]))))));
                            var_15 = (!2283733632);
                        }
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_16 *= (max((arr_4 [20] [22] [i_1 + 1]), (arr_2 [i_8] [18])));
                        arr_27 [i_0] [i_1] [i_2] [i_1] [i_8] = 2047;
                    }
                }
                arr_28 [i_0] [i_1] [i_0] = ((-(((2249152389134254449 == 15302674133433949610) + ((-775534028 ? (arr_3 [i_1] [i_1 - 1]) : var_8))))));
            }
        }
    }
    #pragma endscop
}
