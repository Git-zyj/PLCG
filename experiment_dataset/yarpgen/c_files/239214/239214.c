/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min((max(65971588, (max(65971588, 1774182035)))), 4228995708);
    var_17 = (max(-var_0, ((max(var_2, var_15)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = (~66);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] [7] [i_1] [i_4 + 1] = (((65971588 ? (arr_0 [12] [15]) : var_1)));
                            var_19 ^= (((arr_6 [i_4] [i_4 - 1] [i_4 - 1]) ? var_7 : (arr_5 [i_0] [i_0])));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_20 = (65971594 == 9223372036854775807);
                            var_21 *= 4228995702;
                        }
                        var_22 = var_1;
                        arr_17 [i_0] [i_1] [i_2] [i_3] |= ((var_1 ? var_9 : (arr_11 [12] [i_2] [i_0] [16] [i_0] [i_0] [i_0])));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_23 = (max(5471151923530198416, 25977));
                                var_24 ^= 5471151923530198424;
                                var_25 = (arr_24 [i_1] [i_2] [9] [i_7 - 1] [i_1] [i_7 - 1] [i_1]);
                                var_26 = ((((arr_21 [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7 + 1] [14]) ? 3113863187 : (arr_21 [i_7] [3] [10] [i_7 - 1] [i_7 + 1] [i_7]))));
                            }
                        }
                    }
                    var_27 = (max(var_27, (((((arr_4 [i_0] [i_2]) ? (arr_24 [i_0] [i_1] [i_1] [i_1] [i_0] [i_2] [i_1]) : (arr_24 [i_2] [i_2] [i_0] [i_1] [i_0] [10] [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}
