/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= -26056;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (max(var_16, (((max(1907349185, 1))))));
        arr_4 [i_0] = arr_1 [i_0] [i_0];

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 = (((arr_5 [i_0] [i_1]) ? ((((((arr_5 [i_0] [i_1]) | 0))) ? var_7 : ((~(arr_2 [i_0]))))) : (arr_0 [i_0])));
            var_18 = (arr_0 [i_0]);
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_19 = (max(1133444678593760751, 2));

            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_20 &= (((max((((((arr_6 [i_3] [i_4]) + 9223372036854775807)) >> var_1)), (arr_1 [i_0] [i_0]))) / (((((max((arr_7 [i_2] [i_3]), var_3))) ? ((min((arr_11 [i_2]), (arr_13 [i_0])))) : (arr_12 [1] [i_2] [1] [i_4] [i_0]))))));
                    var_21 = (((arr_10 [i_0] [1] [i_3] [1]) + ((min((arr_5 [i_0] [i_2]), (arr_5 [i_0] [i_2]))))));
                    arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] [i_4] = ((!-2795765044458410746) >= (~1));
                }
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    var_22 = (min((min((arr_19 [11] [i_2] [i_0]), (max(var_9, (arr_12 [3] [i_2] [i_3] [3] [i_2]))))), (((!(-11607 - -30445))))));
                    var_23 = (max(var_23, ((max(2795765044458410745, 18446744073709551591)))));
                }
                var_24 = (max(var_24, (((max((arr_19 [i_0] [i_2] [i_0]), (arr_19 [i_0] [i_2] [i_2])))))));
                var_25 = (min(((((~var_12) ? ((1 & (arr_18 [i_0] [i_2] [i_2] [12] [i_3]))) : ((-1833081389 & (arr_16 [i_0])))))), ((738607115 & ((var_4 ? (arr_3 [i_0]) : 2795765044458410731))))));
                var_26 = (min((((!((max(32665, 29292)))))), (arr_5 [i_0] [i_2])));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                var_27 = (min(var_27, ((max(-1819688145140542914, 139841683)))));
                arr_22 [i_0] = var_6;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_28 = (arr_18 [5] [i_2] [i_6] [i_2] [i_0]);
                            var_29 = (min(-2795765044458410746, 6055732351971772229));
                        }
                    }
                }
                arr_28 [i_0] [13] [i_6] = (!1);
            }
        }
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_32 [i_9] = ((23652 % (((((((arr_30 [19]) != (arr_31 [6])))) >= -65517)))));
        var_30 *= max((min((((~(arr_31 [11])))), (((arr_29 [i_9]) / var_3)))), ((((arr_31 [i_9]) >= ((1936136750625928417 << (65517 - 65485)))))));
        var_31 |= var_6;
    }
    var_32 = (min(var_32, ((max((((~(var_0 / var_9)))), var_3)))));
    var_33 = (max(-2795765044458410746, 0));
    #pragma endscop
}
