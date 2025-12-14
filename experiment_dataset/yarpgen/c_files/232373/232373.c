/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!((min((arr_1 [i_0]), (arr_0 [i_0] [i_0]))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_5 [12] [i_1] [12] = ((var_8 ? (arr_1 [i_1]) : var_1));
            var_10 = arr_0 [i_1] [i_1];
            arr_6 [i_0] = arr_3 [i_0] [12] [i_0];
        }
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            var_11 = 1568008208;
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        var_12 &= var_9;
                        var_13 = (min(var_13, ((min((((((min(4276988347, (arr_14 [2] [4] [12] [i_0] [2])))) || 17978955))), (min(((min((arr_0 [13] [11]), -19772))), (min((arr_3 [i_2] [i_2] [i_0]), (arr_13 [1] [i_2] [i_2] [i_4]))))))))));
                    }
                }
            }

            /* vectorizable */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_14 = var_7;

                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_15 -= (((arr_4 [i_2 - 1] [i_2 - 2]) ^ (arr_4 [i_2 + 2] [i_2 + 1])));
                    arr_20 [i_5] [i_5] [i_5] = (arr_16 [1] [13] [1] [1]);
                    arr_21 [i_5] [i_6] = 3862552376567782927;
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    var_16 *= (-3862552376567782924 <= 35);
                    var_17 *= (((arr_15 [i_0] [8] [8]) - (arr_18 [1] [i_2 + 1])));
                    arr_25 [i_0] [i_5] [7] [i_7] = (17978939 & 1568008209);
                }
                for (int i_8 = 1; i_8 < 13;i_8 += 1)
                {
                    var_18 *= ((17978939 ? 2726959087 : -32753));
                    arr_28 [8] [1] [i_5] [12] [i_0] [8] &= arr_9 [i_2 + 1] [i_8];
                }
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    var_19 -= (arr_11 [4] [4] [i_9] [2]);
                    arr_32 [12] [i_5] = ((-27421 ? 3862552376567782921 : var_1));
                }
            }
            var_20 ^= (arr_26 [2] [i_0] [0] [i_2] [6] [i_2]);
        }
    }
    /* vectorizable */
    for (int i_10 = 4; i_10 < 9;i_10 += 1)
    {
        arr_35 [i_10] = -18446744073709551603;
        var_21 = 40;
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        var_22 = (min(((var_4 >= (arr_9 [i_11] [i_11]))), ((var_6 < (arr_9 [i_11] [i_11])))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                {
                    arr_44 [i_11] [i_11] = ((((min(-var_1, var_9))) ? var_0 : ((-((min((arr_31 [i_11] [i_11] [i_12] [i_13] [i_13]), var_0)))))));
                    arr_45 [7] [i_11] [7] = ((-(min(var_9, var_3))));
                    arr_46 [i_11] = (arr_40 [i_12] [i_12] [i_13]);
                    var_23 = (((min(var_2, (((var_1 <= (arr_12 [i_11] [1] [i_12] [i_13])))))) <= (-1 <= 0)));
                    var_24 = ((((min((min(4276988340, var_5)), (min((arr_9 [i_12] [i_11]), var_0))))) ? ((min((min((arr_13 [9] [11] [i_13] [2]), var_5)), (4276988340 == 17304665840876230097)))) : (((-1 > ((((arr_30 [i_11] [i_11] [i_11] [4]) > var_0))))))));
                }
            }
        }

        /* vectorizable */
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            var_25 = (~(arr_13 [12] [12] [i_11] [6]));
            arr_50 [i_11] [i_11] = arr_39 [i_11] [i_11] [i_14];
            var_26 = ((var_3 & (arr_17 [i_11] [i_14] [i_14] [i_11])));
        }
        for (int i_15 = 0; i_15 < 12;i_15 += 1)
        {
            var_27 = (((((((1 ? (arr_1 [i_15]) : (arr_18 [i_11] [i_11]))) != (arr_9 [i_15] [i_15])))) >> var_5));
            arr_53 [i_11] [i_11] = ((+(((arr_11 [i_11] [i_11] [4] [i_11]) & (arr_11 [i_11] [i_11] [i_11] [i_11])))));
            var_28 &= (min(((-var_4 ? 288230376151711744 : (arr_0 [i_15] [i_11]))), var_0));
            arr_54 [i_11] [4] [i_11] = (min((((arr_24 [i_11] [i_15] [i_15] [1] [i_15]) ? var_5 : var_2)), (3862552376567782915 ^ 133)));
        }
    }
    var_29 |= var_5;
    #pragma endscop
}
