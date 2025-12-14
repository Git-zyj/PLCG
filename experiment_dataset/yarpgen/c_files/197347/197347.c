/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_6 + ((21302 / ((-9301 ? var_10 : 1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((-1 ? var_13 : var_16)) >> (((18446744073709551606 - -1) - 18446744073709551554)))) << (((max(-2882457302673205970, ((var_13 + (arr_2 [13] [i_0] [i_0]))))) - 15564286771036345583)));
                arr_6 [i_0] [i_0] [i_0] = ((-var_1 * (((-11 ? 24 : 1)))));
                arr_7 [i_0] [i_0] = -2882457302673205968;
                var_18 = ((var_0 ? ((max((arr_2 [i_0] [i_0] [i_1]), -1))) : (min(((var_14 ? -2882457302673205970 : var_12)), -1))));
                var_19 = (i_0 % 2 == zero) ? ((((!var_12) <= (((((max((arr_1 [i_0] [i_0]), (arr_0 [i_0]))) + 9223372036854775807)) << ((((-29327 ? 7 : -23)) - 7))))))) : ((((!var_12) <= (((((((max((arr_1 [i_0] [i_0]), (arr_0 [i_0]))) - 9223372036854775807)) + 9223372036854775807)) << ((((-29327 ? 7 : -23)) - 7)))))));
            }
        }
    }
    var_20 = (((min(var_11, var_7)) ? ((min(-7185754026175924171, var_13))) : var_15));
    var_21 = var_7;
    #pragma endscop
}
