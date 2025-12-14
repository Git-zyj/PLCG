/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(((((var_3 ? 12112180862898616346 : var_11))) ? (((var_2 ? 4294967295 : var_1))) : var_5))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_1 - 1] = -894065290;

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_15 [i_1] [i_1] [i_2] [i_3] [i_4] = ((~(~var_6)));
                        arr_16 [6] [i_2] [i_1] = (894065290 - -13121);
                    }
                    arr_17 [i_3] [i_1] [i_1] [6] = ((((((var_11 ? var_6 : var_6)) ^ var_4)) + (((~((894065290 ? var_10 : var_1)))))));
                    var_14 = (min(var_14, -var_4));
                }
                for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_15 = (((((((var_8 ? 1536925000 : var_11))) ? -894065290 : 0)) ^ (!var_8)));
                        arr_22 [i_0] [i_1] [i_2] [i_2] [i_2] [7] = var_0;
                        arr_23 [i_0] [i_1] = ((-(((5 >> 0) ? var_12 : (var_11 | -894065290)))));
                        arr_24 [i_1] [i_1] [i_2] [i_5] [i_6] = ((((~(var_7 ^ var_9)))) ? 127 : ((var_7 * (249 <= var_11))));
                        var_16 = (max(var_16, ((((((var_9 & ((var_3 ? var_5 : var_10))))) ? ((max((~var_4), (~0)))) : (~var_2))))));
                    }

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_17 *= ((+(((var_2 % 4415532530778544619) ? var_9 : ((var_2 ? 1 : var_6))))));
                        arr_28 [7] [1] [i_1] [i_5] [4] = (((1 ^ 894065290) + (((((((var_4 >> (var_5 - 5688022688695791788)))) >= (~var_8)))))));
                        arr_29 [i_0 - 2] [i_0] [i_1] [8] [1] = (min((((var_1 < 4294967266) ? ((var_12 ? -70076571 : var_11)) : ((var_7 ? 21 : var_10)))), (((-40 ? var_7 : -15469)))));
                        arr_30 [i_0] [i_0] [i_0] [i_1] [i_0] = ((max(var_2, (var_1 ^ var_4))));
                    }
                    arr_31 [i_1] [3] [i_2] [i_2] [3] = (min(var_8, ((var_3 ? var_8 : var_3))));
                }
                for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    var_18 = (((~var_0) ? 1562480515 : ((var_1 ? var_2 : var_1))));
                    arr_34 [4] [i_2] [i_1] [i_0] = -35;
                    arr_35 [12] [0] [5] [i_2] [5] [i_1] = var_11;
                    arr_36 [i_0] [i_1] = (((((((var_12 ? var_1 : var_7)) & (var_7 / var_11)))) ? (((var_3 ^ var_9) ? (((3189451902 ? var_3 : var_11))) : ((var_12 ? var_6 : -31278)))) : var_10));
                }
                arr_37 [i_1] [i_1] = (max(252, (((var_9 <= 42) ? var_11 : var_11))));
                var_19 = (max(var_19, var_4));
            }
            var_20 *= (((~var_6) ? ((~(((-127 - 1) | var_8)))) : (((25 ? (var_5 && var_1) : (var_1 ^ var_3))))));
        }
        var_21 = ((~(((var_10 ^ var_8) >> ((((var_4 ? var_4 : var_2)) - 25))))));
    }
    var_22 *= 22641;
    #pragma endscop
}
