/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 = (-var_9 ? (((arr_1 [i_0] [i_0]) >> (-3504 + 3535))) : 21015);
        arr_2 [i_0] [i_0] = ((44553 ? 21034 : 44520));
    }
    var_11 = (min(var_11, var_2));
    var_12 |= var_1;
    var_13 = var_3;
    #pragma endscop
}
