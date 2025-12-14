/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        var_19 = var_9;
        arr_4 [i_0] = (arr_1 [i_0 + 3] [i_0]);
        var_20 = (arr_2 [i_0 - 2]);
        var_21 = (var_10 != 3292555724);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = var_6;
        arr_8 [i_1] [i_1] = (((arr_5 [i_1 + 3]) ? (arr_5 [i_1]) : (var_2 >= var_2)));
        var_22 = (((arr_2 [i_1 + 2]) ? ((((arr_1 [i_1 + 2] [i_1 + 3]) ? 1002411572 : 0))) : (arr_5 [i_1 + 1])));
        arr_9 [i_1] = 1722052162;
    }
    var_23 = ((var_4 ? (((max(1, 1180934959)))) : ((63488 ? (4192256 * var_0) : (max(var_3, var_8))))));
    var_24 = (max(((((max(-1926512590, -13611))) && var_1)), var_10));
    var_25 = var_11;
    #pragma endscop
}
