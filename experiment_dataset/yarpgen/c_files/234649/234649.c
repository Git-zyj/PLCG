/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] |= arr_2 [i_0] [i_0];
        var_19 += (((-118 + 2147483647) << (138 - 138)));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [20] &= ((112 << (var_0 - 20373)));
        var_20 &= 5459130436392030091;
        var_21 = (((arr_1 [17]) >= ((-((var_14 ^ (arr_4 [i_1])))))));
        arr_8 [i_1] = (((((~(~var_0)))) ? 244 : (arr_0 [i_1])));
    }
    var_22 = 213;

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = -137;
        var_23 = 138;
        var_24 += (arr_5 [i_2]);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_25 = ((var_13 ? (arr_12 [i_3]) : 244));
        var_26 = (min(var_26, (((((((arr_6 [i_3]) * (arr_15 [i_3])))) ? (arr_15 [i_3]) : ((((arr_1 [i_3]) >= (arr_15 [i_3])))))))));
        var_27 = ((((min(var_16, ((min((arr_4 [i_3]), 108)))))) ? var_8 : (((((arr_15 [i_3]) ? (arr_12 [7]) : (arr_12 [i_3]))) % (((arr_14 [i_3]) ? var_11 : 52553))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_28 = (36 << var_18);
        var_29 = ((((min(var_13, 5534))) >> (((max(18446744073709551615, (min(var_9, (arr_15 [i_4]))))) - 18446744073709551590))));
        var_30 = (((((var_5 ^ (arr_13 [i_4] [14]))) >= var_8)));
    }
    #pragma endscop
}
