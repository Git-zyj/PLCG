/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_7;
    var_16 *= var_7;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_17 |= (arr_3 [i_0] [i_1]);
                    arr_7 [i_0] [i_0 - 2] = 111;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_16 [i_3] [i_1] [i_1 + 2] [i_2] [8] [i_4] = ((-(arr_6 [i_1 + 2] [i_2 + 1])));
                                var_18 *= (((((((arr_6 [8] [i_2]) ? (arr_12 [i_0] [i_1 + 1] [i_1] [i_0] [i_4 + 2] [i_0] [i_4]) : 5178))) ? 5195 : (((arr_15 [i_0] [i_0] [i_1] [i_2] [i_0] [i_1] [i_1]) + var_4)))));
                                var_19 = ((((min((min(17128, -5201)), (min(-24937, -127))))) || (arr_0 [i_1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_20 = (min(-5194, -5178));
                                var_21 = -5195;
                                var_22 = (min(var_22, (((((+((min((arr_5 [i_0] [i_0] [i_6]), (arr_2 [i_1] [i_2])))))) - (((-51 == 99) ? ((40 ? 127 : var_4)) : (~-100))))))));
                                var_23 = ((var_7 ? ((-5196 ? 76 : 5204)) : ((((min((arr_9 [i_0] [i_1] [i_1 - 1] [i_2] [i_5] [i_6]), (-32767 - 1)))) + (arr_3 [i_0] [i_0 - 1])))));
                                var_24 = (arr_13 [i_5 - 1] [i_2 + 4] [i_1 - 2]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
