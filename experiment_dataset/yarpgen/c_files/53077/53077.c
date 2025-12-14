/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(1264286044, var_6)))) ? (!var_7) : var_10);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (-832687698 ? var_0 : (arr_0 [i_0]));
        var_13 = (~(((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 22;i_3 += 1)
                {
                    {
                        var_14 |= var_4;

                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            arr_12 [24] [i_3] [i_1] [i_2] [i_1] [i_1] [i_0] = (-((((arr_7 [i_0] [i_0] [i_3 - 2] [i_4 + 1]) && (arr_7 [i_4] [i_3] [8] [i_0])))));
                            var_15 = var_6;
                            var_16 ^= 1035567881;
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_17 = (min(var_17, (arr_3 [i_0])));
                            var_18 = (max(var_18, (-2147483647 - 1)));
                        }

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_19 = (max(var_19, (!var_8)));
                            var_20 = ((max(var_10, -298010392)) | (arr_16 [i_0] [i_1 - 1] [i_1 - 1] [i_3] [i_3] [i_1] [i_6]));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_21 = ((!(arr_13 [i_3 + 2] [i_3] [i_1] [i_3 + 2] [i_2])));
                            var_22 = (arr_7 [6] [6] [i_1 + 1] [i_3]);
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        arr_22 [i_8] = (+((((min((arr_2 [11]), -1)) < (((arr_7 [i_8] [6] [6] [i_8]) % (arr_10 [i_8] [i_8] [i_8] [i_8] [i_8])))))));
        var_23 = ((arr_18 [18] [18] [i_8] [18] [i_8] [18]) ? ((-(arr_20 [i_8]))) : (!844087812));
    }
    for (int i_9 = 2; i_9 < 11;i_9 += 1)
    {
        var_24 = ((var_0 > var_7) * (((arr_17 [i_9] [i_9 - 1] [i_9] [i_9]) ? (arr_17 [i_9] [i_9] [i_9 - 2] [i_9]) : (arr_17 [i_9] [i_9] [i_9 - 2] [i_9]))));
        arr_25 [i_9] = ((((((arr_11 [i_9 + 1] [i_9 + 1] [i_9] [i_9 - 1] [i_9 + 1] [i_9 + 1]) < (arr_11 [i_9] [i_9] [i_9] [i_9] [i_9 + 1] [i_9])))) <= ((var_2 ? (max((arr_8 [i_9] [i_9] [i_9]), (arr_5 [i_9] [6] [i_9]))) : (arr_13 [i_9] [i_9 - 1] [i_9] [i_9] [i_9 + 1])))));
    }
    var_25 = var_6;
    var_26 = (~(((((var_10 ? 0 : var_5))) ? (var_8 && var_2) : (~var_9))));
    #pragma endscop
}
