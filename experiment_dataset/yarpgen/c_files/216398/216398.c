/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (((((var_7 | 3318133615) ? (var_1 > var_8) : (204 == 791822370)))) || var_1);
    var_13 = var_3;

    for (int i_0 = 3; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_14 = ((((127 << (var_5 - 16009))) << (-127 > var_2)));
        arr_2 [i_0] = ((((((-125 == -105) ? var_1 : var_6))) ? (var_11 == 26) : (49 | 105)));
        var_15 = (((!-76) ? (((var_7 == (-124 ^ 1)))) : (0 == 2534696990)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 *= ((((((4294967281 || 70) ? ((var_10 ? var_5 : var_10)) : var_11))) || (((!var_0) || (((var_2 ? var_8 : var_10)))))));
                    arr_9 [i_0] [i_1] = (((((108 ? var_4 : (var_5 / var_1)))) ? (var_4 & var_1) : var_10));
                    arr_10 [i_1] [i_2] [i_1] [i_1] = (((-103 & var_11) * (((!3503144926) ? (1 == 2595696997) : (var_10 > var_8)))));
                    var_17 = (max(var_17, ((((((var_10 ? (2179882501 == var_5) : (124 ^ 1)))) ? var_1 : (((-9223372036854775801 & 4294967269) | (((127 ? 65535 : 1))))))))));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_18 = ((!((!(((4294443008 ? var_9 : var_1)))))));
        var_19 = ((var_9 + var_8) ? ((1 ? var_5 : (114 - var_9))) : (var_8 - var_7));
        var_20 = (((((((26 ? 1 : -1))) ? var_3 : 791822389)) ^ ((((var_9 == (var_1 * 1)))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_21 = var_8;
        var_22 = ((3850959535 ? 3503144926 : 26));
        var_23 = 2115084795;
    }
    #pragma endscop
}
