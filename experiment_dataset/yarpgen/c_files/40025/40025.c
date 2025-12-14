/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (min((((~var_9) ? var_8 : ((9223372036854775792 ? 6816806956173607406 : 6816806956173607385)))), (((-9223372036854775796 ? var_7 : var_8)))))));
    var_12 = -var_9;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_13 = (~(arr_1 [i_0]));
        var_14 = ((!(((2433284389525386269 ? 4072017297849772749 : 1783039474185504719)))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_15 = (max(var_15, -7390160177952226421));
        var_16 = (min(var_16, ((((~(~-5783368073627631181))) / (~-4411665661148214552)))));
        arr_5 [i_1] [i_1] |= (~-8835353692419096623);

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_9 [i_1] [i_1] [i_1] &= ((arr_3 [i_1]) | ((((!(arr_6 [0] [i_2] [19]))))));
            arr_10 [i_1] [i_2] [17] = (arr_4 [i_1] [i_2]);
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 21;i_3 += 1) /* same iter space */
        {
            var_17 = ((arr_6 [i_3 - 3] [i_3 - 1] [i_3]) ? (arr_14 [i_3 - 3] [i_3 - 1] [i_3]) : (arr_14 [i_3 - 3] [i_3 - 1] [i_3]));
            var_18 = 6761007790207569471;
        }
        for (int i_4 = 3; i_4 < 21;i_4 += 1) /* same iter space */
        {
            var_19 = arr_13 [i_1] [8];
            var_20 = (((((arr_17 [i_4] [i_4 - 2]) && 9223372019674906624)) || -5783368073627631186));
        }
        var_21 = ((2779840887715681117 != (arr_17 [i_1] [i_1])));
    }
    #pragma endscop
}
