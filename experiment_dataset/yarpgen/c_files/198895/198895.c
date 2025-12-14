/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (max(((~(arr_3 [i_0]))), ((max((arr_3 [i_0]), (arr_3 [i_0]))))));
        var_20 ^= (arr_2 [0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {

                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_2 - 4] [i_0] [i_4 - 3] = (min(-42, 171));
                            arr_15 [i_0] [i_0] [i_0] [i_3] [18] [7] = (41 + 61);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_19 [i_5] [i_1 + 1] [i_1 + 1] [i_3] [i_0] = (!var_17);
                            arr_20 [i_0] [i_0] [i_2] [i_3] [i_5] = (((arr_13 [i_1 + 1] [i_0] [i_2] [i_1 + 1]) ? 28455 : var_14));
                        }
                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            var_21 = (((max((arr_9 [i_0] [i_6 + 4] [i_2 - 3] [i_2 - 3] [i_0] [1]), 44))) ? (((max(4194176, -1)) | var_9)) : var_5);
                            var_22 = (arr_5 [i_3] [i_2 - 1] [i_1 + 1]);
                        }
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            arr_25 [i_7 - 2] [i_3] [i_0] [i_1] [i_0] = arr_10 [i_0] [i_1] [i_1] [i_2 + 1];
                            var_23 = (((((arr_23 [i_7] [i_0] [i_3] [i_2] [i_0] [i_0]) ^ (arr_9 [i_0] [i_0] [i_0] [i_2 + 2] [i_3] [i_7])))) ? (arr_21 [3] [i_1] [i_2] [i_3] [i_0]) : -35);
                            var_24 = ((~((~(arr_21 [i_0] [i_1] [i_2 - 1] [i_3] [i_0])))));
                            arr_26 [i_7] [i_7 - 2] [i_0] [i_0] [i_1] [i_0] = (1 > 195);
                        }
                        var_25 = (((((~(41 - var_13)))) ? 1251699452 : (-30 - -42)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {

        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {
            arr_35 [i_8] [2] [i_9] = (((arr_32 [i_9] [i_9 + 1]) + (arr_33 [i_9] [i_9 + 2])));
            var_26 = 2147483647;
            var_27 &= (arr_33 [10] [i_9 + 1]);
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                {
                    var_28 = (((arr_32 [i_10] [i_10]) * (arr_38 [1])));
                    var_29 *= (arr_34 [i_11] [i_10]);
                    arr_40 [i_10] [i_10] [i_11] = (((~44) ? -var_17 : 0));
                }
            }
        }
    }
    var_30 += (max(26, 41));
    var_31 = ((var_18 ? var_0 : var_7));
    #pragma endscop
}
