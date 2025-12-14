/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [2] &= (((((arr_0 [3] [15]) ? 2550678852 : var_10)) <= (~938468600)));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_18 = (arr_0 [i_0 - 2] [i_0 - 2]);
            var_19 -= var_14;
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_9 [1] = (arr_5 [i_0 - 1]);

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_20 = (min(var_20, (arr_0 [i_0 - 1] [3])));
                var_21 = (max(var_21, (arr_5 [i_0 - 2])));

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_22 -= ((((var_1 ? var_15 : var_13)) / -1640627691));
                    arr_14 [1] [15] [2] [4] = ((7435810777091024659 ? (arr_4 [1] [i_0 - 1] [15]) : var_0));
                }
                var_23 = (min(var_23, 0));
                arr_15 [14] = (((arr_6 [10]) < (562915593682944 == var_3)));
            }
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                var_24 = (min(var_24, (((~(arr_1 [i_0 - 2] [i_5 - 2]))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            arr_25 [i_6] [9] [10] [4] = (((!(arr_24 [8]))) ? ((var_14 ? (arr_13 [9]) : 14205929629405718384)) : (arr_17 [10] [6] [i_5 - 2]));
                            arr_26 [6] [1] [14] [11] [i_6] [5] = ((var_5 ? var_13 : (arr_8 [0] [15])));
                            arr_27 [8] [2] [i_2] [6] |= 4240814444303833232;
                            var_25 = var_11;
                        }
                    }
                }
                var_26 = ((-(arr_21 [2] [i_5 + 1] [2] [0] [4])));
                var_27 = (max(var_27, 179));
            }
            var_28 ^= (((((arr_4 [0] [13] [11]) ? (arr_11 [2] [12]) : (arr_24 [14]))) < (arr_16 [12])));
            var_29 = (!4240814444303833233);
        }
    }
    var_30 = var_6;
    #pragma endscop
}
