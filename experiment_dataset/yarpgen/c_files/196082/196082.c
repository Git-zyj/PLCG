/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 |= ((((min(var_5, ((0 & (arr_2 [i_0] [i_0])))))) ? 0 : (((((max(6545299319737997399, var_7))) && ((min(var_9, var_11))))))));
        var_16 ^= 2708234325;
        var_17 = (var_7 >> (var_4 - 2055929144));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_18 = (min((arr_4 [i_1]), (arr_4 [i_1])));
        var_19 &= (((0 + 0) ? (((9223372036854775807 ? (arr_3 [i_1]) : (arr_3 [i_1])))) : ((5344798028321966493 ? 1729382256910270464 : 0))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_20 -= (min((!59), -var_5));

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_21 ^= (min(((min(0, 18))), 65523));
                            var_22 *= (((((-((39 ? var_2 : -30))))) ? -9223372036854775793 : ((((((40948 ^ (arr_10 [i_2] [i_3]))) != (max(var_13, var_2))))))));
                            var_23 &= (max(((arr_10 [i_3] [i_5]), -0)));
                        }
                    }
                }
                var_24 = (max(var_24, (arr_0 [i_4])));

                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_25 *= (-32767 - 1);
                    var_26 = (((~((-9223372036854775802 ? 0 : 1)))));
                    var_27 = ((~(((arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]) - 0))));
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_28 = (-(arr_17 [i_2] [i_8]));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                        {
                            arr_33 [i_8] [i_2] [i_9] = ((!((((arr_19 [i_2] [i_2] [i_9] [i_10] [i_2]) ? var_9 : 19642)))));
                            var_29 = (39 % 74);
                        }
                        for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
                        {
                            var_30 = 1;
                            arr_38 [i_10] [i_8] [i_2] [i_10] [i_12] [i_12] = var_1;
                            arr_39 [i_2] [i_8] [i_2] [i_8] [i_2] [i_12] = ((var_5 % ((-9223372036854775807 ? 3143390614 : 56332))));
                            var_31 = (arr_22 [i_2] [i_8] [i_9] [i_12]);
                        }
                        var_32 = (((arr_37 [i_2] [i_2] [i_2] [i_9] [i_10]) ? (arr_37 [i_2] [i_2] [i_2] [i_9] [i_10]) : var_13));
                    }
                }
            }
            var_33 = ((26359 ? (((arr_24 [i_2] [i_8]) | var_3)) : var_7));
            var_34 = (i_2 % 2 == 0) ? ((((~var_12) >> (((arr_29 [i_2] [i_8] [i_2]) - 2824619581))))) : ((((~var_12) >> (((((arr_29 [i_2] [i_8] [i_2]) - 2824619581)) - 1722555260)))));
        }
        var_35 = var_14;
        var_36 = (((max(((max((arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_5 [i_2])))), (arr_6 [i_2])))) ? 0 : var_13);
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
    {
        arr_42 [i_13] = 47882;
        var_37 = (min(var_37, 20296));
    }
    var_38 = ((((((var_11 - 1) ? -0 : (2654030652 - 39177)))) ? ((((min(-9223372036854775793, -1380686946))) ? -45239 : var_1)) : 20));
    var_39 = var_6;
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            {
                var_40 = ((~((((min((arr_0 [i_15]), 3214320228))) ? (arr_44 [i_14]) : var_14))));
                var_41 = (min(0, ((min((min(-109, var_10)), 0)))));
            }
        }
    }
    #pragma endscop
}
