/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((((((var_10 && var_5) << (-118 + 125)))) | (-32767 - 1))))));
    var_18 = var_6;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_19 = var_5;
        arr_4 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
        var_20 = (max(248, 37015461));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_21 = max(-2091652003, 31395);
        arr_9 [i_1] = -1365534275;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_22 = (((((((arr_11 [i_2]) && -16)))) < (arr_11 [i_2])));
        var_23 = (38 / -5922929313632968302);
        var_24 = (max(var_24, ((!(var_16 / 31395)))));
        var_25 *= var_2;
    }
    var_26 = ((((max(((var_0 ? var_12 : 2722229690)), -1394720784))) ? (min(((3 ? -1486671573 : var_14)), var_7)) : var_5));
    #pragma endscop
}
