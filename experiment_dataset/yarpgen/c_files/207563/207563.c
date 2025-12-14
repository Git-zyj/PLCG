/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((-(((-7 % 6) ? 93082048295233751 : ((max(1810842135, 7745831322540378290)))))));
    var_13 = (min(-7, (((((7 ? -7 : 0))) ? (661974351 + 158) : 40390))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = (((((-24 ? (8 <= 13412) : (44904 - 240)))) < (min((min(18353662025414317865, 0)), 101))));
        var_15 = (((-10091566123978787283 > -25645) & (!-1185142513)));
        var_16 = (((((min(57, 31))) ? 28 : 34)));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_17 = ((-(((59512 < (0 | -28))))));
        var_18 -= 1;
        var_19 = 68;

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_20 = 661974351;
                        var_21 = (2088955852220020456 != 1);
                    }
                }
            }
            var_22 = 18353662025414317865;
            var_23 *= ((-(!31103)));
            var_24 = (max((((18446744073709551602 ? ((max(1, -22))) : (~1600680561)))), (((min(61150, 0)) * (19376 / 24207)))));
        }
        var_25 = (min(var_25, ((((~16) ? 65535 : (max(1, (3 ^ 17820714629589727875))))))));
    }
    #pragma endscop
}
