/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((max((arr_0 [i_0]), (arr_0 [i_0]))));
        var_15 = (((max((arr_1 [i_0]), var_10))) ? ((~((-(arr_0 [i_0]))))) : ((((~(arr_1 [i_0]))))));
        arr_3 [i_0] = (-32767 - 1);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_16 = ((((var_1 ? (((63226 ? 3230288624 : 1064624448))) : ((63226 ? (arr_4 [i_1] [i_1]) : 1064624450)))) << (((((arr_6 [i_1]) >> (var_13 - 25679))) - 9933))));
        arr_8 [i_1] = ((min(var_12, 54)));
        arr_9 [i_1] = 1064624459;
        var_17 = (arr_6 [i_1]);
    }
    var_18 = var_6;
    var_19 = (min(var_19, (((((max(((max(41087, var_8))), (~var_2)))) ? var_11 : (~var_13))))));
    #pragma endscop
}
