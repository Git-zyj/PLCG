/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = (min(var_13, (((var_2 ? (~var_11) : (!var_0))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((arr_1 [i_0] [i_0]) - 16776308701633472693);
        arr_3 [i_0] = var_9;
        arr_4 [i_0] = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_14 = ((((max(9223372036854775807, 63255) * var_5))));
        var_15 = 117;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = 17778048958239322572;
        var_16 &= var_3;
        var_17 += ((4398046511103 && (((((min(var_8, -127))) ? 3067221009098294338 : ((min(var_5, 1664206734))))))));
        var_18 = ((((min(var_9, (arr_10 [i_2])))) ? (((((~(arr_9 [i_2]))) / (var_0 ^ var_6)))) : -29369));
    }
    #pragma endscop
}
