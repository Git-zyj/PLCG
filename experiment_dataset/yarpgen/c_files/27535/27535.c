/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((0 ? 217 : 247));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = -8277519962126368776;
        arr_3 [i_0] = (((~478640338543083677) | var_10));
        var_19 = 18119832983443819140;
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_20 = (min(var_20, (((((~1) || 0))))));
        arr_6 [i_1] = 1;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                var_21 *= (((((3866594751 | (((min(62733, var_0))))))) & -6385399128248122203));
                                var_22 = (((((~(var_8 & -16090)))) ? ((~(!var_1))) : ((~(var_8 != -23)))));
                            }
                        }
                    }
                    var_23 -= (min((((~(!187)))), (((((2612189763022597140 ? 2800 : -4058))) ? (arr_9 [0] [i_3]) : (((var_3 ? var_7 : 3674159038)))))));
                    arr_16 [i_2] [i_2] [i_3] = 1322322083;
                }
            }
        }
        arr_17 [i_1 + 3] |= ((((min(-2147483626, -24))) % ((62734 ? 145 : 1))));
        arr_18 [i_1] = ((((~((60 ? 107 : 1))))) - (min((arr_15 [i_1 - 1] [18] [18] [i_1 + 1]), (arr_15 [i_1 + 3] [2] [2] [i_1 + 2]))));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_24 = (((min(-32490, ((3 ? 32760 : 7075501377187230519)))) | -var_2));
        arr_22 [i_6] = 2972645213;
        arr_23 [i_6] = var_10;
        arr_24 [i_6] [i_6] = (((-32740 || var_13) ? ((-4284419923327207138 ? 1379526287 : (arr_20 [i_6]))) : (((-8 ? 1322322071 : (-32767 - 1))))));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_25 -= (!-9223372036854775807);
        var_26 = ((~(-32500 % 18446744073709551615)));
    }
    #pragma endscop
}
