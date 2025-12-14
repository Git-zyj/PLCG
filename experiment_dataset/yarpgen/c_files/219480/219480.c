/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [18] |= (min(1387058944, 1));

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    arr_7 [i_1] [i_2 - 1] = ((1857414686 ? (((((-2828 ? 1857414663 : -2844))) ? (((-9223372036854775807 - 1) & 1)) : 1857414682)) : -52));
                    arr_8 [i_1] = ((((((arr_3 [i_1 + 1] [i_1 + 1] [i_2 + 1]) ? (arr_3 [i_1 - 2] [i_0] [i_2 + 1]) : 6144))) ? (max((~var_14), (min(251658240, 1857414686)))) : ((((!(!0)))))));
                    var_16 = (min(var_16, ((((((max(var_6, var_0))) ? (8388607 <= 18446744073457893375) : (var_4 <= var_14)))))));
                    var_17 = (min(18446744073701162987, (((-31033 ? var_9 : ((min((arr_3 [i_0] [i_1] [1]), (arr_0 [i_0])))))))));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    arr_11 [i_1] = ((((min((((-20 ? 0 : var_5))), -18446744073457893375))) ? (((((var_9 ? -576460752303423488 : 23105))) ? ((var_13 ? (arr_5 [i_0] [i_1] [i_3]) : (arr_9 [i_0] [i_1]))) : (arr_9 [i_0] [i_1]))) : 32768));
                    arr_12 [i_1] [i_1] = 1;
                }
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    var_18 = (max(32768, 14));
                    var_19 = (min(((((min(var_13, 3840359546584112066))) ? ((min(60941, 59392))) : (~-19539))), -31033));
                }
                var_20 = ((((min(251658240, (((var_9 + (arr_10 [2]))))))) ? (arr_0 [i_0]) : ((min(24416, 1)))));
            }
        }
    }
    var_21 = (!var_2);
    var_22 = ((((((var_3 + var_7) ? var_2 : var_3))) ? 160 : (((~var_0) ^ -24401))));
    #pragma endscop
}
