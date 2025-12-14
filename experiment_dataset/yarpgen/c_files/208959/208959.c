/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!((max(0, 38)))));
    var_18 = ((var_7 ? (((min(var_9, (218 <= 10102009064076071354))))) : var_13));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_19 *= (1605159098 / 10102009064076071354);
        var_20 = ((!(arr_1 [i_0] [i_0])));
        var_21 = 3;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_22 = ((-((((max(32, 21))) ? 218 : (var_14 & 234)))));
        var_23 ^= var_5;
        var_24 = ((-26 ? (((-18 < 165057459) ? (max((arr_2 [i_1] [i_1]), (arr_6 [i_1]))) : (((max(var_2, 72)))))) : (((var_15 ? 255 : (arr_3 [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_25 -= (!var_8);
        var_26 = (max(var_26, (((var_7 ? var_6 : (((var_9 <= (arr_5 [i_2])))))))));
        var_27 = -0;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = arr_6 [i_3];
        var_28 = (((arr_9 [i_3] [i_3]) ? (arr_10 [i_3]) : var_1));
    }
    var_29 = -102;
    var_30 = (((((217 ? 165057491 : 41))) != 95));
    #pragma endscop
}
