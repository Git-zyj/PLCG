/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_11 = (((((arr_0 [i_0]) + 9223372036854775807)) << (((var_2 + 3970) - 42))));
        arr_3 [i_0] = 681370843;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_2] = (arr_9 [i_0] [3] [i_0] [3]);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [9] [i_2] [i_3 - 3] = (var_5 >= 3613596453);
                                var_12 = 1125899905794048;
                            }
                        }
                    }
                    var_13 = (max(var_13, ((((~(arr_12 [i_1] [i_1])))))));
                    var_14 = (((arr_14 [i_0]) ? 209 : (((arr_4 [i_0] [0]) - 7580168527130309017))));
                }
            }
        }
        var_15 = (~0);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {
        var_16 *= (arr_15 [i_5] [i_5]);
        var_17 -= (((arr_15 [i_5] [i_5]) << (!var_4)));
    }

    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_18 = min(((3774518364 ? 6 : var_4)), 10);
        arr_23 [i_6] = (min(681370861, -148416896973789141));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_19 *= 7580168527130309037;
        arr_27 [i_7] [i_7] = (min(var_9, (min((1920 % 371038206819747387), (var_9 * var_2)))));
        arr_28 [i_7] [i_7] = ((~((-var_5 ? ((10866575546579242589 << (var_1 - 166))) : (62432 >= var_8)))));
        var_20 = (min(var_20, var_7));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        arr_31 [i_8] = (1 == var_2);

        for (int i_9 = 2; i_9 < 14;i_9 += 1)
        {
            var_21 = var_6;
            var_22 = (((((+(((arr_25 [i_8] [14]) ^ 3613596446))))) ? (max((arr_25 [i_8] [i_8]), (113 ^ 4330538106657138312))) : ((((((var_9 ? var_2 : var_4))) ? 192 : (var_5 - 247))))));
            var_23 = (((arr_32 [i_8] [i_9 + 1]) / (arr_20 [i_9 + 2] [3])));
        }
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            var_24 = var_5;
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 0;i_13 += 1)
                    {
                        {
                            var_25 = ((((((!(arr_39 [i_10]))))) * 10866575546579242578));
                            var_26 = ((((((arr_47 [i_10] [i_10] [i_12 + 1] [i_13] [3]) >= (arr_47 [i_8] [i_8] [i_12 + 1] [i_13] [i_13 + 1])))) >> (((((var_4 ? var_3 : var_5)) <= (((max(var_9, (arr_45 [1] [i_10]))))))))));
                        }
                    }
                }
            }
            var_27 = (max((((10866575546579242594 ? (((min(6, 249)))) : 336768870))), (max((min(148416896973789165, -5680229875894251131)), var_0))));
        }
        var_28 = ((((min((arr_37 [i_8]), var_9))) + (47 == 185)));
    }
    var_29 = var_5;
    #pragma endscop
}
