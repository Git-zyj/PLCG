/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((var_7 << (((var_5 + 92) - 21)))) | var_3))) ? 109578189 : var_0);
    var_13 = ((((((var_0 ? 211 : var_0)) >> (((~var_11) + 56789)))) <= -var_8));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_14 = 962887760;
        var_15 = (arr_0 [i_0] [i_0]);
        var_16 = (min(var_16, ((((((arr_0 [i_0] [i_0]) * (arr_1 [i_0] [i_0]))) >= -1)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_17 |= ((!(arr_1 [i_1] [i_1])));

        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_18 = 2985312097;
            arr_7 [i_1] [i_2] = ((!(254 < 12)));
            var_19 = (min(var_19, (((((arr_0 [i_1] [10]) ? 31663 : (arr_2 [i_2])))))));
        }
        arr_8 [i_1] = 17432;
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_20 = ((!(arr_3 [14])));
        var_21 = (max(var_21, ((((~1450127002) ? ((((((-1086762505 + 2147483647) >> (var_3 - 253543842)))) ? ((109578212 | (arr_9 [i_3]))) : (~var_0))) : var_4)))));
        var_22 = ((((((arr_12 [i_3]) ? ((min(var_1, 116))) : ((1536 ? var_11 : var_4))))) < (arr_9 [i_3])));
    }
    #pragma endscop
}
