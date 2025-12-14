/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((1 ? var_7 : -2099613698))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_16 = (var_8 < 12471050241397955550);
                        var_17 = (max(((((!7840150181541207970) >= (((((arr_8 [i_0] [i_1] [i_1] [i_2 + 2] [i_2 - 1] [i_3]) + 9223372036854775807)) << (5975693832311596034 - 5975693832311596034)))))), ((((((arr_9 [i_0] [1] [i_2 + 2] [i_3] [i_3]) & 12471050241397955536))) ? ((((arr_0 [4]) ? var_11 : (arr_2 [1] [i_2] [i_2])))) : (805306368 * 9706385203697343706)))));
                    }
                }
            }
        }

        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            var_18 = (((9223372036854775807 ^ -5461) ? var_3 : (((min((arr_11 [i_4 + 1]), (arr_11 [i_4 - 1])))))));
            var_19 = (max((arr_3 [1] [i_0] [i_4]), 13));
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_20 *= ((!((max(4415233112313698586, 1)))));

            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 7;i_8 += 1)
                    {
                        {
                            arr_23 [i_0] [i_0] [i_8] [7] [7] [i_7] [i_8] = (((min((((1 ? var_10 : var_5))), (max(805306368, 5975693832311596049)))) / ((((((((arr_7 [i_0] [i_0] [8] [i_8]) ? (arr_11 [10]) : var_7))) < var_8))))));
                            arr_24 [2] [i_8] [i_6] = var_6;
                        }
                    }
                }
                var_21 = (arr_16 [i_0] [i_0] [1]);
            }
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                arr_28 [i_9] = (805306361 >= 17);
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_22 = var_14;
                            arr_35 [i_11] [i_9] [9] [i_9] [i_9] [i_9] [i_0] = ((((max(var_11, (max(var_2, 562675075514368))))) ? ((-(var_13 >= var_14))) : ((((var_3 ? 134217727 : 805306348))))));
                            arr_36 [1] [i_5] [i_9] [i_9] [i_9] = 805306368;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 9;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        {
                            arr_44 [i_9] [i_9] = ((1 ? 0 : 2394899804));
                            var_23 = (!var_11);
                            arr_45 [i_0] [i_5] [i_13] [i_12] [i_9] = ((224 ? (((arr_34 [i_5] [i_9] [i_12 - 1] [i_9]) ? (arr_34 [i_0] [i_5] [i_9] [i_9]) : var_14)) : (((((var_6 ? (arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_9]) : (arr_38 [i_9] [i_9] [i_9] [i_12] [i_13]))) <= 101)))));
                        }
                    }
                }
            }
            var_24 = (min(var_24, ((((arr_19 [i_0] [i_0] [i_0] [i_5] [i_5] [i_0]) ^ ((((min((arr_30 [i_5]), 3323))) ? (arr_37 [i_0] [6] [0] [i_0] [i_0] [i_0]) : var_14)))))));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    {
                        arr_53 [i_0] [6] [i_0] [i_16] = (((arr_30 [i_16]) ? 3328 : var_11));
                        var_25 ^= (((arr_4 [i_14] [i_16]) >= (arr_41 [i_16] [i_0] [i_15] [i_14] [i_0])));
                        arr_54 [i_14] [i_14] = (arr_0 [i_16]);
                        var_26 = (arr_1 [i_0]);
                    }
                }
            }
            var_27 = (((arr_38 [i_14] [i_14] [i_14] [i_14] [i_14]) ? (arr_50 [i_14] [i_14] [i_0] [i_14]) : var_13));
        }
        arr_55 [i_0] = (arr_30 [4]);
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 11;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 11;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 9;i_19 += 1)
                {
                    {
                        arr_62 [i_0] [i_0] [i_19] [i_0] [i_0] = (min(21, (min((arr_17 [i_0] [0] [i_18] [i_19 + 1]), var_3))));
                        var_28 = -990891782;
                        var_29 *= arr_30 [i_18];
                    }
                }
            }
        }
    }
    var_30 = var_13;
    var_31 = var_6;
    var_32 &= var_3;
    #pragma endscop
}
