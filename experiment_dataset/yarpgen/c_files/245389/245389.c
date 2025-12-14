/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~8718);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_3] [i_2] [i_2] = max((max(var_5, 127)), (((((var_10 ^ (-127 - 1)))) ? (min(4294967295, -13)) : ((var_6 ? 4294967295 : var_2)))));
                            arr_13 [i_3] [i_1] [i_3] [i_2] [i_3] = (min(((((!63488) == -3445876962))), ((max(-5374, 4)))));
                        }
                    }
                }
                var_12 = (((min((~4294967295), (max((arr_8 [i_0] [i_0] [i_1]), (arr_6 [15] [i_1] [0] [i_1]))))) > (!var_3)));
                var_13 = (arr_0 [15]);
            }
        }
    }

    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        arr_16 [i_4 + 4] &= min(0, 3978313847);

        /* vectorizable */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_14 = ((var_6 < (arr_15 [i_4 - 1])));

            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_15 *= (((arr_18 [2]) ? (arr_7 [i_5] [i_6]) : (arr_18 [i_6])));
                var_16 += var_8;
                arr_22 [i_4 + 2] [i_4] [i_4] [i_4] = (var_4 + var_0);
                var_17 = (((arr_2 [i_4 - 1]) ? 4294967295 : (arr_2 [i_4 - 1])));
                var_18 = ((~(-1 > var_0)));
            }
            for (int i_7 = 4; i_7 < 16;i_7 += 1)
            {
                arr_25 [i_5] = ((arr_17 [i_4] [i_4 + 4] [i_4]) > ((((arr_19 [8]) ? var_6 : -48))));
                var_19 = var_9;
                var_20 = (var_4 ? -5374 : var_1);
            }
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                arr_29 [i_4] [i_4] [i_8 - 1] [i_8] &= ((-2097152 ? (((!(arr_4 [13] [i_8] [i_8 + 1])))) : (arr_10 [i_4 + 2] [11] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_8])));
                var_21 = (max(var_21, (((0 ? (arr_5 [i_8 - 1]) : ((3445876962 ? -121 : 3445876957)))))));
            }
        }
        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            var_22 = (~var_3);
            var_23 *= 8718;
            arr_33 [i_4] = -55;
        }
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    {
                        var_24 = (max(var_24, 3445876957));
                        var_25 = (arr_19 [17]);
                        var_26 = ((4 > 8718) | (((-32767 - 1) ? (arr_8 [i_4] [i_4] [i_4 + 2]) : (arr_2 [i_4 + 4]))));
                    }
                }
            }
            var_27 = ((var_9 ? (arr_40 [i_4 + 1]) : (104 >= 64)));
        }
        arr_43 [17] = (min((arr_9 [i_4 + 1]), ((2199023255551 & (arr_8 [i_4 + 4] [i_4] [i_4 + 1])))));
        arr_44 [i_4] [i_4] |= -40;
        var_28 = (min(var_28, ((((((-9223372036854775807 - 1) / (((((arr_7 [i_4] [i_4]) >= var_9)))))) >= ((((127 ? 1832437612 : (-9223372036854775807 - 1))))))))));
    }
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        var_29 = (max(var_29, (((min(var_10, 3445876949)) & ((((arr_6 [i_13] [i_13] [i_13] [i_13]) ? (arr_0 [1]) : var_4)))))));
        var_30 = (min(var_30, ((min(((var_5 ? (var_3 > 849090333) : 1)), (!2305843007066210304))))));
    }
    #pragma endscop
}
