/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (min(50853, (-820762852 & 3962876895)));
                arr_4 [i_0] [i_0] = (262248264215858242 > -77);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, ((((((arr_11 [i_0] [i_1] [i_2] [i_2]) ? (min((arr_9 [i_2] [16] [16]), -2571349432214851316)) : (arr_8 [i_2] [i_2] [i_2] [i_4 + 4] [i_2]))) + (arr_1 [i_3 - 2]))))));
                                var_15 *= (((-(((arr_12 [i_0] [i_0] [i_0] [13] [i_0] [i_0]) * var_3)))));
                                arr_13 [i_4] = arr_3 [i_2] [i_2] [i_1];
                                var_16 = (((min(((((arr_0 [i_2]) / (arr_9 [i_4] [i_4] [i_4])))), (((arr_3 [i_0] [i_1] [i_4]) - var_2)))) & var_8));
                                var_17 -= (((((min(var_12, (arr_6 [i_3] [i_3]))))) - (min((min(-2571349432214851314, var_10)), ((min(682835214, 50867)))))));
                            }
                        }
                    }
                }
                var_18 = (((min((arr_2 [17] [i_1] [i_0]), (arr_7 [i_0] [i_0] [i_1] [i_1]))) & (((14692 * (arr_2 [i_0] [i_0] [i_0]))))));
                arr_14 [i_0] = (((((((arr_11 [i_0] [i_0] [i_0] [i_1]) <= ((15872 ? 22458 : -2571349432214851337)))))) + (((arr_5 [i_1] [i_1] [i_1] [i_0]) / (max(788689998, -262248264215858225))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_19 *= (arr_22 [i_7] [i_6]);
                    arr_23 [i_7] [i_5] [i_5] [i_5] = 46649;
                }
            }
        }
    }
    var_20 = ((((max((max(var_4, -10070)), var_5))) + ((max((var_12 > var_8), var_7)))));
    #pragma endscop
}
