/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 ^= (min((!var_9), (max((876876356529660240 * var_7), ((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (4 - 4))))))));
        arr_2 [i_0] = 2147483631;

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_14 += (min(var_6, 1));
                arr_9 [i_0] [i_0] [i_0] = -var_9;
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    var_15 = (max(var_15, (-2049864498119695081 / -1)));

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_17 [i_3] [i_1] [i_3] [i_4] [12] [i_0] = (var_3 * 2886807227);
                        var_16 = (max(var_16, (((1307370920 ? 25 : -127)))));
                        arr_18 [i_0] [i_4] [2] [i_4] [i_5] = ((((((0 ? 2995981583 : -2049864498119695078)) + 9223372036854775807)) << 0));
                        var_17 = ((var_7 > ((((-2147483647 - 1) >= 62907)))));
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_21 [i_0] [i_1] = ((-var_5 == (2956023094 > var_5)));
                        var_18 = ((var_4 ? var_10 : 4294967295));
                        arr_22 [i_0] = (var_1 >= 123);
                        arr_23 [i_0] [i_1] [i_1 - 1] [i_3] [i_0] [i_6] = (((-127 - 1) ? 1998311568 : var_0));
                        var_19 = (((var_1 != var_8) || 1));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_27 [i_0] [i_1 + 1] [i_3] [i_0] [i_0] [i_3] [3] = 2147483636;
                        var_20 = (var_4 && 1);
                        arr_28 [i_0] [i_0] [i_3] [i_3] [i_0] [i_7] [i_7] = -2049864498119695081;
                        var_21 = (!113);
                    }
                    var_22 -= ((-var_8 ? var_10 : 2147483647));
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_23 = (max(var_23, (var_4 || 62926)));
                    var_24 ^= (3386209088 * var_4);
                }
                arr_31 [i_0] [i_1] [i_1 + 1] = var_12;
            }
            arr_32 [i_1 + 1] [i_0] [i_0] = ((var_8 % (max(var_9, 134217727))));
        }
        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            var_25 = (~var_7);
            var_26 -= 1023;
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                arr_41 [i_0] [i_0] [i_0] = (114 + -19);
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_27 *= (+-18446744073575333888);
                            arr_46 [i_0] = (max(((((~var_6) ? var_3 : 28131))), var_2));
                        }
                    }
                }
            }
            arr_47 [i_0] [i_10] [i_0] = 8891722460156226878;
            arr_48 [0] [i_0] = ((92 ? (((!(((16 >> (var_12 + 844906299))))))) : ((var_5 ? ((max(-25787, 1023))) : (var_7 - 1307370920)))));
            var_28 = (-2147483647 - 1);
        }
    }
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        arr_51 [i_14] = 151;
        arr_52 [7] = var_9;
    }
    var_29 = (max(var_29, (((-(min(-var_6, ((1307370920 ? var_10 : var_12)))))))));
    var_30 = var_1;
    #pragma endscop
}
