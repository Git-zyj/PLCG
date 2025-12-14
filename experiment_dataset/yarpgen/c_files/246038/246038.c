/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_13 = (arr_0 [8] [i_0 + 1]);

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            var_14 = (((arr_3 [i_1 + 2] [i_1 - 3]) ? (arr_3 [i_1 + 1] [i_1 + 1]) : (arr_3 [i_1 + 1] [i_1 + 1])));
            var_15 ^= (arr_2 [i_1 - 2]);
            arr_4 [i_0] [i_1] = -25;
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_9 [i_0 + 3] [i_2] [i_2] = (((arr_1 [i_0]) * (arr_8 [i_0] [5])));
            var_16 = (arr_0 [i_2] [i_0]);
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    arr_19 [i_0] [i_3] [i_4] [3] |= var_5;
                    var_17 = (arr_5 [i_0 + 1]);
                }
                arr_20 [i_0] [i_0] [i_0] &= (arr_10 [i_0] [i_3] [i_4]);
            }
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                arr_23 [i_0] [i_3] [5] |= ((~(arr_15 [i_0 + 2] [7] [i_6 - 1])));
                arr_24 [4] [i_3] [i_0] = ((((var_7 ? 6 : (arr_22 [i_0]))) - (((arr_22 [i_3]) ? var_11 : (arr_3 [i_0] [i_3])))));
                arr_25 [i_0] [i_3] [i_6] [i_6] = (((1 + -82) != (arr_16 [0] [0] [i_3] [i_3] [i_0 - 1] [0])));
                var_18 = (arr_15 [i_0] [i_3] [i_6]);
            }
            var_19 = (arr_6 [i_0 + 3] [i_0 - 1]);
        }

        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            arr_28 [i_7] [6] = ((~(((-75 + 2147483647) << (192 - 192)))));
            var_20 = ((~((65512 - (arr_5 [i_0 + 3])))));
            var_21 = ((-((-21 - (arr_0 [i_0] [i_7])))));
            var_22 -= ((~(arr_6 [i_0 - 2] [i_0])));
        }
    }
    var_23 = var_11;
    #pragma endscop
}
