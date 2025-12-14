/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_8 ? var_8 : var_3));
    var_14 = (var_12 - (1379824182 >= 544401942157674243));
    var_15 = (max(var_15, (((((min(((min(19309, 127))), var_2))) ? var_11 : ((((-5563 + 2147483647) >> (5006957890129156335 - 5006957890129156322)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((0 * 18014398509481952) ^ (19309 - 0)));
                arr_5 [5] [i_0] [i_1] = ((max((arr_0 [i_1]), (arr_0 [i_1]))));

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_16 ^= (arr_7 [0] [i_2 - 1]);
                    var_17 -= (min((arr_6 [i_0] [i_2 - 1] [i_2 - 1]), (((arr_3 [10] [i_2 - 1] [10]) ? (arr_3 [1] [i_2 + 1] [1]) : (arr_3 [4] [i_2 + 1] [4])))));
                    var_18 = (min(var_18, ((((((arr_0 [i_0]) + 2147483647)) << (((min((min(var_10, (arr_3 [4] [1] [6]))), (arr_2 [i_0] [10]))) - 1740712263569932780)))))));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_11 [i_0] [i_1] [i_3] &= ((+(((arr_0 [i_1]) - (arr_0 [i_1])))));
                    arr_12 [i_3] [i_1] [1] = -4209674049151622654;
                    arr_13 [i_1] [5] [i_3] = (min(((((arr_8 [i_0] [i_1]) && (arr_6 [i_0] [i_1] [i_3])))), (arr_6 [i_0] [i_1] [i_3])));
                    var_19 = ((1 ? 10435851216587349611 : 0));
                    var_20 = max((arr_9 [i_0] [i_1] [7] [i_3]), (arr_3 [i_1] [i_0] [i_1]));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            {
                var_21 = var_8;
                arr_19 [i_4] [i_4 + 1] [i_4] = (((~-80) >> 0));
            }
        }
    }
    #pragma endscop
}
