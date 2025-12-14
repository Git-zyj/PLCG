/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_18 = (((var_5 ^ var_2) ^ (~var_13)));
            arr_5 [i_0] [i_1] [i_1] = ((((var_11 ? var_13 : var_9))) ? (!var_14) : var_4);
            arr_6 [i_0] [i_0] = var_9;
        }
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            arr_9 [i_0] [i_2] [i_0] = (((((~(2064840458 + var_6)))) || (!var_2)));
            arr_10 [12] [i_0] [6] &= (((((2064840458 ? (18925 | 429979530) : (arr_4 [i_0] [1])))) ? (var_16 ^ var_1) : (((~((~(arr_1 [i_2] [i_2]))))))));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_19 [i_4 + 1] [i_4 - 1] [7] [i_4] [i_4] [i_0] = var_2;
                            arr_20 [i_0 + 2] [i_0] [i_4] [i_5] [i_4 - 1] = (((((((~(arr_13 [i_0])))) ? var_7 : ((var_3 + (arr_17 [i_0] [i_0 + 2] [i_0] [i_4] [i_5] [i_5] [i_6]))))) >> (((!((((arr_13 [i_0]) ? var_12 : (arr_11 [11])))))))));
                            var_19 = (max(var_19, ((((((+(((arr_1 [10] [i_5]) ? var_4 : (arr_12 [i_5] [i_4])))))) ? (arr_13 [i_4]) : (((((arr_3 [i_4] [i_4]) && (((var_6 ? 2064840458 : var_14))))))))))));
                            arr_21 [i_3] [i_3] [i_0] [i_5] [i_6] = ((1 ? -2064840459 : -814117841));
                        }
                    }
                }
            }
            arr_22 [i_3] [i_0] = ((19974 * ((((((1491264515 >> (-1258018125 + 1258018130))) <= 1393353233))))));
        }

        /* vectorizable */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            arr_27 [i_0] = (arr_16 [0] [i_0] [i_7]);
            arr_28 [i_0] = var_13;
        }
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            arr_32 [i_0] [i_0] = (~(~-2064840459));
            arr_33 [i_0] [i_8] = ((((((((arr_25 [i_8]) + 2147483647)) >> (((arr_1 [i_0] [i_8 + 1]) + 1899557055))))) ? (((min((arr_2 [i_8] [i_0] [i_0 + 2]), var_2)))) : (((max((arr_23 [i_0 - 1]), var_7)) >> (((((arr_3 [i_0] [i_8 + 1]) >> (((arr_31 [4] [4] [4]) + 374870919297001387)))) - 3453005))))));
            arr_34 [10] [i_0] [i_8] = ((((-(arr_11 [i_8 - 2]))) > (max(var_15, (arr_1 [i_8 - 2] [0])))));
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            arr_38 [i_0] [i_0] [i_0] = -var_9;
            arr_39 [i_0] = (((arr_35 [i_0] [i_0]) >= var_7));
            var_20 = (max(var_20, (((~((~(((arr_15 [i_0] [i_9] [i_9] [i_0 + 2] [i_0 + 2] [i_0 + 1]) ^ var_8)))))))));
            var_21 = (min(var_21, (((+(max((((arr_13 [i_9]) - (arr_8 [i_9] [i_0] [i_9]))), (arr_17 [i_0 + 1] [i_0] [i_9] [i_9] [i_9] [i_9] [6]))))))));
        }
        var_22 ^= min(var_11, (arr_36 [8] [i_0 + 1]));
    }
    var_23 = (var_13 / var_15);
    #pragma endscop
}
