/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((var_2 / (var_5 & var_4)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_11 &= (arr_0 [i_1 - 3]);
                    arr_7 [i_2] = (min((arr_2 [i_0] [i_1 + 2]), ((30082464 ? 30082457 : 127))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        var_12 = (((var_1 ? (arr_8 [i_3 + 1] [i_3] [i_0]) : (arr_3 [i_3 + 3]))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_19 [i_4] = ((-(arr_17 [i_5] [i_4 + 1] [i_3 + 2] [i_3 + 4])));
                            arr_20 [i_0] [i_0] [i_4] [i_4] [i_0] [i_6] [i_6] = (((arr_15 [i_6] [i_4] [i_4] [i_4 - 1] [i_3 + 2] [i_0]) ? (arr_8 [i_3 + 4] [i_3 + 3] [i_3 + 3]) : (arr_10 [11] [11] [11])));
                            var_13 = (((arr_12 [i_6] [i_4] [i_3] [i_0]) + ((var_7 + (arr_16 [i_6] [i_5] [i_3 + 3] [i_3 + 3] [i_3] [i_0])))));
                            arr_21 [i_0] [i_3] [i_3 + 4] [i_3 + 4] [i_4] [10] [i_6] = (((arr_3 [i_6]) ? ((var_4 % (arr_10 [i_0] [i_3] [i_6]))) : (var_3 ^ var_4)));
                        }
                        var_14 |= (max(((((arr_18 [i_5] [i_4] [i_3] [i_3] [i_0] [i_0]) && -var_0))), ((((7 ? 43498 : 30082467)) ^ (arr_6 [i_5] [i_3] [i_0])))));
                    }
                }
            }
        }
        var_15 = (arr_18 [1] [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_16 *= (((((+(((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_0]) : var_6))))) ? ((((arr_13 [i_0] [i_0] [8]) ? var_1 : (arr_5 [i_0] [i_0] [i_0] [i_0])))) : (max(var_4, var_6))));
    }
    for (int i_7 = 2; i_7 < 13;i_7 += 1)
    {
        var_17 = (((-19 + 2147483647) >> (-19 + 48)));
        var_18 -= ((((((-(arr_0 [i_7]))) + 9223372036854775807)) << (((((arr_1 [i_7] [i_7]) + 102)) - 37))));
        arr_24 [i_7 - 1] = (((((arr_11 [i_7]) ? (arr_11 [i_7]) : (arr_8 [i_7 - 1] [i_7 - 2] [11]))) <= (((max((arr_22 [i_7 - 2]), (arr_22 [i_7 - 2])))))));
    }
    #pragma endscop
}
