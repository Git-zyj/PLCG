/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_20 = (max(-var_17, (max(-var_10, -var_1))));
        var_21 *= ((-(min((min(var_4, 75)), 6))));
        var_22 = (--180);
        var_23 = (min(((((max(var_5, var_11))) ? var_19 : 65529)), 65529));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_24 -= (((var_18 ? var_5 : 240)));
        arr_4 [i_1] [i_1] = ((316 >> (var_10 - 14360)));
        arr_5 [i_1] = 240;
        arr_6 [i_1] = ((-(((max(-18260, 25143))))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_9 [i_2] = (min(((0 ? 18260 : 0)), var_6));
        arr_10 [1] [7] = (~-18260);
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_25 = (((((var_7 ? 240 : 18260))) ? ((min(-18261, 1))) : (1 || var_16)));
        arr_15 [i_3] = (min(-var_18, var_8));
        var_26 = (max((((26517 && 65535) && -2181)), (8893 >= 3098)));
        var_27 = (~25143);
    }
    var_28 = ((((max(30906, -18269))) ? (!202) : -var_1));
    #pragma endscop
}
