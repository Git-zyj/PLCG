/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_17 *= max(3535444932, -28297);
        var_18 = (((((-28297 == (arr_1 [i_0]))))) < (max((arr_0 [i_0]), var_12)));
        arr_3 [6] [i_0] = (min(((min((min((arr_1 [i_0]), var_6)), var_16))), (((((var_14 ? var_3 : var_11))) ? (18446744073709551601 * 28285) : (arr_2 [i_0])))));
        var_19 = (((1 ? ((min(var_0, 28291))) : 26155)));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_20 = (max(var_7, ((max((var_12 > var_7), (arr_6 [i_1]))))));
        var_21 = var_1;
        arr_7 [i_1] = ((!(arr_5 [i_1] [i_1])));
        var_22 = (max(var_22, ((min(((max(var_8, -4771950120913402090))), ((17247551938494806115 << (var_16 - 7018))))))));
    }
    var_23 = var_12;
    var_24 = (var_12 || var_14);
    var_25 = (!var_11);
    var_26 = (max(var_26, (((var_12 > (min(var_1, (min(-28297, var_9)))))))));
    #pragma endscop
}
