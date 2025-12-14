/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = arr_3 [1];
                arr_6 [i_0] = ((!((((arr_5 [i_0]) ? 255 : (arr_4 [i_0] [i_1] [i_1]))))));
                arr_7 [i_0] = (((arr_4 [i_0] [i_0] [1]) ? (arr_1 [i_1] [i_0]) : (arr_0 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                arr_16 [i_4] [i_3] [i_2] [i_2] [i_1] [i_4] = (((arr_0 [i_0]) ? (arr_15 [i_0]) : ((+(((arr_5 [i_0]) ? 15803542827183714759 : (arr_4 [i_0] [i_0] [i_0])))))));
                                arr_17 [i_4] [i_1] [i_1] [i_1] [i_1] [i_1] = (min((arr_13 [i_3] [7]), (max((arr_3 [i_0]), (arr_1 [i_2] [i_3])))));
                                arr_18 [8] [i_4] [i_2] [i_3] [i_4] = (arr_11 [i_1]);
                            }
                            for (int i_5 = 0; i_5 < 18;i_5 += 1)
                            {
                                var_19 = (arr_4 [i_5] [i_2] [15]);
                                var_20 = 15803542827183714765;
                            }
                            var_21 *= ((~(min((((~(arr_4 [i_0] [i_0] [i_3])))), (((arr_21 [i_3] [12] [14] [i_1] [i_0] [8]) ? (-9223372036854775807 - 1) : (arr_15 [i_0])))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = var_13;
    #pragma endscop
}
