/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_8;
        arr_4 [i_0 + 2] [16] = ((var_8 && (((!var_11) && (((var_2 ? var_10 : var_1)))))));
        arr_5 [i_0] = ((var_8 | 172) ? ((var_11 ? var_6 : var_0)) : (((var_0 ? var_12 : var_5))));
        arr_6 [i_0] = (((((-3789942822410461135 / var_11) && (182 <= var_2))) ? (var_4 % var_9) : 0));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_9 [i_1] = (((min(var_4, (max(var_5, 9223372036854775802)))) + 59808));
        arr_10 [i_1] [i_1] = -1;
        arr_11 [i_1] = ((182 & (var_6 || var_10)));
        arr_12 [i_1] = var_5;
    }
    var_13 = var_10;
    var_14 = (247 != var_6);
    var_15 &= (var_2 ? (((min(1, var_8)) ? (~var_8) : ((min(var_8, var_2))))) : var_4);
    #pragma endscop
}
