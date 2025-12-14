/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(((20543 ? 10289 : 3834908356)), ((max(35723850, -1474353908))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = (arr_0 [i_0] [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_19 = (min(var_19, ((((arr_1 [i_0]) ? 3834908356 : (((arr_2 [i_1]) | 65531)))))));
            var_20 = (arr_0 [i_0] [i_0]);

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_21 ^= var_0;
                arr_9 [i_2] [i_1] [i_0] = (((((!(arr_5 [i_0] [i_1] [i_0])))) + ((~(arr_5 [i_2] [i_1] [i_0])))));
            }

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                arr_12 [i_1] [i_1] [i_3] = 3834908374;
                arr_13 [i_1] = ((!(arr_0 [i_0] [i_1])));
            }
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_22 = ((((!(arr_8 [i_4] [i_4] [i_4]))) ? (arr_6 [i_0] [i_1] [i_1] [i_4]) : ((~(arr_14 [i_4] [i_1] [i_0] [i_0])))));
                var_23 = ((!((var_12 || (arr_3 [i_4])))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_24 = 44992;
                            var_25 = (arr_14 [i_0] [i_4] [i_5] [i_6 - 1]);
                            var_26 = (((arr_11 [i_6] [i_6 + 1] [i_6 - 1]) ? (arr_0 [i_6 - 1] [i_1]) : (arr_0 [i_6 - 1] [i_1])));
                        }
                    }
                }
            }
            arr_23 [i_0] [i_0] [i_1] = (((((~(arr_3 [i_1])))) || (arr_21 [i_0] [i_1] [i_0] [i_0] [i_1])));
        }
    }
    var_27 = var_16;
    #pragma endscop
}
