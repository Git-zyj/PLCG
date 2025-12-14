/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_10 = (arr_1 [i_0] [i_0]);

        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_0] = ((~(min(9223372036854775793, var_0))));
            arr_6 [i_0] = arr_3 [16] [i_0];
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_11 = (min(var_11, ((((arr_4 [i_0 - 1] [i_2]) ^ (arr_1 [i_2] [i_0]))))));

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_12 = (min(var_12, var_2));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = 9223372036854775793;
                            var_13 = (((arr_17 [i_0] [i_0 + 1] [i_0] [i_0]) ? (arr_17 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2]) : (arr_17 [14] [i_0 + 1] [14] [i_0])));
                        }
                    }
                }
                arr_20 [i_0] &= (((arr_1 [11] [i_0 - 1]) + -1016661371));
            }
            var_14 = (arr_4 [i_0 - 1] [i_0 - 1]);
            var_15 = -1;
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 19;i_7 += 1)
            {
                {
                    arr_27 [i_6] [i_6] [i_6] [i_6] = ((((arr_2 [i_7 - 1] [i_0 - 1] [i_0 + 2]) || (arr_2 [i_7 + 2] [i_0 + 2] [i_0 - 1]))) && (arr_11 [i_0] [i_6] [i_6]));
                    var_16 = var_6;
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        arr_30 [i_8] = (arr_22 [i_8]);
        arr_31 [i_8] = (min(var_5, (arr_0 [13])));
        arr_32 [i_8] = var_5;
    }
    var_17 = (var_6 & var_8);
    var_18 = var_9;
    var_19 = (min(var_19, ((((var_7 ? -0 : -696931266))))));
    var_20 = var_6;
    #pragma endscop
}
