/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_17 = (max(var_17, (var_12 / var_1)));
        var_18 = ((0 && ((min(250, 236)))));
        var_19 = ((55 ? 5 : 111));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (((~(((arr_4 [i_1]) ? (arr_4 [i_1]) : 2)))))));
        var_21 = (min(var_21, (((255 ? 111 : 27)))));
    }
    var_22 = (var_9 & var_7);
    var_23 = (min(var_23, ((max(var_2, ((var_13 + (~var_14))))))));
    #pragma endscop
}
