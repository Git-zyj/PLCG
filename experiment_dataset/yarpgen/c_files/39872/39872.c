/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0 + 1]);
        var_10 -= (((24 ? ((max(var_0, 1))) : (var_0 > var_7))));
    }
    var_11 = ((var_1 ? (((var_3 * 0) ? (!32755) : 512)) : 1));
    var_12 = ((((((~(~-538))) + 2147483647)) << (((-16 + 39) - 23))));
    var_13 = (((!var_7) ? (min(var_5, ((var_8 ? var_2 : var_9)))) : ((((!((min(var_0, var_2)))))))));
    #pragma endscop
}
