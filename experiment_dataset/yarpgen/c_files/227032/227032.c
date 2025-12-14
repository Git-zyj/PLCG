/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_19 = ((var_9 & (arr_0 [i_0 - 1])));
        var_20 = ((-839634457 ? (((arr_1 [i_0 + 2]) / -585278356)) : ((max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 1]))))));
        var_21 += (~var_3);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_22 = ((((((arr_8 [i_1]) ? var_5 : 8959))) ? (arr_8 [i_1]) : 0));
            var_23 = 16216;
            var_24 = 0;
            var_25 = ((((max(-1443632433, -1220084074))) ? 1 : 5989719305844907912));
        }
        for (int i_3 = 1; i_3 < 7;i_3 += 1)
        {
            var_26 = var_0;
            var_27 = (18446744073709551615 ? (arr_4 [i_1] [i_1]) : -5887501133002907040);
            var_28 = (max(((((((-9223372036854775807 - 1) + var_9))) ? ((((arr_0 [i_3]) << (var_11 - 62572)))) : (min(var_1, (arr_10 [i_1] [i_1]))))), (~var_4)));
            var_29 = (arr_11 [i_3 + 2] [i_3 + 3]);
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_30 = (((((5989719305844907900 ? var_6 : (12099 && var_8)))) || ((((-var_6 + 2147483647) >> (17188253588724241948 - 17188253588724241942))))));
            var_31 = -var_16;
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_32 = ((-6596337147612460244 ? ((((var_2 != (arr_0 [i_5]))))) : ((max(var_16, (!var_17))))));
            var_33 = (min((((((((arr_17 [i_1] [i_1] [i_1]) && (arr_6 [i_1] [i_5])))) != 200))), (max((((arr_3 [i_1] [i_1]) ? var_8 : 6699835048737655646)), -23013))));
            var_34 = var_5;
        }
        var_35 = (min((max((arr_9 [i_1] [i_1] [i_1]), (arr_9 [i_1] [i_1] [i_1]))), var_17));
    }
    var_36 = (max(var_36, ((((((var_11 || (((var_11 ? var_6 : var_16)))))) << (((var_7 * var_17) - 8834549993422968224)))))));
    var_37 = var_8;
    #pragma endscop
}
