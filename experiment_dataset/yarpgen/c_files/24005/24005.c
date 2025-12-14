/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, 4294836224));
    var_14 = (((((-var_6 | ((var_11 ? var_9 : 0))))) && ((((18446744073709551615 == var_8) >> (((min(var_5, var_11)) - 31384)))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = -16444;

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_15 = ((((arr_1 [i_1 - 1]) | (arr_1 [i_1 - 2]))));
            arr_6 [3] [i_1 - 1] [i_1] = ((62 >> ((((min(102, 40))) - 9))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_16 = (((arr_0 [i_1 + 1]) ? (~var_4) : (((var_1 + (arr_8 [i_2] [i_1 - 1] [i_1] [i_0]))))));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_14 [9] [i_1 - 2] [i_2] [i_3 - 1] [i_3 + 1] [i_4] [i_1] = ((-(arr_8 [i_3 + 2] [i_3] [i_4] [i_4])));
                            arr_15 [i_1] [i_2] [i_3 + 2] [i_4] = ((~(arr_11 [1] [i_3 - 1] [i_3 - 1] [4] [i_3 + 1])));
                        }
                    }
                }
            }
            var_17 = (max(var_17, 627718665));
        }
        var_18 = (min(var_18, -var_6));
    }
    #pragma endscop
}
