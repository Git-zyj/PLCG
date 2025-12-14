/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(2937068518, 4437376543024905192));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (16402218760945590307 - 2937068518);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [i_3] = (-9223372036854775807 - 1);
                        var_14 = (min((arr_10 [i_2 - 1] [i_2] [i_2 - 1] [i_0] [i_0]), 0));
                        var_15 = 1357898777;
                    }
                }
            }
        }
        arr_13 [10] = 21208;
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_16 = (min(var_16, ((max((((arr_16 [i_4 - 1]) != (arr_16 [i_4 - 2]))), (((arr_16 [i_4 - 1]) <= (arr_16 [i_4 - 1]))))))));
                arr_21 [i_4] [i_4] = 2937068494;
                arr_22 [i_5] [i_5] [i_4] = (((arr_19 [i_4] [i_4 - 2] [i_4 + 2]) > (((arr_18 [i_4] [i_4] [i_4]) ^ (arr_19 [i_4] [i_4 + 2] [i_4 + 2])))));
                arr_23 [i_4] [i_4] [i_5] = 1357898777;
                var_17 = (arr_16 [9]);
            }
        }
    }
    #pragma endscop
}
