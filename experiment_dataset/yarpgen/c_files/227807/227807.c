/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (min(((((((arr_0 [i_0]) * (arr_0 [i_0])))) ? (arr_0 [i_0]) : 48372)), (((var_8 / (arr_2 [i_0]))))));
        arr_3 [i_0] = (arr_0 [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_17 += 85;

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                arr_8 [i_0] [i_1] [i_2] = (((arr_6 [i_0]) ? (arr_6 [i_1]) : (arr_1 [i_0] [i_1])));
                var_18 ^= ((arr_4 [i_0] [i_1] [i_0]) < (arr_4 [i_2] [i_1] [i_0]));
                var_19 = (((arr_5 [i_1] [i_2]) + (arr_0 [i_0])));
            }
            var_20 &= (((arr_7 [i_0] [i_1]) ? (arr_2 [i_0]) : 113));
            arr_9 [i_0] [i_1] = (((arr_6 [i_1]) ? (arr_7 [i_0] [i_1]) : (arr_7 [i_0] [i_1])));
            var_21 &= ((!(arr_7 [10] [i_0])));
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            arr_13 [11] [11] &= (arr_7 [i_0] [i_0]);
            arr_14 [i_0] [i_3 + 1] = (arr_7 [i_3 + 2] [i_3 - 1]);
            var_22 = (max(var_22, (85 & -4205711684572013727)));
            arr_15 [i_3] [i_3 - 2] [1] = (arr_12 [i_0] [i_3] [i_3 + 2]);
        }
        var_23 = (max(var_23, ((((((((max((arr_11 [i_0]), var_10)) < ((max(115744539, 208))))))) & (min((max((arr_12 [i_0] [i_0] [i_0]), -1)), (arr_12 [i_0] [i_0] [13]))))))));
    }
    #pragma endscop
}
