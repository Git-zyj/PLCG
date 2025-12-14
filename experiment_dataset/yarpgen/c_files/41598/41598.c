/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_12 ^= (27 / 1906054400);
                        var_13 = ((((max(15527650368500368792, (arr_0 [i_3])))) * (~54550)));
                        var_14 *= var_1;
                    }
                    var_15 = (max(var_15, (((-1879773809 ? -318443749435282968 : (arr_8 [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 2]))))));
                }
            }
        }
    }
    var_16 = var_1;
    var_17 = var_2;

    /* vectorizable */
    for (int i_4 = 3; i_4 < 18;i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] = ((arr_11 [i_4 - 2]) >> (((arr_11 [i_4 - 3]) - 14820)));
        var_18 -= (((arr_11 [15]) ? 1023 : (arr_12 [i_4 - 3] [i_4 - 3])));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_19 += (65534 != 1006);
            arr_16 [i_5] [3] [i_5] = (arr_12 [i_5] [i_4]);
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            arr_20 [i_6] [i_6] = arr_12 [i_4] [i_6];
            var_20 = (max(var_20, 44004));
        }
    }
    for (int i_7 = 3; i_7 < 18;i_7 += 1) /* same iter space */
    {
        var_21 = -2217543058909646066;
        arr_24 [i_7] = ((((!(arr_17 [i_7] [6] [i_7]))) ? (max((~-2217543058909646063), var_5)) : (max(var_10, (arr_15 [i_7 - 1] [i_7])))));
        var_22 = (min(var_22, (((((((-20639 ? var_7 : var_8))) % ((16552476161554461125 ? 2217543058909646066 : 60))))))));
    }
    for (int i_8 = 1; i_8 < 17;i_8 += 1)
    {
        arr_27 [i_8] = -2752867531379400964;
        var_23 |= ((((((!(arr_23 [i_8 + 1]))))) <= (min(20637, (min(-1918, 18446744073709551615))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                {
                    var_24 = (min(var_24, ((max(1, -5798849651631386409)))));
                    var_25 = (((-6350409802101690058 % 21525) != 2217543058909646057));
                    arr_34 [i_8] [i_9] [i_10] = (arr_18 [i_8]);
                    var_26 = 21510;
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {

        for (int i_12 = 1; i_12 < 1;i_12 += 1)
        {
            var_27 = (arr_1 [i_11] [i_11]);
            var_28 ^= (arr_14 [i_11]);
            arr_41 [i_12] [i_12] = max((max((((~(arr_32 [i_12] [i_12] [i_12] [7])))), (arr_6 [i_12] [i_12] [15] [i_11]))), (max((((1003 & (arr_39 [i_12])))), var_10)));
        }
        for (int i_13 = 2; i_13 < 17;i_13 += 1)
        {
            var_29 = (min(var_29, (((-7378636679855932312 ? (max((arr_23 [i_13 - 2]), (arr_23 [i_13 - 2]))) : (arr_7 [i_11] [i_11] [i_11]))))));
            arr_44 [i_11] [2] = -24639;
        }
        var_30 = (min(var_30, (((1296648974 ? (((arr_7 [i_11] [i_11] [i_11]) ? (arr_32 [i_11] [i_11] [i_11] [i_11]) : var_10)) : ((min(-30015548, 3440248792))))))));
        var_31 = var_11;
        var_32 = min(var_11, (arr_6 [i_11] [i_11] [i_11] [i_11]));
        arr_45 [i_11] [i_11] = (arr_21 [i_11]);
    }
    var_33 = var_7;
    #pragma endscop
}
