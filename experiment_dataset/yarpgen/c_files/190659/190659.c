/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= var_2;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_15 = 20063;
        var_16 = (((((-(arr_1 [i_0 - 3])))) ? var_9 : 45473));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_17 = arr_2 [i_1];
        var_18 = ((arr_2 [i_1]) << (((arr_2 [i_1]) - 9405769280992827747)));
        arr_6 [7] = var_12;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_9 [11] [i_2] = ((1 / (((((arr_8 [i_2] [i_2]) + 2147483647)) << (var_7 - 1672155077)))));
        var_19 = (max(var_19, (((((((var_2 != var_11) ? (((arr_7 [i_2]) ? (arr_8 [15] [12]) : 3143484235)) : ((((arr_7 [i_2]) * (arr_8 [i_2] [i_2]))))))) ? (((((278 && (arr_8 [i_2] [i_2])))) << (var_5 - 4294963612))) : var_2)))));
    }
    var_20 = (max(2247326043, -45463));
    #pragma endscop
}
