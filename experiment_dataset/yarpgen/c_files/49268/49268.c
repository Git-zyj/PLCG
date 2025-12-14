/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_13 ? ((366992091 ? var_2 : var_14)) : var_12))) - ((((min(85, 15194149388145564132))) ? (((max(158, var_0)))) : (min(var_14, 8758658760516251519)))));
    var_16 = (min(var_16, ((min(((var_13 ? var_6 : 158)), ((((var_10 == var_8) ? var_5 : var_0))))))));
    var_17 = (max(var_17, ((min(((~((var_13 >> (595526307 - 595526296))))), var_8)))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [19] = 124;
        arr_3 [i_0] [i_0] = (((~(~var_11))));
        arr_4 [i_0 - 1] [i_0] = ((arr_0 [i_0]) ^ (((((3244154640647729888 ? (arr_1 [i_0 + 1]) : var_12))) ? (arr_0 [2]) : (~var_0))));
        arr_5 [i_0 + 2] [i_0 + 2] = (min(var_3, 268435392));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_18 *= (max(15194149388145564103, (arr_6 [i_1])));
        var_19 = var_12;
        arr_9 [i_1] = var_10;
    }
    var_20 = ((var_13 / (((max(var_14, (max(158, var_7))))))));
    #pragma endscop
}
