/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((max(var_2, var_1)), ((max(var_8, ((var_17 ? var_16 : var_4)))))));
    var_19 = var_3;
    var_20 = (max(var_20, ((((218 ? 0 : ((max(var_14, var_9)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_2] = (min((((+(max((arr_3 [i_0]), 862656431))))), ((0 ? (arr_11 [i_0] [i_1] [1] [i_4]) : (arr_10 [i_0] [i_0] [i_2] [i_2] [i_2 - 1] [i_2 - 1])))));
                                var_21 = ((218 ? 1964826994 : 127));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (arr_0 [i_3]);
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        var_22 = (arr_4 [i_2] [i_5] [i_5 - 1]);

                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            var_23 ^= (15847 || var_16);
                            arr_21 [i_2] [i_1] [i_2] [i_5] [i_6] [i_5] [i_1] = (((+((min((arr_17 [i_2] [i_2] [i_2] [i_5]), (arr_5 [i_0] [i_0] [i_0])))))));
                            arr_22 [i_0] [i_1] [i_1] [i_5] [i_6] = ((((+((4 ? (arr_13 [i_0] [i_1] [1] [i_0] [i_6]) : 18446744073709551615)))) <= 15847));
                            var_24 = (min((arr_20 [i_5 + 2] [i_5] [i_5] [i_5] [i_5] [i_5]), 0));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
