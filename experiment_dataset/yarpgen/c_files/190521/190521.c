/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 = (((((arr_0 [i_0]) ? var_6 : 177)) <= (arr_2 [i_0] [i_0])));
        arr_3 [i_0] = ((1 ? (1 * 0) : 177));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((-(min((1 - 1), 1096712696155303271))));
        arr_7 [i_1] = (((((arr_1 [i_1] [i_1]) << (((arr_5 [i_1]) - 16834)))) >> (78 - 47)));
        var_16 = (~((var_14 ? ((min(183, 1))) : ((min(79, 177))))));
    }
    var_17 = ((-var_2 ? (((var_7 & 3221225472) * (var_4 < 157))) : (((((456212176 ? 177 : 4142560323)))))));
    var_18 = var_0;
    #pragma endscop
}
