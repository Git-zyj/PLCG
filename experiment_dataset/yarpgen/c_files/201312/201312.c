/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_3 ? ((max((var_4 && var_11), var_5))) : ((((1 ? var_9 : var_10)) / (var_0 * var_6)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_17 = (max(var_17, var_2));
        var_18 -= (((0 & var_9) == (~231)));
        var_19 = 28;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_20 = ((((((((1 ? 1 : 252))) ? 1895347333350189309 : var_7))) ? (min(((min(var_4, 5347))), var_15)) : (((var_6 ? (max(var_14, 1220432088)) : ((((var_14 + 2147483647) >> (var_6 + 86)))))))));
            var_21 = 75;
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            arr_9 [i_1] [i_1] = var_7;
            var_22 = (((((var_9 * var_13) ? (var_3 - 4840) : (var_7 - 14))) != var_15));
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
        {
            var_23 = ((var_7 > ((min(var_0, var_1)))));

            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                var_24 = -var_14;
                arr_15 [i_1] [i_1] [i_1] [i_5] = ((var_4 >= ((((((6 ? 1 : var_11))) || 18446744073709551605)))));
                var_25 = var_6;
                arr_16 [i_1] [i_4] [i_5] = ((1 ? 29500 : 2436488785229009351));
            }
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                arr_19 [i_1] [i_1] [i_1] = ((1 ^ (var_12 & 24)));
                arr_20 [i_1] [i_1] [i_1] &= (!var_15);
            }
            arr_21 [i_1] [i_1] [i_1] = (min((((var_8 != (min(var_12, var_6))))), var_11));
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
        {
            var_26 |= var_2;
            var_27 = 42485;
            var_28 = (((var_8 <= var_12) ? (var_14 + var_11) : ((-2436488785229009341 ? var_9 : var_3))));
        }
        var_29 &= 1;
        var_30 = (((((var_14 ? var_7 : var_12))) && 0));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
    {
        var_31 = (((max(((var_1 ? var_9 : 1)), -71)) & ((0 ? var_1 : ((16383 ? -1 : 14))))));
        arr_26 [i_8] [i_8] = (((((var_3 - var_8) ? (var_10 & var_2) : 26)) ^ 3336785278));
        var_32 = (((~var_11) ? ((var_6 ? var_11 : ((var_7 ? var_1 : 1)))) : (var_15 && var_8)));
    }
    #pragma endscop
}
