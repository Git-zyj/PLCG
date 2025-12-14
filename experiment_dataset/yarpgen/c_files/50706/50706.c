/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_6 ? ((((~var_9) * (var_5 / var_16)))) : ((var_6 ? var_0 : var_6)));
    var_19 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (!2457135315);
        var_21 = var_12;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_22 = (((((arr_1 [i_1]) * (arr_6 [i_1])))) ? ((var_14 ? (arr_6 [i_1]) : (arr_6 [i_1]))) : ((var_14 ? (arr_1 [i_1]) : 3487075071450000769)));
        arr_7 [i_1] = (-399431719 ? 8852886505615187996 : 2147483647);
    }

    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_23 = (min(var_23, ((min(var_13, (arr_8 [i_2]))))));
        var_24 *= min(((129 ? (max(9593857568094363620, 6285)) : ((-3883346756687176611 * (arr_9 [i_2]))))), ((max((arr_8 [i_2 + 3]), var_10))));
        var_25 = (max(var_25, (arr_9 [i_2])));
        var_26 |= max((arr_9 [i_2 - 2]), 1202037014);
    }
    #pragma endscop
}
