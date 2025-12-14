/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] = ((var_8 ? -32689 : 32687));
            arr_6 [i_1] [i_1] = (arr_1 [i_0] [i_0]);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_11 = (max(var_11, ((((((32689 ? 243 : (arr_9 [i_2])))) ? var_8 : (max((var_7 && var_0), (~var_3))))))));
            arr_10 [i_0] [i_0] = (--var_9);
            var_12 = (((max((~var_9), ((-32689 ? (arr_3 [i_0]) : var_0)))) ^ (((min(32689, -32689))))));
        }
        var_13 = var_5;
        arr_11 [16] [i_0] = (((!var_7) >= ((-((1 ? 38 : 32712))))));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_16 [i_3] = (((((-(arr_4 [i_3] [i_3])))) ? (min(11008548204096518109, (arr_0 [i_3]))) : (arr_4 [i_3] [i_3])));
        arr_17 [i_3] = (max(var_5, ((-(arr_0 [i_3])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_20 [i_4] [i_4] = var_6;
        var_14 = (-15202 & -22486);

        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            var_15 = (min(var_15, (((((592690420 ? (arr_8 [i_4] [i_5] [i_5]) : var_5)) << (((arr_9 [i_5 - 1]) - 24059)))))));
            arr_24 [i_5] = ((!((var_6 == (arr_15 [i_5])))));
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            arr_27 [i_4] [i_6] [i_6] = var_4;
            var_16 = (max(var_16, ((((((-(arr_9 [i_6])))) ? var_3 : var_3)))));
            var_17 *= (((((arr_4 [i_4] [i_6]) + var_0))) ? var_0 : 2889111916);
            var_18 = (min(var_18, (((!(arr_22 [1] [i_6] [i_4]))))));
        }
    }
    var_19 = ((var_4 ? (((max(-32689, var_9)))) : (min(var_2, (min(var_1, var_6))))));
    var_20 = ((!((((((30 ? -1089827439 : 3906386519))) ? (((var_0 ? var_3 : var_4))) : (max(var_9, var_0)))))));
    var_21 = (min((min(((var_7 ? var_6 : var_6)), var_8)), ((var_9 ^ (!var_1)))));
    #pragma endscop
}
