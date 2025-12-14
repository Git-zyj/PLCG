/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (14066 * 0);

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_12 = (max((max((arr_0 [i_0 + 1]), (!var_7))), (((var_0 >= (arr_0 [i_0 - 2]))))));
        var_13 = ((((min((arr_1 [i_0 - 3] [i_0 + 1]), (arr_1 [i_0 - 3] [7])))) >> (((arr_0 [i_0 - 1]) - 56891))));
        arr_2 [i_0] = ((((-(arr_0 [i_0 + 1]))) ^ ((min(var_6, (arr_1 [i_0 - 2] [i_0 + 1]))))));
        arr_3 [i_0] = ((arr_1 [i_0 + 1] [i_0]) ^ ((min(var_7, var_7))));
    }
    var_14 = (min(-3883043017062800337, 22569));
    var_15 = ((((~var_5) | (~24991))));
    var_16 += (min((((335586856 ^ var_8) ? 1 : var_5)), (!87)));
    #pragma endscop
}
