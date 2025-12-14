/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -643095118;
    var_13 = (-14368 * var_3);

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((max(var_8, 4188099256)));
        var_14 = (min(var_14, (arr_1 [i_0] [i_0])));
    }
    var_15 = ((-(min(((-16307 ? -473016729 : 3377699720527872)), ((min(var_2, var_10)))))));
    #pragma endscop
}
