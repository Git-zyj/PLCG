/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 += (arr_2 [i_1]);
                arr_6 [i_1] [i_1] [i_1] = ((-1342 ? 1345451723 : 1345451701));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = var_0;
                    arr_11 [i_2] [i_1] = ((-(arr_9 [i_0 + 4] [i_0 + 4])));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_12 ^= (((arr_4 [i_1] [i_1] [i_1]) ? (arr_4 [i_0] [i_1] [i_3]) : (arr_9 [i_0 - 2] [i_3])));
                        var_13 ^= arr_8 [i_0] [i_0 - 1] [i_0 - 2];
                        arr_14 [i_0] [i_0] [10] [i_2] [i_3] = (~(arr_5 [i_2] [i_1] [i_0 - 2]));
                    }
                    arr_15 [3] [i_1] [i_1] [10] = (((arr_8 [i_0 + 3] [i_0 + 2] [i_0 - 3]) ? (arr_9 [i_0 - 4] [i_0 + 3]) : (arr_8 [i_0 + 1] [i_0 - 2] [i_0 - 4])));
                }
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    var_14 *= ((((((~var_8) * (arr_5 [i_0] [i_0] [i_0 + 3])))) ? ((((arr_7 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? (arr_9 [i_0 - 4] [i_0 - 1]) : (arr_4 [i_0 + 1] [i_1] [i_4 - 1])))) : (max((arr_16 [i_1] [i_0]), (arr_8 [1] [i_1] [i_0])))));
                    var_15 = (max(var_15, (((max((arr_3 [i_4 - 1] [i_0 - 1] [i_4]), (arr_3 [i_4 - 1] [i_0 - 2] [i_1])))))));
                }
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    var_16 = (((((max((!1), (arr_0 [i_0 + 1] [i_0 - 4]))))) & (max(((max((arr_4 [i_5] [i_1] [i_0]), (arr_0 [i_1] [i_0])))), (arr_3 [i_0 + 1] [i_5 - 1] [i_5 + 1])))));
                    var_17 = (min(var_17, (arr_5 [i_0 - 4] [0] [i_5 - 1])));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_22 [i_6] [i_6] [i_6] [i_0] = (((min((((-(arr_5 [i_0] [i_5] [i_6])))), (((arr_7 [i_0] [i_1] [1] [i_6]) ? (arr_12 [i_0] [i_0]) : -1418993847)))) ^ (((arr_12 [i_0 + 4] [i_5 - 2]) ? (arr_12 [i_0 + 4] [i_5 - 2]) : (arr_12 [i_0 + 4] [i_5 - 2])))));
                        arr_23 [i_0 + 2] [11] [i_6] = ((-(arr_0 [i_0] [i_1])));
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_27 [i_5] [i_1] |= var_9;
                        var_18 = (min((((arr_18 [i_1] [i_5] [i_5] [i_5 - 2]) / (arr_18 [i_0] [i_0] [i_0] [i_5 - 2]))), (arr_18 [i_1] [i_1] [i_1] [i_5 - 2])));
                        arr_28 [i_7] [i_7] [i_7] [6] [6] = (max((((10 * (arr_18 [i_7] [i_1] [i_1] [10])))), (max((((~(arr_7 [11] [i_1] [i_1] [i_1])))), (((arr_16 [i_0] [i_7]) ^ (arr_19 [i_5])))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        var_19 = (max(var_19, ((!(arr_29 [i_8 + 1])))));
                        var_20 &= (((arr_12 [i_0] [i_5]) ^ (arr_5 [i_0] [i_1] [i_8])));
                        var_21 = arr_13 [i_0 + 1];
                    }
                    var_22 = (((((-(arr_9 [i_0 - 1] [i_5 - 1])))) ? (arr_26 [i_0] [i_0] [i_1] [i_0] [i_1]) : (((arr_5 [i_0] [i_1] [i_5]) ? ((var_7 ? (arr_21 [i_0] [11] [i_5] [i_0] [i_5] [6]) : (arr_2 [i_0]))) : (arr_18 [i_0] [i_0] [i_1] [i_5])))));
                }
                arr_32 [i_0] = ((!((((((2267567506 ? (arr_13 [i_0]) : (arr_19 [i_0])))) ? (!0) : ((~(arr_21 [7] [0] [i_0] [1] [5] [5]))))))));
            }
        }
    }
    var_23 = ((var_4 << ((((~(var_5 * var_3))) + 110))));
    #pragma endscop
}
