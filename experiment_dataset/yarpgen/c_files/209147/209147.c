/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (((var_8 - (((arr_4 [i_1 - 2] [i_1 - 1]) >> (((arr_4 [i_1 - 2] [i_1 - 3]) - 4754327186734934966)))))))));
                var_12 = (min(var_12, var_9));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_13 = ((~((2016177542 << (((arr_3 [i_0 + 4]) - 6374533828811285989))))));
                    arr_8 [i_0] [i_2] [i_2] = 1023;
                    var_14 = (arr_3 [i_0]);
                }
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    arr_12 [i_0 + 3] [i_3] [i_3] = var_0;

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_17 [i_5] [i_0] [i_3] [14] [i_3] [i_1] [i_0] = var_8;
                            arr_18 [i_0] [i_3] [12] = (((arr_14 [i_5] [i_4] [i_3] [i_1] [i_0 - 1]) && (((-(min(var_1, 24917)))))));
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_15 = (arr_1 [i_3] [i_6]);
                            var_16 = -var_0;
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_26 [i_4] [i_3] [i_4] [i_4] [i_3] [i_3] [i_0] = var_5;
                            arr_27 [i_1 - 3] [i_1] [i_3] [i_4] [2] [i_4] [10] &= ((((var_9 + (arr_0 [i_3]))) >= (((var_1 <= (arr_0 [i_0 + 3]))))));
                            arr_28 [i_0 + 2] [i_1] [i_3] [i_4] [i_7] = ((!((((arr_10 [i_0 + 4] [i_0 + 1] [i_1 - 2]) >> (2278789754 - 2278789692))))));
                            var_17 = var_1;
                        }
                        arr_29 [i_0] [i_3] [i_0] = (arr_19 [i_3] [2] [5] [i_4] [i_4]);
                        arr_30 [i_3 - 3] [i_4] [i_3] [i_4] [i_3] = ((~((~(arr_23 [i_0 + 3] [i_3] [i_3 + 1])))));
                        var_18 += (arr_9 [i_4] [i_0 + 2] [i_4]);
                    }
                    /* vectorizable */
                    for (int i_8 = 4; i_8 < 13;i_8 += 1)
                    {
                        arr_34 [i_0] [i_1] [i_3] [i_3] = var_0;
                        arr_35 [i_3] [i_1] [i_1] [i_1 + 1] [i_1] [i_1] = (((arr_31 [i_0 + 2] [7]) + var_9));
                        var_19 = (((49 | 2278789754) << (((arr_31 [i_8 - 2] [i_1 - 2]) - 148353246))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
