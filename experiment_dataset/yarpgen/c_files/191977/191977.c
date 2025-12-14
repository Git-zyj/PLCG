/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1 - 1] = var_7;
                arr_7 [i_0 - 1] [i_0] [i_0] = (arr_2 [i_0 + 1] [i_1]);
                var_17 *= ((((-7220903833587089360 ? 20395 : 900911927))) + var_13);
            }
        }
    }
    var_18 = -8679;

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_21 [i_2] [i_4 - 2] = (arr_18 [i_3] [i_3 + 1] [i_4 - 3] [i_2]);

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_24 [i_2] [i_4] [i_5] [i_6] = var_16;
                            var_19 = (47 / 716419951);
                            arr_25 [i_2] [i_3] [i_4 - 2] [i_5] [i_6] [i_6] = var_16;
                            var_20 *= (-242872288 & 716759871);
                        }
                    }
                }
            }
        }
        var_21 = ((1360 ? 0 : (arr_9 [i_2])));

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            arr_28 [i_2] = ((var_9 && ((((arr_16 [i_2] [i_2]) + 1)))));
            var_22 ^= (-16 | 29);
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            arr_37 [i_2] [i_9] [i_7] [i_2] = (min(var_3, (arr_29 [3] [i_2] [i_8] [i_9])));
                            arr_38 [i_10] [i_8] [i_9] [1] [i_8] [i_2] &= -5663389232624069523;
                            var_23 = ((var_7 < ((((max((arr_11 [i_2]), (arr_29 [i_10] [i_2] [i_10] [i_10])))) ? (max(var_9, var_5)) : ((69 ? 588863905 : 111))))));
                            arr_39 [i_2] [i_10] = var_6;
                            arr_40 [i_2] [i_2] [i_8] [i_8] [i_8] [i_7] [i_9] = (4161148159940966181 <= 0);
                        }
                    }
                }
            }
            arr_41 [i_2] = (!70);
        }
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            var_24 -= arr_17 [i_2] [i_2] [i_11];
            arr_44 [i_11] [i_11] [i_11] &= 53;
        }
        for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
        {
            var_25 *= var_4;
            arr_48 [8] [i_2] [i_2] = ((((var_14 ? 9184 : 16744448)) <= var_5));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 21;i_14 += 1)
                {
                    {
                        arr_55 [i_2] [i_12] [i_12] |= (arr_50 [i_2] [i_12]);
                        var_26 = ((3578547345 ? (~-14027) : (((arr_17 [i_14 + 1] [i_12] [i_13]) ? (arr_17 [i_14 - 2] [i_14] [i_2]) : (arr_29 [i_14 - 1] [i_12] [i_12] [i_14 + 1])))));
                        arr_56 [i_2] [i_12] [i_2] [i_14 - 1] |= ((((max((arr_46 [i_12] [i_14 + 1]), -7928))) ? (min(var_1, ((15 ? 3578207424 : 1)))) : var_14));
                    }
                }
            }
            arr_57 [i_2] [i_2] = (1094620429462063739 > var_8);
            var_27 = var_8;
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
        {
            var_28 -= (!-35);
            var_29 = ((3578207422 ? 20299 : 15));
            var_30 &= ((-127 ? (arr_36 [i_15] [i_2] [i_15] [i_2] [i_15]) : var_3));
        }
    }
    var_31 = ((((var_7 ? (max(16756496330886709534, (-2147483647 - 1))) : (var_11 != var_11))) <= -4));
    #pragma endscop
}
