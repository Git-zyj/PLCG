/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (~17)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 = ((((((arr_1 [i_0]) - var_16))) ? (max((arr_1 [i_0]), 13293)) : (min((arr_1 [i_0]), (arr_1 [i_0])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_22 += ((arr_3 [i_0] [i_0]) >> (((arr_3 [i_0] [i_1]) - 5874503815357539617)));
            arr_4 [i_0] [i_1] = var_15;
            arr_5 [i_0] &= (((arr_0 [i_0]) <= -var_13));
        }
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            arr_8 [i_2] [10] = ((((((var_12 ? (arr_2 [i_2 + 2] [i_2 - 2]) : (arr_2 [i_2 + 1] [i_2 - 1]))) + 2147483647)) << (((((max((arr_2 [i_2 + 2] [i_2 + 2]), (arr_2 [i_2 + 1] [i_2 + 2]))) + 681935441)) - 22))));
            var_23 = (arr_1 [6]);
            var_24 = var_3;

            /* vectorizable */
            for (int i_3 = 4; i_3 < 12;i_3 += 1)
            {
                var_25 *= 659472598309369107;
                arr_12 [i_0] [i_2] [i_3] [i_3] = ((33101870 ? (arr_10 [7] [i_2 - 2] [i_3] [i_0]) : (arr_10 [i_0] [i_2 + 2] [i_2 + 2] [i_3])));

                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    arr_15 [8] [2] [i_4] |= ((-(arr_6 [i_0] [6] [i_3])));
                    arr_16 [10] [i_2] |= ((!(arr_9 [i_0] [i_2 - 1] [i_3] [i_3 - 2])));
                }
                arr_17 [i_2] [i_3] = (arr_6 [i_0] [i_2] [i_3]);
            }
            /* vectorizable */
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                var_26 = (max(var_26, (((-13293 > ((252 ? 24 : var_16)))))));
                var_27 -= 106366373;
                var_28 |= (arr_14 [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 - 1]);
            }
        }
    }
    #pragma endscop
}
