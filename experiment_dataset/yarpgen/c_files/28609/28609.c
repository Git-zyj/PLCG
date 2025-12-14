/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_4, (((!(-784701824 ^ 1))))));
    var_12 = ((((min(var_6, (149 == 79)))) ? (var_7 != var_9) : ((((max(18011, 17602))) ? var_3 : ((3400782228 ? 2619899 : 114))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((max(((0 ? 202 : 0)), -2649841773783662603)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_1] = (((-23144 ? -27396 : var_2)));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_13 = (0 % 117);
                            var_14 = ((var_5 ? -7902127919972964689 : var_8));
                            var_15 = (!509784954);
                        }
                    }
                }
            }
        }
        var_16 = var_1;
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_17 = var_4;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_25 [i_5] [i_5] [i_6] [i_7] [i_5] [i_8] = ((((((12 ? -1285349709 : 252) >= (85 - 30))))));
                        var_18 = ((-(-134018865 + 63832)));
                    }
                }
            }
        }
    }
    for (int i_9 = 2; i_9 < 19;i_9 += 1)
    {
        arr_28 [i_9] = (max(4049905786371161536, (126438564 | var_2)));
        var_19 = ((-var_2 ? ((var_3 ? -24 : var_4)) : 1472721574));
        arr_29 [i_9] [i_9] = 2283764284;
    }
    for (int i_10 = 1; i_10 < 13;i_10 += 1)
    {

        for (int i_11 = 3; i_11 < 11;i_11 += 1)
        {
            arr_34 [i_10] = var_5;
            var_20 = var_7;
            var_21 = (min(var_21, ((((((-716773847 ? -782859625 : ((-2048200882 ? 1 : var_2))))) ? var_6 : (max(-4234074810, (min(1, var_7)))))))));
        }

        for (int i_12 = 4; i_12 < 12;i_12 += 1) /* same iter space */
        {
            var_22 = var_7;
            var_23 = ((max((~-233763656), 844724010490829710)));
            var_24 = (var_10 == var_10);
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    {
                        var_25 ^= var_0;
                        var_26 = (~-1887681433);
                        arr_43 [i_10] [i_12 + 1] [i_13] [i_10] = (((364210749883350964 != var_8) | (1672087899612568839 % var_2)));
                        var_27 = ((((6456 != (96 | var_6)))));
                    }
                }
            }
        }
        for (int i_15 = 4; i_15 < 12;i_15 += 1) /* same iter space */
        {
            var_28 = ((~30) % (max((4037027287 || var_0), 53748)));
            var_29 = ((((~((1303260609 ? var_5 : 3113303755)))) % ((((!((max(-2026591749, var_5)))))))));
        }
        arr_48 [i_10] = ((~((~((-50 ? 2146188926 : -909811595))))));
        arr_49 [i_10] = ((((((min(1, 56325)) && (!var_6))))));
    }
    var_30 *= (!var_10);
    #pragma endscop
}
