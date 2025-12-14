/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_13;
        var_18 = (max(var_18, (((0 <= (min(var_16, (arr_0 [16]))))))));
        var_19 += ((((((arr_1 [i_0]) ? (max(var_2, 65535)) : 31460))) != (max(var_4, (arr_1 [i_0])))));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = (max((!217), (min((min(21, 2620721445805194829)), 147))));
        arr_6 [i_1] [i_1] = (~var_3);
        var_20 = (((((~(arr_0 [16])))) ? ((min(7, -18))) : ((min((arr_1 [i_1]), 46393)))));
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        var_21 = (min(var_21, 1399048733));
        arr_9 [i_2] |= max(59750, 46393);
    }
    var_22 += var_6;
    var_23 = (max(var_23, ((min((min((min(var_11, 31460)), -2339615467634123306)), var_8)))));
    var_24 = ((var_17 >> (var_7 + 1409832698246400252)));
    #pragma endscop
}
