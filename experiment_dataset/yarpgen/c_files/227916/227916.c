/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_15 = max((((arr_2 [i_0]) | (((arr_3 [i_0]) ? 12 : var_4)))), ((-1074801525519552046 ? -7513417267464532813 : (-9223372036854775807 - 1))));
        var_16 = var_3;
        var_17 = min((min(((var_4 ? 7513417267464532813 : (arr_0 [i_0]))), ((-3854263541416309960 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))))), (min(-7513417267464532827, -7474238902379025074)));
        var_18 = max(-7513417267464532813, -8151490093549113570);

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_19 = (~(~-5227551266159079613));
            var_20 = arr_2 [i_0];
            var_21 = ((((min(0, var_3))) ? (max(var_2, var_10)) : (!var_0)));
            var_22 = var_2;
        }
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_23 = var_10;
        var_24 = (min(var_24, (arr_6 [i_2] [i_2])));
        var_25 = (-(min(7513417267464532799, -8200382883943084288)));
        var_26 = arr_1 [i_2] [i_2];
    }
    var_27 = max(var_11, ((var_11 ? var_2 : var_6)));
    var_28 = 9187343239835811840;
    var_29 = (var_0 ? var_10 : -var_1);
    #pragma endscop
}
