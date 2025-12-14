/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 32767;
    var_12 = ((((~(var_8 ^ var_8))) >> (((min(var_7, (var_10 - var_2))) + 1057047447871362320))));
    var_13 = (max(var_13, (((((max(var_9, (8864 / 189054511)))) >= ((var_9 ? var_10 : var_9)))))));
    var_14 = ((var_0 ? (((((var_7 ? var_7 : 189054511))) ? ((var_5 ? var_4 : var_0)) : var_9)) : (((!((min(var_3, var_0))))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((((min((~var_2), var_1))) ? ((min(1, (arr_0 [i_0] [i_0])))) : (max(((max(var_4, var_4))), (min(var_6, var_1))))));
        arr_3 [i_0] &= (((((!(-1658102680 || var_0))))) - ((((var_2 ? var_7 : var_8)) + (!var_6))));
        arr_4 [i_0] &= (((((~(4 ^ var_9)))) ? ((((var_5 ^ var_1) ? (((98 ? var_1 : var_7))) : ((var_10 >> (900289885 - 900289876)))))) : (~var_5)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_15 += ((!(var_4 + var_7)));
        var_16 = var_4;
    }
    #pragma endscop
}
