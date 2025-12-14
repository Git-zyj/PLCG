/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_12));
    var_16 = ((((max((max(var_0, 0)), (-127 - 1)))) * var_12));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] = (max((-127 - 1), (-127 - 1)));
                        var_17 = (((arr_8 [i_0] [i_0] [i_2] [i_2] [i_3 + 1]) || ((max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_3 - 2]), (arr_8 [3] [i_0] [3] [i_2] [i_3 - 1]))))));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = (((((~(arr_12 [i_4] [i_4] [i_1] [i_3 - 3] [i_2] [i_1] [i_4])))) ? 18446744073709551600 : (~var_11)));
                            var_18 = ((18446744073709551590 / (((var_6 ? (arr_9 [i_0] [i_1] [i_2] [i_3 - 1]) : (arr_9 [i_3] [i_1] [i_2] [i_3 - 1]))))));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_19 = 1593698842781172216;
                            var_20 = var_5;
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_19 [i_1] [i_1] [i_3] [i_0] [i_1] [i_0] |= ((~(arr_6 [i_3] [i_3] [i_3] [i_3])));
                            var_21 = -28023;
                            var_22 ^= var_10;
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_23 = (min(var_23, (((var_5 | 16) ? 21 : ((((arr_12 [i_3] [i_3 - 1] [i_3 + 1] [i_3] [14] [i_3 + 1] [i_1]) + (arr_12 [i_3] [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3] [i_2]))))))));
                            arr_24 [i_0] [i_0] [5] [i_0] [i_0] [i_0] = ((+(max((arr_16 [i_0] [i_1] [i_2] [i_3] [i_3 - 3]), 1237403278))));
                        }
                    }
                }
            }
        }
        var_24 += (arr_4 [i_0] [i_0] [i_0]);
        var_25 = (+(max((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]), (!1))));
    }
    var_26 = var_11;
    var_27 = var_1;
    #pragma endscop
}
