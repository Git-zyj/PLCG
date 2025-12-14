/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_20 = (min((((arr_0 [i_0 + 1] [i_0 - 1]) / (~-17241))), (((!(-17236 & 8191))))));
        var_21 = 3635;
        arr_2 [i_0] = 14;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = -7056127129112883835;
        var_22 = ((-(arr_4 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        var_23 = ((7846912090300567433 ? var_0 : 1));
        var_24 = (min(var_24, (((-17236 ? 8191 : -8191)))));
        var_25 = (~-8191);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_26 = (max(var_26, (arr_9 [i_3])));
        var_27 = ((((min(17236, -1))) || 32767));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            arr_15 [i_4] = ((((var_19 ? var_4 : -1129679135)) == 32767));
            var_28 = (((!644953709) ? (arr_12 [i_4]) : (arr_6 [i_4 + 1] [i_4 + 1])));
            var_29 = (((arr_0 [1] [i_4 + 1]) ? (arr_7 [i_4 + 1]) : (arr_11 [i_4 + 1])));
            var_30 = (-(arr_3 [i_4 + 1] [i_4 + 1]));

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                var_31 = (min(var_31, 4194304));
                var_32 = (((((0 ? 34652 : (arr_3 [i_3] [i_3])))) ? var_4 : (arr_18 [i_3] [i_5])));
                var_33 = (-(arr_10 [i_4 + 1]));
            }
        }
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            var_34 = (min(-26657, (((((0 >> (var_16 - 410463900863616648))) <= var_10)))));
            var_35 = (min(var_35, ((max((!-9223372036854775791), (arr_16 [i_3]))))));
        }
        var_36 = ((var_14 != ((min(13692, 65535)))));
        var_37 += (arr_14 [1]);
    }
    var_38 = (max(var_38, (!var_12)));
    var_39 = ((var_8 ? (min(1, ((min(0, var_8))))) : (min((~var_5), (!var_18)))));
    #pragma endscop
}
