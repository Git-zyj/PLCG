/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_18 = (arr_0 [i_0 - 1] [i_0]);
        var_19 ^= (((arr_1 [i_0 - 1]) <= var_9));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_20 = var_14;
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                {
                    arr_9 [i_2] = 118;
                    var_21 = ((!((((min(13066372233608996731, -7308268263744803721)) ^ (arr_8 [i_2 - 1] [i_2 - 1] [i_1 + 1]))))));
                }
            }
        }
        var_22 = ((13663762536093978900 ? -8973976057695707189 : 13663762536093978900));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_12 [i_4] = var_12;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_23 -= (max(((-(max(7350336113058889878, (arr_15 [i_4] [i_4]))))), (arr_21 [6] [i_4] [i_6] [i_8] [i_4])));
                            arr_23 [i_4] [i_8] [i_6] [i_7] [i_7] |= (((~var_4) ? 53605 : (((var_5 + 9223372036854775807) << (((arr_22 [i_4] [i_6] [i_6] [i_7] [i_8] [0]) - 31785))))));
                        }
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            var_24 = ((max(2138, (arr_21 [i_9 + 1] [i_9 + 1] [i_5] [i_9 + 1] [i_9 + 1]))));
                            var_25 ^= (((4246900820 / -8973976057695707202) ? var_8 : (arr_0 [i_9 + 1] [i_5])));
                        }
                        var_26 ^= ((-(min(((var_13 ? (arr_6 [i_4]) : var_10)), ((min(var_13, 63397)))))));
                    }
                }
            }
        }
        arr_26 [i_4] [i_4] &= arr_16 [i_4] [4];
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {

        /* vectorizable */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_27 ^= 11707043688343620319;
            var_28 = ((1 ? (arr_0 [1] [i_11]) : (arr_0 [i_10] [i_11])));
            arr_33 [i_11] [i_10] = (((arr_27 [i_11] [i_11]) & (!var_6)));
        }
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    {
                        var_29 ^= (max((arr_30 [i_10]), (arr_34 [i_14] [i_12] [i_10])));
                        var_30 = (var_2 - -var_16);
                        arr_43 [i_10] [i_12] [i_13] [i_13] [i_14] = (max((((arr_30 [9]) ? (arr_6 [i_12]) : (min((arr_37 [i_10] [i_12] [i_13] [i_14]), 926193471)))), (arr_1 [i_13])));
                    }
                }
            }
            arr_44 [i_12] = (((arr_1 [i_10]) != (arr_0 [3] [i_12])));
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 14;i_16 += 1)
            {
                {
                    var_31 |= arr_37 [i_16 - 3] [i_15] [i_10] [i_10];
                    var_32 = ((((min(65535, -1))) ? (((arr_34 [i_16 - 1] [i_16] [i_16]) ? (~var_16) : (((arr_28 [i_16 + 1]) & 5380371840100554906)))) : (((~(arr_35 [i_16 - 3] [i_16 + 1] [i_16 - 2]))))));
                }
            }
        }
    }
    var_33 ^= var_13;
    var_34 += ((((min(549755813887, (13066372233608996710 / 1793119711581421224)))) ? (!var_5) : ((min((var_16 <= var_11), var_9)))));
    var_35 ^= 1;
    var_36 |= ((!((min(-2326795225068756693, 8723)))));
    #pragma endscop
}
