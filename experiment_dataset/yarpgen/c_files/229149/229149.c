/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(var_13, (((var_7 ? 63 : (-9223372036854775807 - 1))))))) || var_11));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((((((arr_3 [i_1]) + (arr_3 [i_1])))) ? (min((arr_3 [i_1]), 4144170346796768885)) : (((max(91, (-32767 - 1)))))));
                arr_5 [i_1] = (arr_0 [i_0 + 1]);
                arr_6 [i_1] = (arr_3 [i_1]);
                var_16 *= (max(((-((1027575485 ? var_2 : (arr_2 [8]))))), ((max(499327497, var_11)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_9 [i_2] = (((min(816734493, (((-144 >= (arr_7 [i_2] [i_2])))))) * var_3));
        var_17 ^= ((((arr_7 [i_2] [i_2]) + 2147483647)) >> (arr_8 [i_2]));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_14 [i_3] = ((-(max(1213, (max(3226978889, 0))))));
            var_18 = var_0;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        var_19 = 18881;
                        var_20 -= 8811644460021130453;
                    }
                }
            }
            var_21 = (arr_13 [12]);
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_22 = min((((2147475456 && (arr_16 [i_2] [i_2])))), ((1 % (((arr_23 [i_2] [i_7]) ? var_1 : 433282980440276974)))));

            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                var_23 = var_3;
                var_24 *= (max(-55, var_10));
                arr_26 [i_2] [i_2] [i_7] [i_8] = (min(var_10, ((3806489075 + (arr_20 [i_2] [i_7] [8] [i_2] [i_2] [i_8])))));
                var_25 = (~(((arr_18 [i_8]) * ((0 ? (arr_13 [i_8]) : 872853222)))));
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_26 = (0 != 169);
                var_27 |= 4214;
                var_28 = (max(var_28, -18));

                for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                {
                    arr_31 [i_2] [i_7] [i_9] [i_9] [i_10] = (arr_30 [i_2] [i_7] [i_7] [i_7] [i_9] [i_9]);
                    arr_32 [i_2] [i_2] [i_9] [i_9] [i_2] = (arr_29 [i_2] [i_7] [i_9]);
                    arr_33 [10] [i_9] [i_9] [i_7] [i_2] = (arr_8 [i_2]);
                }
                for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                {
                    arr_38 [i_2] [i_2] [i_2] [i_2] = 2147483647;
                    var_29 += (((arr_22 [12]) || 230));
                }
            }
        }
        arr_39 [i_2] = (((((+((((arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [1]) || (arr_19 [i_2] [i_2] [i_2] [i_2]))))))) >= (((max(872853222, 0)) << (((562881233944576 >= (arr_18 [16]))))))));
    }
    #pragma endscop
}
