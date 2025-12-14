/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_20 = ((-(((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
        arr_4 [i_0] = (min(((var_17 != (var_18 && 6577590400419490387))), var_15));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((~((max(var_7, var_6)))));
        arr_8 [i_1] = 6577590400419490387;
        var_21 = var_5;
        arr_9 [i_1] [16] = var_13;
        var_22 &= 5324949842310631699;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_14 [i_2] [i_2] = 660415076;
        var_23 = (min(var_23, ((max((min(359738256, var_4)), (((var_15 ? (arr_6 [i_2]) : (arr_10 [i_2])))))))));
    }
    var_24 = (max(var_24, (min(var_11, var_8))));
    #pragma endscop
}
