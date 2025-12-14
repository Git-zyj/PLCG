/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (var_9 ? 7942463784497404131 : (!var_10));
            arr_7 [i_0] [i_1] [i_1] = (((var_6 % -70) ^ 18446744073709551595));
            var_12 = (13175 + 89);
        }
        var_13 ^= (((-4336 ? 28150 : -4313)));
        arr_8 [i_0] [i_0] = (((var_3 >> (var_2 + 29725))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_11 [i_0] [i_2] [i_0] = 1;
            var_14 = (~var_5);
        }
        arr_12 [i_0] = 4316;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = (1 ^ -1562623961);
        arr_16 [i_3] [i_3] = (~44223451);
        var_15 = ((var_11 ? (arr_14 [i_3]) : 2665745682));
        arr_17 [i_3] [i_3] = var_1;
    }

    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        var_16 = ((-1 == (max(4332, (2350677804 - -4309)))));
        var_17 = (max(var_17, ((((((((((arr_19 [i_4 + 1]) ? 47537 : var_10))) ? 0 : (arr_19 [i_4 + 1])))) ? ((((((2623239836358309947 ? 4313 : (arr_19 [i_4])))) ? (~var_9) : ((max(1, var_2)))))) : ((-((var_8 ? 4294967295 : 1073741312)))))))));
        var_18 = (max(var_18, ((((((((var_11 ? var_5 : var_11))) ? (var_6 >= -4333) : var_1)) - (+-4332))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_19 = min(var_7, (min((((arr_21 [i_5]) ? (arr_21 [i_5]) : var_2)), (~-126))));
        arr_22 [i_5] = ((4341 & (~3467)));
        arr_23 [i_5] [i_5] |= ((~((var_5 ? (((1 ? (arr_20 [i_5]) : (arr_20 [i_5])))) : (arr_21 [i_5])))));
        var_20 = (min(var_20, ((((((-(~31)))) && var_1)))));
    }
    #pragma endscop
}
